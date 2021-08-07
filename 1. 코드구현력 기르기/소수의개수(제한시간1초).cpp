#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, i, j, ans = 0;
    scanf("%d", &N);
    vector<int> cnt(N + 1);

    for (i = 2; i <= N; i++){
        for (j = i; j <= N; j += i){
            cnt[j]++;
        }
    }
    for (i = 2; i <= N; i++)
        if (cnt[i] == 1)
            ans++;
    cout << ans;
}