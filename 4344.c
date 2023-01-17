#include <stdio.h>

int main(){
	int i,n,j=0,student_num,sum=0,temp=0;
	float avg=0;
	scanf("%d\n",&n);
	while(n>j){
		temp=0;
		scanf("%d",&student_num);
		int score[student_num];
		for(i=0;i<student_num;i++){
			scanf("%d",&score[i]);
			sum+=score[i];
		}
		avg=(float)sum/student_num;
		for(i=0;i<student_num;i++){
			if(score[i]>avg){
				temp++;
			}
		}
		j++;
		printf("%.3f%%\n",(float)temp/student_num*100);
	}
}