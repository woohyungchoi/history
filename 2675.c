#include <stdio.h>
#include <string.h>
int main(){
	int n,t,i,j,count=0;
	char str[21];
	char p[161];
	scanf("%d",&n);			//테스트케이스 수 입력
	for(i=0;i<n;i++){
		scanf("%d %s",&t,&str);
	}
	int len=strlen(str);
	
	for(i=0;i<len*t;i++){
		count++;
		for(j=0;j<t;j++){
			p[i+j]=str[count-1];
		}
		i=i+t-1;
		
	}
	for(i=0;i<t*len;i++)
	printf("%c",p[i]);
	
}