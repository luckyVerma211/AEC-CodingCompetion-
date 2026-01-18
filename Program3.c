#include <stdio.h>
struct alphabet{
    char alpha;
    int count;
};
int main() {
    char sentence[50]="Happy New Year 2026";
    struct alphabet arr[26];
    int j=0;

    for(int i=0;sentence[i]!='\0';i++){
        int asciivalue=sentence[i];
        if(!((asciivalue>=97 && asciivalue<=122)||
        (asciivalue>=65 && asciivalue<=90)))
            continue;

        char ch=(char)asciivalue;
        int exist=0;

        for(int k=0;k<j;k++){
            if(arr[k].alpha==ch){
                arr[k].count+=1;
                exist=1;
                break;
            }
        }
        if(exist==0){
           arr[j].alpha=ch;
           arr[j].count=1;
           j++;
        }
    }
    printf("The ocurrence of alphabet in the string is:\n");
    for(int i=0;i<j;i++){
        printf("%c-%d\t",arr[i].alpha,arr[i].count);
    }
    return 0;
}