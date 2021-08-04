#include <iostream>
using namespace std;

int digit_sum(int x){
    int tmp, sum = 0;
    while (x != 0){
        tmp = x % 10;
        sum += tmp;
        x /= 10;
    }

    return sum;
}

int main()
{
    int N, nums;
    int max_sum = 0, max_num = 0, sum;

    //freopen("input.txt", "rt", stdin);
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> nums;
        sum = digit_sum(nums);
        if (max_sum < sum){
            max_sum = sum;
            max_num = nums;
        }
        else if (max_sum == sum)
            max_num = max(max_num, nums);
    }
    cout << max_num;
}