#include <stdio.h>

int main(){
	int n,sum=0;
	scanf("%d",&n);
	char str[n];
	scanf("%s",str);
	for(int i=0;i<n;i++){
		
		sum+=str[i]-'0';
	}
	printf("%d",sum);
}
// 문자열 한방에 입력 받을 수 있음. 글고 문자열 숫자뺄때 아스키코드 - '0' 해주면 댐;