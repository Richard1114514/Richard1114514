#include<iostream>
using namespace std;

int main()
{	
	int a[101]={},mx=0,mi=100000,s=0;
	for(int i=0;i<5;i++)
	{
		if(a[i]>mx)
			mx=a[i];
		if(a[i]<mi)
			mi=a[i];
		s+=a[i];
	}
	cout<<"���ֵΪ:"<<mx;
	cout<<"��СֵΪ:"<<mi;
	printf("%.1lf",s);
	return 0;
}
