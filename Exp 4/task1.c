/*
    Expt. No : 4
    Title : WAP to find all the prime numbers between two numbers using functions.


    Name: Ansari Huzaifa Javed Ahmed
    Class & Div: ECS-E
    UIN: 241S035
 */


 #include <stdio.h>
int isPrime(int num){
if (num < 2){
return 0;
}
for (int i = 2; i * i <= num; i++){
if (num % i == 0)
{
return 0;
}
}
return 1;
}
void findPrimes(int start, int end){
printf("Prime numbers between %d and %d are:\n", start, end);
for (int i = start; i <= end; i++)
{
if (isPrime(i))
{
printf("%d ", i);
}
}
printf("\n");
}
int main(){
int start, end;
printf("Enter the starting number: ");
scanf("%d", &start);
printf("Enter the ending number: ");
scanf("%d", &end);
findPrimes(start, end);
return 0;
}

/* OUTPUT

Enter the starting number: 1
Enter the ending number: 10
Prime numbers between 1 and 10 are:
2 3 5 7

*/
