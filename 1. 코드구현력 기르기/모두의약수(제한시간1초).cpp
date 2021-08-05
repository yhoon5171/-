#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, i, j;
    cin >> N;
    vector<int> cnt(N + 1);

    //
    for (i = 1; i <= N; i++){
        for (j = i; j <= N; j += i){
            cnt[j]++;
        }
    }
    for (i = 1; i < N; i++)
        printf("%d ", cnt[i]);
    printf("%d", cnt[i]);

    return 0;
}