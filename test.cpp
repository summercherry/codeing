#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char a[20],b[20];
	int c=1,d=1;
	int s1,s2;
	cin >> a >> b;
	s1 = strlen(a); //������Ĵ���
	s2 = strlen(b);
	for(int i=0;i<s1+1;i++) c=c*((int)(a[i])-64);//����������ascall��
	for(int i=0;i<s2+1;i++) d=d*((int)(b[i])-64);//����������ascall��
	if(c%47==d%47) { cout<<"GO";}
	else  { cout << "STAY";}
	return 0;
}




