#include <stdio.h>
#include "conio.h"
#include<stdlib.h>
void main(){
    int a[100],n,i,num,found=0;
    printf("Enter the number of elements");
    scanf("%d", &n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    scanf("%d", &a[i]);
    printf("Enter the element to be searched");
    scanf("%d", &num);
    for(i=0;i<5;i++){
        if(a[i]==num){
            printf("Element found at positon %d", i+1);
            found=1;
            break;
        }
    }
    if(!found)
    printf("Error");
}
