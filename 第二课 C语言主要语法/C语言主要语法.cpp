#include<stdio.h>

int add(int a, int d)
{
	return a + d;
}

int main() //main:是函数的名称表示一个主函数 int:返回值类型为整数类型（integer) （）用来输入参数
{
	int result;
	result = add(2, 3);
	printf("%d", result);
	//主函数返回值 做点是什么事情
	return 0;//表示函数的返回值
}

//编程函数不等于数学中的函数，输入值经过函数处理返回给电脑。