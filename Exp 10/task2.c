/*
    Expt. No : 10 (task 2)
    Title : WAP to print the elements of an array in reverse order using pointers.


    Name: Ansari Huzaifa Javed Ahmed
    Class & Div: ECS-E
    UIN: 241S035
 */


 #include <stdio.h>
int main() {
 int n;
 printf("Enter the number of elements in the array: ");
 scanf("%d", &n);
 int arr[n];
 int *ptr = arr;
 printf("Enter %d elements:\n", n);
 for (int i = 0; i < n; i++) {
 scanf("%d", ptr + i);
 }
 printf("Array elements in reverse order:\n");
 for (int i = n - 1; i >= 0; i--) {
 printf("%d ", *(ptr + i));
 }
 printf("\n");
 return 0;
}

/* OUTPUT

Enter the number of elements in the array: 2
Enter 2 elements:
10
12
Array elements in reverse order:
12 10

*/
