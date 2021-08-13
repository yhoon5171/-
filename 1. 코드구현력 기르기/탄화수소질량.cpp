#include <iostream>
using namespace std;

int main()
{
    string s;
    int i = 0, cnum = 0, hnum = 0, ans = 0;
    char tmp;

    cin >> s;
    while(i != s.length()){
        if (s[i] == 'C' || s[i] == 'H'){
            tmp = s[i];
            i++;
            continue;
        }
        if (tmp == 'C'){
            cnum = cnum * 10 + (s[i] - 48);
        }
        else{
            hnum = hnum * 10 + (s[i] - 48);
        }
        i++;
    }
    if (cnum == 0) cnum = 1;
    if (hnum == 0) hnum = 1;
    ans = cnum * 12 + hnum;
    cout << ans;

    return 0;
}