#include<stdio.h>
#include<string.h>

int main(){
    char str1[150],rev[150],len=0;
    printf("Enter the string :");
    scanf("%s",str1);
    //printf("%s",str1);
    int i=0;
    while (str1[i]!='\0')
    {
       len++;
       i++;

    }
    int j=0;
    while(str1[j] !='\0')
    {
       len--;
       rev[len]=str1[j];
       j++;
    }
    rev[j]='\0';
    //printf("%s",rev);
    int check = strcmp(rev,str1);
    if (check==0)
    {
        printf("String is palindrome");
    }
    else
    {
        printf("String is not palindrome");
    }
    return 0;

}