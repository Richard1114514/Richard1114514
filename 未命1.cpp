#include <iostream>
#include <math.h>
#include <stdio.h>//printf
#include <cstring>//string
#include <iomanip>//cout<<fixed<<setprecision(2)<<2;
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a%400==0||a%100!=0&&a%4==0) cout<<"Y";
	else cout<<"N";
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
