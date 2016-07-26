#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

vector<int> sq;

void pre_compute()
{
	for(int i = 0; i < 10000; i++) sq.push_back(i * i);
}

int main()
{
	int n;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	pre_compute();
	while(scanf("%d", &n) != EOF){
		for(int i = 0; i < (int)sq.size(); i++){
			if(sq[i] >= (int)pow(10.0, n)) break;
			if((int)pow(((sq[i] / (int)pow(10.0, n / 2.0)) + (sq[i] % (int)pow(10.0, n / 2.0))), 2.0) == sq[i]){
				switch(n){
				case 2: printf("%02d\n", sq[i]); break;
				case 4: printf("%04d\n", sq[i]); break;
				case 6: printf("%06d\n", sq[i]); break;
				case 8: printf("%08d\n", sq[i]); break;
				}
			}
		}
	}
	return 0;
}