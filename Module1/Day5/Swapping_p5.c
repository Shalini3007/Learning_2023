#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

void swapFields(struct Person *p1, struct Person *p2) {
    // Swaping
    char tempname[50];
    strcpy(tempname, p1->name);
    strcpy(p1->name, p2->name);
    strcpy(p2->name, tempname);

    // Swap the age field
    int tempage = p1->age;
    p1->age = p2->age;
    p2->age = tempage;
}

int main() {
    struct Person person1, person2;
    printf("----------Enter the details of person 1---------\n");
    printf("Enter name: ");
    scanf("%s", person1.name);
    printf("Enter age: ");
    scanf("%d", &(person1.age));

    printf("\n-----------Enter the details of person 2---------\n");
    printf("Enter name: ");
    scanf("%s", person2.name);
    printf("Enter age: ");
    scanf("%d", &(person2.age));

    printf("\n----------Before swapping----------\n");
    printf("Person 1: Name = %s, Age = %d\n", person1.name, person1.age);
    printf("Person 2: Name = %s, Age = %d\n", person2.name, person2.age);

    // Swapping the fields of person1 and person2
    swapFields(&person1, &person2);

    printf("\n------------After swapping----------\n");
    printf("Person 1 Name = %s, Age = %d\n", person1.name, person1.age);
    printf("Person 2 Name = %s, Age = %d\n", person2.name, person2.age);

    return 0;
}