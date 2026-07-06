#include <stdio.h>
typedef struct{
    int roll;
    char name[50];
    float totalFee;
    double paidFee;

}StudentFee;
int main(){
    int n;
    scanf("%d",&n);
    StudentFee s;
    while(n--){
        scanf("%d %s %f %lf",&s.roll,s.name,&s.totalFee,&s.paidFee);
        if(s.totalFee-s.paidFee>=0)
        printf("Balance Fee: %lf\n",s.totalFee-s.paidFee);
        else
        printf("invalid input\n");
    }
    return 0;
}