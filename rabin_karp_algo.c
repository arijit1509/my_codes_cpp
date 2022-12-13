#include <stdio.h>
#include<string.h>

#define d 256

void search(char text[], char pat[], int q){
    int n=strlen(text);
    int m=strlen(pat);
    int p=0;
    int t=0;
    int i,j;
    int h=1;

    for(i=0;i<m-1;i++){
        h=(h*d)%q;
    }

    for(i=0;i<m;i++){
        p=(p*d+pat[i])%q;
        t=(t*d+text[i])%q;
    }

    for(i=0;i<=n-m;i++){


      if(p==t){  
        for(j=0;j<m;j++)
            if(text[i+j]!=pat[j])
                break;
            

        if(j==m)
            printf("pattrn found at index %d",i);
      } 

      if(i<n-m){
        t=(d*(t-text[i]*h)+text[i+m])%q;

        if(t<0){
            t=t+q;
        }
      }    
        
    }
}

int main(){
    char text[]="GEEKS FOR GEEKS";
    char pat[]="GEEK";
    
    int q=101;

    search(text, pat, q);
    return 0;
}