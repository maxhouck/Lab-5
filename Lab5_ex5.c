#include<stdio.h>
#include<malloc.h>
void main()
{
    char *a = "hey";
    //free( a ); //remove this line and the code will execute  
    a = "hello"; 
    printf("%s",a);
}