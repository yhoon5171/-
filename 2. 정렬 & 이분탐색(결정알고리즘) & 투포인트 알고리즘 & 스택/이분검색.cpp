#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, i, left, right, mid;
    scanf("%d %d", &n, &m);
    vector<int> a(n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a.begin(), a. end());

    left = 0; right = n - 1;
    while(left <= right){
        mid = (left + right) / 2;
        if (a[mid] == m) break;
        else if (a[mid] > m) right = mid - 1;
        else left = mid + 1;
    }
    printf("%d", mid + 1);
}