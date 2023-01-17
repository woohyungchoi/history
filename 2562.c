#include <stdio.h>

int main(){ 
	int i,max,temp=0;				//초기화 안해서 런타임 에러났음
	int n[9];
	for(i=0;i<9;i++){
	scanf("%d",&n[i]);
	}
	max=n[0];
	for(i=0;i<9;i++){
		if(n[i]>max){
			max=n[i];
			temp=i;
		}
	}
	printf("%d\n%d",n[temp],temp+1);
}
