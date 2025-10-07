#include <stdio.h>
#include <string.h>
int main() {
char str[100];
fgets(str,sizeof(str),stdin);
int flag = 1;
char temp;
int len = strlen(str);
char str2[100];
fgets(str2,sizeof(str2),stdin);
int len2 = strlen(str2);
if(len != len2 ){
    printf("non anagram");
    
}
for(int i =0;i<len-1;i++){
    for(int j = 1;j<len-1;j++){
        if(str[i] > str[j]){
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }
        if(str2[i] > str2[j]){
            temp = str2[i];
            str2[i] = str2[j];
            str2[j] = temp;
            if(str[i] != str2[i]){
                flag = 0;
            }
        }
    }
}
    if(flag){
        printf("anagram");
    }else{
        printf("not anagram");
    }
    

    return 0;
}
