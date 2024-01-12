#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number: ");
    scanf("%d",&n);
    if(n<0){
        printf("Absolute Value: %d",n*(-1));
    }
    else if (n>0)
    {
        printf("Absolute Value: %d",n);
    }
    else{
        printf("Absolute Value: %d",n);
    }
    return 0;
}