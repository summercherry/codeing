#include<iostream>
#include<cstdio>
using namespace std;

int n,a[50000],temp,tot;
int main()
{
	a[0]=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<tot+10;j++)
		{
			a[j]=a[j]*i+temp;
			temp=a[j]/10;
			a[j]%=10;
			if(a[j])tot=j;
		}
	}
	for(int i=tot;i>=0;i--)cout<<a[i];
	return 0;
}
