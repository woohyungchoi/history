#include <stdio.h>

int main(){
    int n,i,max,min;
    scanf("%d",&n);
    int arr[1000000];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0],min=arr[0];
    for(i=0;i<n;i++){
        if(max<arr[i]){
			max=arr[i];
		}
		if(min>arr[i]){
			min=arr[i];
		}
    }

		printf("%d %d",min,max);
	
}
   
  