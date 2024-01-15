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
