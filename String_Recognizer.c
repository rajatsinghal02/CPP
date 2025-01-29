/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

const char* recognizePattern(const char *str)
{
    int i=0;
    if(strcmp(str,"a")==0){
        return "a";
    }
    if(strcmp(str,"abb")==0)
    {
        return "abb";
    }
    while(str[i]=='a')
    {
    i++;
    if(str[i]=='b')
    {
        while(str[i]=='b') i++;
        if(str[i]=='\0'){
            return "a*b+";
        }
    }
    }
    return NULL;
}
int main()
{
    char input[100];
    printf("Enter a string: ");
    scanf("%s",input);
    const char *pattern = recognizePattern(input);
    if(pattern)
    {
        printf("The string matches the pattern \"%s\".\n",pattern);
    }
    else{
        printf("The string does not match any pattern.\n");
    }

    return 0;
}
