#include <stdio.h>
int main(){
    char statement[]="this is a file";
    char reverse[20];

    int n=sizeof(statement)/sizeof(statement[0]);
    int start=0;
    int count=0;

    int j=0;
    for(int i=n-2;i>=-1;i--){
        if(statement[i]==' ' || i==-1){
            start=i+1;
            for(int k=0;k<count;k++){
                reverse[j++]=statement[start++];
            }
            if(i!=-1)
                reverse[j++]=' ';
            count=0;
        }
        else
            count++;
    }
    reverse[j]='\0';

    printf("The Reversed string word by word is:\n");
    for(int i=0;reverse[i]!='\0';i++)
        printf("%c",reverse[i]);
    return 0;
}