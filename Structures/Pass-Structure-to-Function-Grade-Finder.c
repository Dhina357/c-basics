#include <stdio.h>
struct students{
    char name[50];
    int mark;
};
int main(){
    int n;
    scanf("%d",&n);
    struct students s;
    while(n--){
        printf("Enter the Name and marks between the 0-100:");
        scanf("%s %d",s.name,&s.mark);
        if(90<=s.mark)
        printf("%s Grade: A\n",s.name);
        else if(75<=s.mark)
        printf("%s Grade: B\n",s.name);
        else if(50<=s.mark)
        printf("%s Grade: C\n",s.name);
        else
        printf("%s Grade: F\n",s.name);
    }
    return 0;
}