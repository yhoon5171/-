#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, K, i, j;
    int sum = 0, Max = INT_MIN;
    scanf("%d %d", &N, &K);
    vector<int> nums(N);

    for (i = 0; i < N; i++)
        scanf("%d", &nums[i]);
    for (i = 0; i < K; i++)
        sum += nums[i];
    for (i = K; i < N; i++){
        Max = max(Max, sum);
        sum -= nums[i - K];
        sum += nums[i];
        Max = max(Max, sum);
    }
    printf("%d", Max);
}