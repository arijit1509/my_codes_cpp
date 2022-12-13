#include <stdio.h>
#include<string.h>

void search(char* text, char* pat){
    int n=strlen(text);
    int m=strlen(pat);

    int i,j;

    for(i=0;i<=n-m;i++){
        for(j=0;j<m;j++)
            if(text[i+j]!=pat[j])
                break;
            

        if(j==m)
            printf("pattrn found at index %d",i);
            
        
    }
}

int main(){
    char text[]="AABAACAADAABAAABAA";
    char pat[]="AABA";

    search(text, pat);
    return 0;
}