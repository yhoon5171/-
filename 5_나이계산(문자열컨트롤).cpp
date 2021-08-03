#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    int age;
    char gender;
    int answer = 0;

    //freopen("input.txt", "rt", stdin);
    cin >> n;
    if (n[7] == '1'){
        age = 1900;
        gender = 'M';
    }
    else if (n[7] == '2'){
        age = 1900;
        gender = 'W';
    }
    else if (n[7] == '3'){
        age = 2000;
        gender = 'M';
    }
    else{
        age = 2000;
        gender = 'M';
    }
    n.erase(n.begin() + 2, n.end());
    age = 2019 - (age + stoi(n)) + 1;
    cout << age << " " << gender;

    return 0;
}