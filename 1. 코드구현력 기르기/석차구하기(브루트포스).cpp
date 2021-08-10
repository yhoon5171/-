#include <iostream>
using namespace std;

int main()
{
    int N, i, j;
    //a배열에 점수를 넣고, b배열에 순위를 적는다.
    int a[200], b[200];
    scanf("%d", &N);

    for (i = 0; i < N; i++){
        scanf("%d", &a[i]);
        b[i] = 1;
    }
    //a배열을 모두 O(N제곱)의 시간복잡도로 읽어나가면서 자신보다 높은 숫자가 나올때 마다 b배열의 그 위치를 더하여 순위를 매긴다.
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (a[i] < a[j])
                b[i]++;
        }
    }
    for (i = 0; i < N; i++)
        printf("%d ", b[i]);

    return 0;
}