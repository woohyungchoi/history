#include <stdio.h>
#include <string.h>
int main(){
	int i,n,j=0,num=0,temp=0;
	scanf("%d",&n);
	char arr[80];
	while(n>j){
	scanf("%s",arr);
		num=0,temp=0;
		for(i=0;i<strlen(arr);i++){
		if(arr[i]=='0'){
			temp++;
			num+=temp;
		}
		else if(arr[i]=='x'){
			temp=0;
		}
	}
		
		j++;
		arr[0]='\0';
		
		printf("%d\n",num);
	}
}
//문자열 값을 비교할땐 arr[]=='x' 이런식으로 쓰기
// strstr(,)함수는 내가 찾고자하는 문자열 찾을 수 있음
