#include<stdio.h>
/*display the mathematical tabels for the number the users preference*/
int main() {
    int num,i;
    printf("enter an integer:");
    scanf("%d",&num);
    printf("multiplication of the number is %d\n",num);
    for(i=1; i<=10; i++){
        printf("%d*%d=%d\n",num,i,num*i);
    }

return 0;
}