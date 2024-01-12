#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("This is Even Number.");
    }
    else{
        printf("This is Odd Number.");
    }
}