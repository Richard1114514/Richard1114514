#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	getline(cin,a);
	for(int i=a.size();i>=0;i--)
	{
		if(a[i]==' ') continue;
		else if(a[i]>='A'&&a[i]<='Z')
		{
			cout<<char((a[i]-'a'+3)%26+'a');
		}
		else if(a[i]>='a'&&a[i]<='z')
		{
			cout<<toupper((a[i]-'a'+3)%26+'a');
		}  
	}
}
/*
int (int i=s1.size()-1;i>=0;i--)
����˵
for(int i=0,j=s.size()-1;i<=j;i++;j--)
{
	if(s[i]!=s[j])
	{
		cout<<"no";
		return 0;
}
����reverse(s.begin(),s.end())
ƫ����10:Avocat(A->k)
ƫ����13:ROT13
ƫ����5:Cassis(K6)
ƫ����6 Cassette (K 7)
(��ǰ�ַ�-��ʼ�ַ�+ƫ����)%�ַ�����+��ʼ�ַ�
for(int i=a.size()-1;i>=0;i--)
	{
		cout<<char((a[i]-'a'+13)%26+'a');
	}
*/
