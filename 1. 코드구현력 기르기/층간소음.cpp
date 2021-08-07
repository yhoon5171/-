#include <iostream>
using namespace std;

int main()
{
    int N, M, num, cnt = 0, i, Max = INT_MIN;
    
    scanf("%d %d", &N, &M);
    for (i = 0; i < N; i++){
        scanf("%d", &num);
        if (num > M)
            cnt++;
        else{
            Max = max(Max, cnt);
            cnt = 0;
        }
    }
    Max = max(Max, cnt);
    if (Max == 0) printf("-1");
    else printf("%d", Max);
}