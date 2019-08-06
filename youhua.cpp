#include <cstdio> 
#include <cmath> 
const int maxn = 10000 + 10;
const int inf = 99999999; 
int N, K;
double L[maxn]; 
bool C(double x) {
	int num = 0; 
    for(int i = 0; i < N; i++) {
	    num += (int)(L[i] / x);
	}
	return num >= K;
	}
void solve() {
	double lb = 0, ub = inf;
	for(int i = 0;i < 100; i++) {
	    double mid = (ub + lb) / 2;
		if(C(mid))
		    lb = mid;
		else 
			ub = mid;
	}
	printf("%.2f\n", floor(ub * 100) / 100);
}
int main()
{
	while(scanf("%d%d", &N, &K) != EOF) {
	    for(int i = 0; i < N; i++) {
			scanf("%lf", &L[i]);
		}
		solve();
    }    
    return 0;
}


