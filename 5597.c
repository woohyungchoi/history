#include <stdio.h>

int main(){
	int arr[31]={0};
	int num;
	int i=0;
	for(i=1;i<=28;i++){
		scanf("%d",&num);
		arr[num]=num;
	}
	for(i=1;i<=30;i++){
		printf("%d\n",i);
	}
	return 0;
}
// 처음에 배열 한개에 값을 저장하고 그 값을 다른 배열에 옮기려했음
// 근데 그냥 바로 값을 받고 배열에 바로 저장했으면 한단계가 줌