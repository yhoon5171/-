#include <iostream>
using namespace std;

int main()
{
    int N, i, j, height[100], cnt = 0;
    int tmp = 0, ans = 0;

    scanf("%d", &N);
    for (i = 0; i < N; i++){
        scanf("%d", &height[i]);
    }
    for (i = 0; i < N - 1; i++){
        for (j = i + 1; j < N; j++){
            if (height[i] <= height[j]){
                break;
            }
            cnt++;
        }
        if (cnt == N - i - 1)
            ans++;
        cnt = 0;
    }
    printf("%d", ans);
    return 0;
}