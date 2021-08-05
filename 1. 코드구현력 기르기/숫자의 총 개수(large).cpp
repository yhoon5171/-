#include <iostream>
using namespace std;

int main()
{
    int N, i;
    int tmp = 9, cnt = 1, ans = 0;

    scanf("%d", &N);
    while (1){
        N -= tmp;
        ans += cnt * tmp;
        if (N < 0){
            ans -= -N * cnt;
            break;
        }    
        cnt++; tmp *= 10;
    }
    cout << ans;
} 