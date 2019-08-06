#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

struct student{
	char name[21];	//�عˣ������ַ������ȵ�ע�����
	int score;
};


bool compare(student m,student n){
	//����ؼ��ֵıȽ�
	if(m.score < n.score) return false;	//�Է������бȽ�
	if(m.score == n.score){	//���������ͬ�����������бȽ�
		if( strcmp(m.name, n.name) > 0) return false;
		return true;	
	}	
	return true;	
}
int main()
{
	int n, i, l, r, m, x;
	student stu[105];
	cin >> n;
	for (i = 0; i < n; i++){
		cin >> stu[i].name >> stu[i].score ;
	}
	cin >> x;
	sort(stu, stu + n, compare);
	for (i = 0; i < n; i++){
		cout << stu[i].name << " " <<stu[i].score << endl ;
	}
	cout <<endl;
	
	// ���ֲ������壬��������������ҿ�������,����Ϊ�Ӵ�С����
	for(l = 0, r = n ; r - l > 1; ) {
		m = (l + r) / 2;
		if( stu[m].score >= x ) {
			l = m;
		} else  {
			r = m;
		}	
	}
	if (stu[l].score == x) cout << stu[l].name <<' '<< stu[l].score;
	else cout << -1;
	return 0;
}
