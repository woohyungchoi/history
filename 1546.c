
#include <stdio.h>

int main(){
	int max=0,i,n;
	float sum=0;
	scanf("%d\n",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);		
		if(arr[i]>max){
			max=arr[i];
		}
	}
	for(i=0;i<n;i++){
		sum+=(float)arr[i]/max*100;
		
	}
	printf("%f",sum/n);
	}
// 	변수 선언할때 하나하나 값을 지정해줘야되는거 이제암