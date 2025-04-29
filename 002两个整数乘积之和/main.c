#include <stdio.h>
int main()
{
	int a, b;
	int sum = 0;
	printf("请输入两个整数:");
	scanf_s("%d %d", &a, &b);
	sum = a * b;
	printf("两个整数的乘积是：%d\n", sum);
	return 0;
}