#include <stdio.h>
#include <stdlib.h>
struct students{
    int roll_No;
    char name[50];
    double mark;
};
struct students* createStudent(){
    struct students *s=(struct students*)malloc(sizeof(struct students));
    scanf("%d %s %lf",&s->roll_No,s->name,&s->mark);
    return s;
}
int main(){
        struct  students *s=createStudent();
        printf("Student Created\nRoll No: %d\nName: %s\nMarks: %lf\n",s->roll_No,s->name,s->mark);
        free(s);
    return 0;
}