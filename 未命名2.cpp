#include <iostream>//cin,cout
#include <stdio.h>//printf
#include <cstring>//string
#include <iomanip>//cout<<fixed<<setprecision(2)<<2;
using namespace std;
int main()
{
	int a;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		char v=i+64;
		if(v>65+26) v=65;
		for(int j=1;j<=i;j++)
		{
			cout<<v;
			v+=1;
		}
		cout<<endl;
	}
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
