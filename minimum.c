#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int min=a[0];
    for(int i=0;i<=5;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
        printf("%d",min); 

}