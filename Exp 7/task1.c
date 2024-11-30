/*
    Expt. No : 7 (task 1)
    Title : WAP to find the largest element in an array.


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
printf("Enter %d elements:\n", n);
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
int largest = arr[0];
for (int i = 1; i < n; i++) {
if (arr[i] > largest) {
largest = arr[i];
}
}
printf("The largest element in the array is: %d\n", largest);
return 0;
}

/* OUTPUT


Enter the number of elements in the array: 5
Enter 5 elements:
8
9
10
11
12
The largest element in the array is: 12

*/
