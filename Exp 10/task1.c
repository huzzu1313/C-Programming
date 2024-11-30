/*
    Expt. No : 10 (task 1)
    Title : WAP to add two numbers using pointers.


    Name: Ansari Huzaifa Javed Ahmed
    Class & Div: ECS-E
    UIN: 241S035
 */



 #include <stdio.h>
int main() {
 int num1, num2, sum;
 int *ptr1, *ptr2, *ptrSum;
 printf("Enter the first number: ");
 scanf("%d", &num1);
 printf("Enter the second number: ");
 scanf("%d", &num2);
 ptr1 = &num1;
 ptr2 = &num2;
 ptrSum = &sum;
 *ptrSum = *ptr1 + *ptr2;
 printf("Sum of %d and %d is %d\n", *ptr1, *ptr2, *ptrSum);
 return 0;
}


/* OUTPUT

Enter the first number: 60
Enter the second number: 9
Sum of 60 and 9 is 69

*/
