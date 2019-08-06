#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

struct student{
	char name[21];	//回顾：定义字符串长度的注意事项。
	int score;
};


bool compare(student m,student n){
	//多个关键字的比较
	if(m.score < n.score) return false;	//对分数进行比较
	if(m.score == n.score){	//如果分数相同，对姓名进行比较
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
	
	// 二分查找主体，查找区间是左闭右开的区间,序列为从大到小排序
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
