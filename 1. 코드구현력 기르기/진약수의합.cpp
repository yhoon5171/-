#include <iostream>
using namespace std;

int main()
{
    int N, sum = 0;

    cin >> N;
    for (int i = 1; i < N / 2; i++){
        if (N % i == 0){
            sum += i;
            cout << i << " + ";
        }
    }
    sum += N / 2;
    cout << N / 2 << " = " << sum;
}