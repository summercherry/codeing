#include <stdio.h>
#include <math.h>

int check(double mid)
{
	double f = pow( mid,2 ) - 2.0;
	if(f > 0.0)  return 1;
	return 0;
}
int main(){
	double l = 1.0, r = 2.0, mid;
	while(r - l > 0.00000001){
		mid = (l + r) / 2.0;
		printf ("%lf\n",mid);
		if( check(mid) ) {
			r = mid; 
			// 当函数值大于零时，向区间zuo边靠近
		} else {
			l = mid;
			//当函数值小于零时，向区间you边靠近
		}
	}
/*
	m = (int)(mid*1000000 + 0.5);	//四舍五入
	printf("%.6lf", m / 1000000);
*/
	printf("%.3lf", mid);
	return 0;
}
