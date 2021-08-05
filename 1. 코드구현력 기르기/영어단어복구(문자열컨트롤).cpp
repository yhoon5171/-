#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int i;
    
    //freopen("input.txt", "rt", stdin);
    getline(cin, s);
    for (i = 0; i < s.length(); i++){
        if (s[i] != ' '){
            if (s[i] >= 97 && s[i] <= 122)
                printf("%c", s[i]);
            else
                printf("%c", s[i] + 32);
        }
    }
    return 0;
}