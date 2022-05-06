#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "A string", *p;
    p=&str[0];
    int i=0;
    printf("\nLetter on the index %d: %c, Pointer position is: %d, Letter is: %c",i,*p,i,p[3]);
    i+=2;
    *p=str[i+2];
    printf("\nPointer position is: %d, Letter is: %c, Letter is: %c",i,*p,p[i+5]);
    
    return 0;
}
    