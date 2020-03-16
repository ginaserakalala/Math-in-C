#include <stdio.h>

//This is a comment. It gets ignored by the compiler,so we can write notes after the double forward slashes

int main(void)
{
    int a=3;
    int b=5;
    int result =0;

    //Doing things with variables
    result=a+b;
    printf("a plus b = %d\n",result);

    //You can also do the operation inside the printf
    //Here's an example of that with subtraction
    printf("a minus b =%d\n",a-b);

    //You dont have to do it with variables only
    //Heres an example of that with multiplication
    printf("10 times 5 = %d",10*5);

    //Heres a look at division
    //Notice that the decimals are truncated because we're dealing with integers.
    printf("12 divided by 5 =%d\n",12/5);

    //Now let's force floating point numbers by including a decimals
    //Notice that even though these are integers,the decimal forces them to be
    //treated as floating point numbers,so they aren't truncated
    //Note that I'm printing a double with %d,not an int with %i
    printf("12.0 divided by 5 =%f",12.0/5);

    return 0;
}