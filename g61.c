/*Zara is a mathematics enthusiast exploring the intricacies of arithmetic operations. 



Create a simple program to assist Zara in understanding the post-increment and pre-increment operators. Prompt two integers and use these operators to calculate and display the value of d, following the expression d = a++ + ++b.

Input format :
The input consists of two space-separated integers, representing a, and b.

Output format :
The output prints the value of d after performing the given operation.*/

#include <stdio.h> 
int main() {
    int d,a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    d =  a++ + ++b;
    printf("%d ", d);
}
