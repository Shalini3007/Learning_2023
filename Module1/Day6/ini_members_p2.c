#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//definition
struct Student
{
   int rollno;
   char name[20];
   float marks;
};
void init_Students(struct Student *students, int size)
{
   for (int i = 0; i < size; i++)
   {
      students[i].rollno = 0;
      strcpy(students[i].name, "");
      students[i].marks = 0.0;
   }
}
int main()
{
   int size;
   printf("Enter the no of students: ");
   scanf("%d", &size);
   getchar();
   struct Student *students = malloc(size * sizeof(struct Student));

   if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
   }

   init_Students(students, size);
   for (int i = 0; i < size; i++)
   {
      printf("\nStudent %d:\n", i + 1);
      printf("Roll No: %d\n", students[i].rollno);
      printf("Name: %s\n", students[i].name);
      printf("Marks: %.1f\n\n", students[i].marks);
   }
   free(students);
   return 0;
}