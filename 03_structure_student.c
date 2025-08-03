#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s1;

    s1.id = 101;
    strcpy(s1.name, "Alice");
    s1.marks = 89.5;

    printf("ID: %d\nName: %s\nMarks: %.2f\n", s1.id, s1.name, s1.marks);
    return 0;
}
