#include <iostream>
using namespace std;

int main()
{
    int n, i, j, cnt = 0;
    int arr[53][53] = {0, };

    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            if (arr[i - 1][j] < arr[i][j] && arr[i + 1][j] < arr[i][j] && arr[i][j - 1] < arr[i][j] && arr[i][j + 1] < arr[i][j]){
                cnt++;
            }
        }
    }
    printf("%d", cnt);
}