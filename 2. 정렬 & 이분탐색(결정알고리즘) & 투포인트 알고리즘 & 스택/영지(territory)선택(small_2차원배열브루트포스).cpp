#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int H, W, i, j, h, w;
    int x, y;
    int sum, Maxx = INT_MIN;
    scanf("%d %d", &H, &W);
    vector<vector<int>> arr(H, vector<int>(W));

    for (i = 0; i < H; i++){
        for (j = 0; j < W; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d %d", &h, &w);

    for (i = 0; i <= H - h; i++){
        for (j = 0; j <= W - w; j++){
            for (x = i; x < h + i; x++){
                for (y = j; y < w + j; y++){
                    sum += arr[x][y];
                }
            }
            if (Maxx < sum) Maxx = sum;
            sum = 0;
        }
    }

    printf("%d", Maxx);
    return 0;
}