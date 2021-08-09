#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, i, tmp;
    int nums[101];
    scanf("%d", &N);
    vector<int> ans(N);

    for (i = 0; i < N; i++)
        scanf("%d", &nums[i]);
    for (i = 1; i < N; i++){
        tmp = abs(nums[i] - nums[i - 1]);
        if (tmp > N){
            printf("NO");
            return 0;
        }  
        if (ans[tmp] == 0) ans[tmp]++;
        else{
            printf("NO");
            return 0;
        }            
    }
    printf("YES");
    return 0;
}