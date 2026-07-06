#include <stdio.h>
#include <stdlib.h>
struct student{
    int roll_No;
    char name[100];
    int age;
    double mark;
};
int main(){
    int n;
    scanf("%d",&n);
    struct student s;
    while(n--){
        scanf("%d %s %d %lf",&s.roll_No,s.name,&s.age,&s.mark);
        printf("Roll No: %d\nName: %s\nAge: %d\nMarks: %lf\n",s.roll_No,s.name,s.age,s.mark);
    }
    return 0;
}