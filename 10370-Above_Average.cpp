#include <cstdio>
using namespace std;

int main()
{
    int c = 0;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    scanf("%d", &c);
    
    while(c--){
        int n, i = 0, num[1000], sum = 0, t = 0, st = 0;
        float avg = 0.0f;
        scanf("%d", &n); t = n;
        while(n--){
            scanf("%d", &num[i]);
            sum += num[i];
            i++;
        }
        avg = (float)sum / float(t);
        for(int j = 0; j < t; j++){
            if(num[j] > (int)avg){
                st++;
            }
        }
        printf("%.3f%%\n", ((float)st * 100.0f) / (float)t);
        //if(c != 0) printf("\n");
    }
    return 0;
}