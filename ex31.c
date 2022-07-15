#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char *name;
    char *curse;
    int age;
} Student;

void printStd(Student stud) {
    printf("Nome: %s\n", stud.name);
    printf("Curso: %s\n", stud.curse);
    printf("N USP: %d\n",stud.id);
    printf("IDADE: %d\n\n", stud.age);
}

char *readEnd() {
    char *valRet = NULL;
    char aux;
    int count = 0;
    while(1) {
        scanf("%c", &aux);
        if(aux == '\n') {
            break;
        }
        valRet = realloc(valRet, (count + 1) * sizeof(char));
        valRet[count] = aux;
        count++;
    }
    valRet = realloc(valRet, (count + 1) * sizeof(char));
    valRet[count] = '\0';
    return valRet;
}

int main() {
    Student *students = NULL;
    int count = 0;
    int aux, op;
    char *auxPointer;
    while(1) {
        scanf("%d\n", &aux);
        if(aux == -1) {
            break;
        }
        students = realloc(students, (count + 1) * sizeof(Student) );
        students[count].id = aux;
        students[count].name = readEnd();
        students[count].curse = readEnd();
        scanf("%d\n", &students[count].age);
        count++;
    }
    while(1) {
        scanf("%d", &op);
        if(op == -1) {
            break;
        }
        switch(op) {
            case 1:
                scanf("%d", &aux);
                for(int i = 0; i < count; i++) {
                    if(students[i].id == aux) {
                        printStd(*(students + i));
                    }
                }
                break;
            case 2:
                auxPointer = readEnd();
                for(int i = 0; i < count; i++) {
                    if(strcmp(students[i].curse, auxPointer) == 0) {
                        printStd(*(students + i));
                    }
                }
                free(auxPointer);
                break;
            case 3:
                for(int i = 0; i < count; i++) {
                    printStd(*(students + i));
                }
                break;
        }
    }

    for(int i = 0; i < count; i++) {
        free(students[i].name);
        free(students[i].curse);
    }
    free(students);
    return 0;
}
