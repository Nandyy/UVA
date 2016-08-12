#include <cstdio>
#include <cstdlib>
#include <string>
using namespace std;

int result[9999999];

bool is_run(int n)
{
	int index = 0, itr;
	char start, final, begin;
	char hist[10] = {0}, hist2[10] = {0};
	string str = to_string(n);
	int size = str.size(); begin = str[0];
	for(int i = 0; i < size; i++){
		hist[str[i] - '0']++;
		if(hist[str[i] - '0'] > 1) return false;
	}
	while(size--){
		start = str[index]; itr = start - '0';
		if(itr <= str.size() - index - 1){ index += itr; hist2[index]++;}
		else{ index = (index + itr) % str.size(); hist2[index]++; }
	}
	for(int i = 0; i < 10; i++){
		if(hist2[i] && hist2[i] > 1) return false;
	}
	final = str[index];
	if(begin == final) return true;
	else return false;
}

void pre_compute()
{
	for(int i = 12; i < 9999999; i++){
		if(is_run(i)) result[i] = i;
	}
}

int main()
{
	int n, count = 1, i;
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	pre_compute();
	while(scanf("%d", &n) && n){
		for(i = n; ;i++){
			if(result[i]) break;
		}
		printf("Case %d: %d\n", count++, result[i]);
	}
	return 0;
}
