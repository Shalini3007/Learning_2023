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

void parse_Str(const char *ip, struct Student *student)
{
   const char *delimeter = " ";
   char *token;

   char *ip_Copy = strdup(ip);
   token = strtok(ip_Copy, delimeter);

   if (token != NULL)
   {
      student->rollno = atoi(token);

      token = strtok(NULL, delimeter);
      strncpy(student->name, token, sizeof(student->name) - 1);
      student->name[sizeof(student->name) - 1] = '\0';

      token = strtok(NULL, delimeter);
      student->marks = atof(token);
   }

   free(ip_Copy);
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

   char input[100];
   for (int i = 0; i < size; i++)
   {
      printf("Enter the student %d details (Rollno Name Marks): ", i + 1);
      fgets(input, sizeof(input), stdin);
      input[strcspn(input, "\n")] = '\0';

      parse_Str(input, &students[i]);
   }
   for (int i = 0; i < size; i++)
   {
      printf("\nStudent %d:\n", i + 1);
      printf("Roll No: %d\n", students[i].rollno);
      printf("Name: %s\n", students[i].name);
      printf("Marks: %.2f\n\n", students[i].marks);
   }

   free(students);

   return 0;
}