#include <stdio.h>
struct students{
    int roll_No;
    char name[50];
    struct address{
        char city[50];
        int pin;
    }add;
};
int main(){
    struct students s;
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%d %s %s %d",&s.roll_No,s.name,s.add.city,&s.add.pin);
        printf("Roll No: %d\nName: %s\nCity: %s\nPin Code: %d\n",s.roll_No,s.name,s.add.city,s.add.pin);
    }
    return 0;
}