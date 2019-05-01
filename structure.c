#include <stdio.h>
#include <stdlib.h>

struct name {
    char first_name[100];
    char last_name[100];
};

struct employee {
    struct name e_name;
    int age;
};

int main()
{
    struct employee employee1;

    struct employee employee2;
    struct employee *p_employee2= &employee2;

    /* using normal struct (without pointers) */

    printf("First name employee1 ? ");
    scanf("%s", employee1.e_name.first_name);

    printf("Last name employee1 ? ");
    scanf("%s", employee1.e_name.last_name);

    printf("Age employee1 ? ");
    scanf("%d", &employee1.age);

    display_details(employee1);

    printf("\n\n");

    /* Using pointers */

    printf("First name employee2 ? ");
    scanf("%s", p_employee2->e_name.first_name);

    printf("Last name employee2 ? ");
    scanf("%s", p_employee2->e_name.last_name);

    printf("Age employee2 ? ");
    scanf("%d", &p_employee2->age);

    p_display_details(p_employee2);

    return 0;
}

void display_details(struct employee e) {
    printf("\n\n");

    printf("First name: %s\n", e.e_name.first_name);
    printf("Last name: %s\n", e.e_name.last_name);
    printf("Age: %d\n", e.age);
}

void p_display_details(struct employee *p_e) {
    printf("\n\n");

    printf("First name: %s\n", p_e->e_name.first_name);
    printf("Last name: %s\n", p_e->e_name.last_name);
    printf("Age: %d\n", p_e->age);
}
