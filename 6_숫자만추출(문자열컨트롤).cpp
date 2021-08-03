#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
    string s;
    string ans;
    bool start = false;

    //freopen("input.txt", "rt", stdin);
    cin >> s;
    for (int i = 0; i < s.length(); i++){
        if (s[i] >= 48 && s[i] <= 57){
            if (s[i] != '0') start = true;
            if (start == true){
                ans += s[i];
            }
        }
    }
    int cnt = 1;
    for (int i = 1; i <= stoi(ans) / 2; i++){
        if (stoi(ans) % i == 0)
            cnt++;
    }
    cout << ans << '\n' << cnt;
}

