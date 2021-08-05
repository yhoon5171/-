#include <iostream>
using namespace std;

int main()
{
    int i, tmp, ans;
    int Max = INT_MIN;
    int cnt[10] = {0, };
    string s;

    cin >> s;
    for(i = 0; i < s.length(); i++)
        cnt[s[i] - 48]++;

    for (i = 1; i <= 9; i++){
        if (Max < cnt[i]){
            Max = cnt[i];
            ans = i;
        }
        if (Max == cnt[i])
            ans = max(ans, i);
    }
    printf("%d", ans);
}