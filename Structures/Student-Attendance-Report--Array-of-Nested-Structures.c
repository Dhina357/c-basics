#include <stdio.h>
struct Attendance{
    int totalclasses;
    int attendedclasses;
};
struct Student{
    int roll;
    char name[50];
    struct Attendance attend;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Student s[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %d %d",&s[i].roll,s[i].name,&s[i].attend.totalclasses,&s[i].attend.attendedclasses);
    }
    for(int i=0;i<n;i++){
        double attendence = ((double)s[i].attend.attendedclasses/(double)s[i].attend.totalclasses)*100;
        printf("%s %.2lf%%\n",s[i].name, attendence);
    }
    return 0;
}