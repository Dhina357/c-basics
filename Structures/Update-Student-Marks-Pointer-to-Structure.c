#include <stdio.h>
#include <stdlib.h>
struct students{
    int roll_No;
    char name[50];
    double mark;
    int bonus;
};
int main(){

    struct students *s=(struct students*)malloc(sizeof(struct students));
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%d %s %lf %d",&s->roll_No,s->name,&s->mark,&s->bonus);
        printf("Roll No: %d\nName: %s\nMark: %lf\nBonus: %d\n",s->roll_No,s->name,s->mark,s->bonus);
        if((s->mark+s->bonus)<100){
            s->mark=s->mark+(double)s->bonus;
        }
        else
        s->mark=100;
        printf("Updated Marks: %lf\n",s->mark);
    }
    return 0;
}