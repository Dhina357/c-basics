#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int roll_No;
    char name[50];
    double mark;
}students;
int main(){
    int n;
    scanf("%d",&n);
    students *s=(students*)malloc(n*sizeof(students));
    double total=0;
    for(int i=0;i<n;i++){
        scanf("%d %s %lf",&s[i].roll_No,s[i].name,&s[i].mark);
        total+=s[i].mark;
    }
    printf("Total Marks: %lf\nAverage Marks: %lf",total,total/n);
    return 0;
}
