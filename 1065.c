#include <stdio.h>
int d(int n){
	int s,j=0,temp,count=0,result=0;
	int arr[10];
	if(n>99){
		for(int i=100;i<=n;i++){
			temp=i;
			while(temp!=0){
				arr[j]=temp%10; // 123을 10으로 나눈 나머지 3 12을 10으로 나눈 나머지 2 1을 10으로 나눈 나머지1
				temp/=10;		//123을 10으로 나눈 몫	 12;12을 10으로 나눈 몫	 1 1을 10으로 나눈 몫 0
				j++;count++;
			}
			
			if((arr[j-1]-arr[j-2])==(arr[j-2]-arr[j-3])){
					result++;
				}
			j=0;
			
		}
		result+=99;
		return result;
	}
	
	else
	return n;	
	
}
int main(){
	int n,count=0;
	scanf("%d",&n);
	count=d(n);
	printf("%d",count);
}