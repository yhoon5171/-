#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arr[9][9];
    int i, j, sum;
    int average[9];
    int ans[9] = {0, };

    for (i = 0; i < 9; i++){
        sum = 0;
        for (j = 0; j < 9; j++){
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
        average[i] = round(sum / 9.0);
    }

    for (i = 0; i < 9; i++){
        for (j = 0; j < 9; j++){
            if (abs(average[i] - arr[i][j]) < abs(average[i] - ans[i])){
                ans[i] = arr[i][j];
            }
        }
    }
    for (i = 0; i < 9; i++){
        printf("%d %d\n", average[i], ans[i]);
    }

    return 0;
}