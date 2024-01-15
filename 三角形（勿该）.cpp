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
返回值类型 函数名 (参数1(形参),参数2(实参))
{
	//函数体
	return 返回值
}
如果自定义函数写在了主函数下方,在上面声明一下就行
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
}判断质数
void无返回值
*/
