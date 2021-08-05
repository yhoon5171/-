#include <iostream>
using namespace std;

int main()
{
    string s;
    int i, lcnt = 0, rcnt = 0;

    //freopen("input.txt", "rt", stdin);

    cin >> s;
    for (i = 0; i < s.length(); i++){
        if (s[i] == '(') rcnt++;
        else lcnt++;
        if (lcnt > rcnt){
            printf("NO");
            return 0;
        }
    }
    if (rcnt == lcnt) printf("YES");
    else printf("NO");

    return 0;
}