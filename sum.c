// include header file - stdio.h - program accesibility -  printf and scanf
#include<stdio.h>

// main function  - entry of the program

/*
Synatx:
------
data type - int, void, float, char, double


*datatype functioname()
*{

  * code to display
*}
*/

int main()
{

/*
Algorithm - steps to solve a problem 
------------------------------------

1. number -  input: input two number
2. create two variable and store these number
3. add these two number and store in variable
4. display
*/  

printf("Abee.. Input kr do number: ");

int num1;
int num2;

scanf("%d %d",&num1,&num2);


int result; // declaration
result = num1 + num2; // initialization



printf("%d + %d = %d",num1,num2,result);

    return 0;
}

