#include<stdio.h>

int add(int a, int d)
{
	return a + d;
}

int main() //main:�Ǻ��������Ʊ�ʾһ�������� int:����ֵ����Ϊ�������ͣ�integer) ���������������
{
	int result;
	result = add(2, 3);
	printf("%d", result);
	//����������ֵ ������ʲô����
	return 0;//��ʾ�����ķ���ֵ
}

//��̺�����������ѧ�еĺ���������ֵ�������������ظ����ԡ�