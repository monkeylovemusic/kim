#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Add(int x, int y) {
	int z = 0;
	z = x + y;
	return z;

}
int main() {
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("ÇëÊäÈënum1£¬num2:\n");
	scanf("%d%d",&num1,&num2);
	//sum = num1 + num2;
	sum = Add(num1, num2);
	printf("ºÍÎª:%d\n",sum);


}