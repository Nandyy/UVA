#include <cstdio>
#include <cmath>
using namespace std;

long long int arr[22];
int main()
{
	int C, n, d, k, j;
	long long int res;
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	scanf("%d", &C);
	while(C--){
		scanf("%d", &n);
		for(int i = 0; i <= n; i++) scanf("%d", &arr[i]);
		scanf("%d %d", &d, &k);
		for(j = 1;; j++){
			if(k <= j * d) break;
			else k -= j * d;
		}
		res = 0;
		for(int i = 0; i <= n; i++){
			res += arr[i] * pow(j, i);
		}
		printf("%lld\n", res);
	}
	return 0;
}

