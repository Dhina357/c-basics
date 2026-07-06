#include <stdio.h>
#include <stdlib.h>
struct students{
    int roll_no;
    char name[100];
    double mark;
};
int main(){
    int n;
    double marks=0;
    scanf("%d",&n);
    struct students s[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %lf",&s[i].roll_no,s[i].name,&s[i].mark);
        marks+=s[i].mark;
    }
    printf("Average Marks: %lf",marks/n);
}
