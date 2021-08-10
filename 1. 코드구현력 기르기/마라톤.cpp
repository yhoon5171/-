#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, i, j;
    int cnt;
    scanf("%d", &N);
    vector<int> a(N + 1);
    vector<int> b(N + 1);

    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);

    for (i = 0; i <= N; i++){
        for (j = i; j >= 0; j--){
            if (a[i] > a[j]){
                cnt++;
            }
        }
        b[i] = i - cnt + 1;
        cnt = 0;
    }
    for (i = 0; i < N; i++)
        printf("%d ", b[i]);
}