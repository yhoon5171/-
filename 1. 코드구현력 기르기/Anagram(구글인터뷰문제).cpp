#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<char, int> hash;
    string s1, s2;
    int i;

    cin >> s1 >> s2;
    if (s1.length() != s2.length()){
        printf("NO");
        return 0;
    }
    for (i = 0; i < s1.length(); i++){
        if (!hash[s1[i]]) 
            hash[s1[i]] = 1;
        else hash[s1[i]]++;
    }
    for (i = 0; i < s2.length(); i++){
        if (hash[s2[i]])
            hash[s2[i]]--;
        if (hash[s2[i]] == 0)
            hash.erase(s2[i]);
    }
    if (hash.size() == 0)
        printf("YES");
    else printf("NO");

    return 0;
}