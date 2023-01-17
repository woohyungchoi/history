#include <stdio.h>
#include <string.h>
int main(){
	char s[100];
	int len=0;
	int arr[26];
	memset(arr,-1,sizeof(arr));
	scanf("%s",s);
	len=strlen(s);
	for(int i=97;i<123;i++){
			int j=0;
		for(j=0;j<len;j++){
			if(s[j]==i){
				arr[s[j]-'a']=j;
		 	break;
			}
		}
	}
	
	for(int i=0;i<26;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
// 문자열과 비교시 아스키코드에 설정된 정수값을 사용하면 문자열과 비교도 됨
// 결국 다 비교했어야함 반복문 한번만 쓰는 방법을 생각해봤는데 count가 계속되어서 안됨-짬좀차고드봐야댈듯-
// 그리고 arr[j]에 대입하면 그 자릿값에 더해지는게아니라 단순히 배열arr에 j가 1씩 증가하는곳에 대입이 돠어서
//안됨 