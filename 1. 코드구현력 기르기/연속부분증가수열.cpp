#include <iostream>
using namespace std;

int main()
{
    int N, i, cnt = 0;
    int num, tmp = INT_MAX;
    int Max = INT_MIN;
    scanf("%d", &N);

    for (i = 0; i < N; i++){
        scanf("%d", &num);
        if (num < tmp)
            cnt = 1;
        else{
            cnt++;
            Max = max(cnt, Max);
        }
        tmp = num;
    }
    printf("%d", Max);
}