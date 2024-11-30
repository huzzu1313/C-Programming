/*
    Expt. No : 9
    Title : Design a structure student_record to contain name, roll_number, and total
    marks obtained. Write a program to read 5 students data from the user and then
    display the topper on the screen.


    Name: Ansari Huzaifa Javed Ahmed
    Class & Div: ECS-E
    UIN: 241S035
 */

 #include <stdio.h>
#include <string.h>
struct student_record {
 char name[50];
 int roll_number;
 float total_marks;
};
int main() {
 struct student_record students[5];
 int topperIndex = 0;
 for (int i = 0; i < 5; i++) {
 printf("Enter details for student %d:\n", i + 1);
 printf("Name: ");
 scanf(" %[^\n]", students[i].name);
 printf("Roll Number: ");
 scanf("%d", &students[i].roll_number);
 printf("Total Marks: ");
 scanf("%f", &students[i].total_marks);
 if (students[i].total_marks > students[topperIndex].total_marks) {
 topperIndex = i;
 }
 }
 printf("\nTopper:\n");
 printf("Name: %s\n", students[topperIndex].name);
 printf("Roll Number: %d\n", students[topperIndex].roll_number);
 printf("Total Marks: %.2f\n", students[topperIndex].total_marks);
 return 0;
}
/* OUTPUT

Enter details for student 1:
Name: huzaifa
Roll Number: 2
Total Marks: 90
Enter details for student 2:
Name: hamza
Roll Number: 3
Total Marks: 80
Enter details for student 3:
Name: munaaf
Roll Number: 4
Total Marks: 70
Enter details for student 4:
Name: abdullah
Roll Number: 1
Total Marks: 60
Enter details for student 5:
Name: saqlain
Roll Number: 5
Total Marks: 50

Topper:
Name: huzaifa
Roll Number: 2
Total Marks: 90.00


*/
