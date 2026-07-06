#include <stdio.h>
typedef struct{
    int roll_No;
    char name[50];
    int mark[3];
}students;
int main(){
    int n;
    scanf("%d",&n);
    students s;
    while(n--){
        int total=0;
        scanf("%d %s",&s.roll_No,s.name);
        for(int i=0;i<3;i++){
            scanf("%d",&s.mark[i]);
            total+=s.mark[i];
        }
        printf("Total: %d\nPercentage: %lf\n",total,(double)total/3);
    }
    return 0;
}