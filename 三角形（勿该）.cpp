#include <iostream>//cin,cout
#include <stdio.h>//printf
#include <cstring>//string
#include <iomanip>//cout<<fixed<<setprecision(2)<<2;
using namespace std;
void isprime(int a)
{
	for(int i=0;i<a;i++)
	{
		for(int j=a;j>i;j--) cout<<" ";
		for(int k=i;k<=i;k++) cout<<"*";
	}
}
int main()
{
	isprime(10);
}

/*
����ֵ���� ������ (����1(�β�),����2(ʵ��))
{
	//������
	return ����ֵ
}
����Զ��庯��д�����������·�,����������һ�¾���
int isprime(int a)
{
	if (a==1) return 0;
	if (a==2) return 0;
	for(int j=2;j<sqrt(a);j++)
	{
		if(a%j==0)
		{
			return 0;
		}
	}
	return 1;
}�ж�����
void�޷���ֵ
*/
