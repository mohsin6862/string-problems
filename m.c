#include<stdio.h>
#include<limits.h>
int main(){
 int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n;i++){
        scanf("%d",&a[i]);
    }
    int min= INT_MAX;
    int max= INT_MIN;
    int minpos,maxpos;
    for(int i=0; i<n;i++){
        if(a[i]<min){
            min=a[i];
            minpos=i;
        }
        if(a[i]>max){
            max=a[i];
            maxpos=i;
        }
    }
     
    int temp=a[minpos];
         a[minpos]=a[maxpos];
         a[maxpos]=temp;
         
     for(int i=0;i<n;i++){
         printf("%d ",a[i]);
     }
 
    return 0;
    
}