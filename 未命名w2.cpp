#include <iostream>
#include <math.h>
#include <stdio.h>//printf
#include <cstring>//string
#include <iomanip>//cout<<fixed<<setprecision(2)<<2;
using namespace std;
int main()
{
	double a,n=0,l;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>l;
		n+=l;
		l=0;
	}
	cout<<n<<" ";
	double mjj=n/a;
	cout<<fixed<<setprecision(5)<<mjj;
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
