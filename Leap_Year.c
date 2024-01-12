#include<stdio.h>
int main(){
    int n;
    printf("Enter The Year: ");
    scanf("%d",&n);

    if(n%100==0){
        if(n%4==0){
            printf("This is a Leap Year.");
        }
        else{
            printf("This is NOT a Leap Year.");  
        }
    }
    else{
        if(n%4==0){
            printf("This is a Leap Year.");
        }
        else{
            printf("This is NOT a Leap Year.");  
        }
    }
}