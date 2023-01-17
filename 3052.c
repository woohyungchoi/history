#include <stdio.h>

int main(){
	int i,j,num,temp=0,count=0;
	
	int arr[10]={0};
	for(i=0;i<10;i++){
		scanf("%d",&num);
		arr[i]=num%42;
	}
	for(i=0;i<10;i++){
		count=0;
		for(j=i+1;j<10;j++){
			if(arr[i]==arr[j])
				count++;
		}
		if(count==0)temp++;
		
		}
	
	
	printf("%d",temp);
	
}
