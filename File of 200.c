/*
Name: Nancy moraa Kebaso 
reg no:CT101/G/23248/24
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
char paragraph;
//prompt the user to enter paragraph upto 200 words

FILE *fptr;
    fptr=fopen("c:\\output.txt","r");
    if(fptr==NULL)
    {
    printf("error in opening tha file");
    exit(1);
    }
    printf("enter paragraph upto 200 words");
    scanf("%d",&paragraph);
    fprintf(fptr,"the paragraph entered is:%d", paragraph);
    fclose(fptr);
    
    return 0;
}
