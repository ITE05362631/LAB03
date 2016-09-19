#include<stdio.h>
int main(){
	int input[10];
	printf("請輸入十個數字, 用空格隔開：");
	scanf("%d %d %d %d %d %d %d %d %d %d",&input[0],&input[1],&input[2],&input[3],&input[4],&input[5],&input[6],&input[7],&input[8],&input[9]);
	printf("您輸入的數字為：\n");
	for(int i = 0;i < 10;i++){
		printf("%d\n", input[i]);
	}
	return 0;
}