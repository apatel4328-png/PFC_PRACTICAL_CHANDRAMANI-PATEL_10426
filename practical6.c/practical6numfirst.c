#include<stdio.h>
int main(){
    // Practical 6 : Q.1. print numbers from a to b using loops.// 
    int a;
    printf("enter number a:");
    scanf("%d",&a);
    int b;
    printf("enter number b:");
    scanf("%d",&b);
    printf("numbers from %d to %d is ",a,b);
    for(int i=a;i<=b;i++){
        printf("%d ",i);
    }
    return 0;

}
//output:
//enter number a:2
//enter number b:10
//numbers from 2 to 10 is 2 3 4 5 6 7 8 9 10 
