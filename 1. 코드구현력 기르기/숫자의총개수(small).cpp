#include <iostream>
using namespace std;

int main()
{
    int N, i, num, tmp;
    scanf("%d", &N);
    int cnt = 0;

    for (i = 1; i <= N; i++){
        num = i;
        while(num != 0){
            tmp = num % 10;
            num /= 10;
            cnt++;
        }
    }
    cout << cnt;
}