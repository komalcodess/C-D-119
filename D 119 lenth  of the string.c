#include <stdio.h>
int main(){
char s[10];
int len=0;
printf("Enter the string: ");
scanf("%s",s);

for(int i=0;s[i]!=0;i++){
    len++;

}
printf("Length is: %d",len);
       }
