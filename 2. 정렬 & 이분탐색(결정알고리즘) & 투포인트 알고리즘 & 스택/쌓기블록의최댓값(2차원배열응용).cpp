#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i, j, n;
    scanf("%d", &n);
    int arr1[11];
    int arr2[11];
    int ans[11][11];
    int sum = 0;

    for (i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < n; i++){
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            ans[j][i] = arr1[i];
        }
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (ans[i][j] > arr2[i])
                ans[i][j] = arr2[i];
        }
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            sum += ans[i][j];
        }
    }
    printf("%d", sum);

    return 0;
}