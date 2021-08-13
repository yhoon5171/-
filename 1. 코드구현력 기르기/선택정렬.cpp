#include <iostream>
using namespace std;

int main()
{
    int N, i, j, idx, a[100];
    int tmp;

    scanf("%d", &N);
    for (i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }

    for (i = 0; i < N - 1; i++){
        idx = i;
        for (j = i  + 1; j < N; j++){
            if (a[idx] > a[j])
                idx = j;
        }
        tmp = a[i];
        a[i] = a[idx];
        a[idx] = tmp; 
    }
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);

    return 0;
}