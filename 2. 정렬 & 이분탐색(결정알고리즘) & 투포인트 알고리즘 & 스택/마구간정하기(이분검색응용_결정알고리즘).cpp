#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    int i, n, c;
    int left = 0, right, mid;
    int tmp = 0, cnt = 0, ans = 0;

    scanf("%d %d", &n, &c);
    vector<int> x(n);
    for (i = 0; i < n; i++)
        scanf("%d", &x[i]);
    sort(x.begin(), x.end());

    right = x[n - 1];
    //답이 될 수 있는 값을 binary search를 이용하여 정한 후, 선택한 값이 가능 하지 않다면 선택한 값보다 더 작을 경우 가능하기 때문에, right를 mid-1로 바꾼다. 만약 가능한 경우, 선택한 값보다 더 크더라도 가능할 수 있기 때문에 left를 mid+1로 바꿔서 최적의 답을 구한다.
    while (left <= right){
        mid = (left + right) / 2;
        cnt = 1; tmp = x[0];
        for (i = 1; i < n; i++){
            if (abs(tmp - x[i]) >= mid){
                tmp = x[i];
                cnt++;
            }
        }
        if (cnt >= c){
            ans = mid;
            left = mid + 1;
        }
        else right = mid - 1;
    }
    printf("%d", ans);

    return 0;
}