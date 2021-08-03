#include <iostream>
using namespace std;

int main()
{
    int N, input, youngest = 101, oldest = 0;
    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> input;
        if (youngest > input)
            youngest = input;
        if (oldest < input)
            oldest = input;
    }
    cout << oldest - youngest;
    
    return 0; 
}