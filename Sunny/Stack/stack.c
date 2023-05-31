#include<stdio.h>

void main(){
    printf("Enter the length of Stack : "); 
    int n; 
    scanf("%d \n", &n); 
    int stack[n], top = -1;

    for(int i = 0; i<n; i++){
        printf("Enter the element \n"); 
        scanf("%d", &stack[i]); 
    } 
    
    for(int i = 0; i<n; i++){
        printf("%d -> ", i); 
    }
}    
