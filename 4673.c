#include <stdio.h>
int d(int i){
	n=i;
	if(i==n+n/1000+n/100+n/10+n/1){
		return i;
	}
	
}
int main(){
	int n;
	int t;
	for(n=1;n<10001;n++){
	t=d(n);
		printf("%d",t);
	}
	
}