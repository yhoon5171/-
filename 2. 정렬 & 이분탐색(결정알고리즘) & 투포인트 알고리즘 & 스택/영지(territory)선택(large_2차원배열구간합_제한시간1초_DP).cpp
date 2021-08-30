#include <iostream>
#include <vector>
using namespace std;

int a[701][701], dy[701][701];
int main()
{
    int H, W, h, w;
    int i, j, tmp, max = INT_MIN;
    scanf("%d %d", &H, &W);
    for (i = 1; i <= H; i++){
        for (j = 1; j <= W; j++){
            scanf("%d", &a[i][j]);
            dy[i][j] = dy[i - 1][j] + dy[i][j - 1] - dy[i - 1][j - 1] + a[i][j];
        }
    }
    scanf("%d %d", &h, &w);
    for (i = h; i <= H; i++){
        for (j = w; j <= W; j++){
            tmp = dy[i][j] - dy[i - h][j] - dy[i][j - w] + dy[i - h][j - w];
            if (tmp > max) max = tmp;
        }
    }
    printf("%d\n", max);
    return 0;
}