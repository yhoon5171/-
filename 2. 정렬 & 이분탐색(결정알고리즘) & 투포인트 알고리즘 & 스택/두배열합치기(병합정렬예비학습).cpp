#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m, i, j;
    int idx1 = 0, idx2 = 0, idx3 = 0;

    scanf("%d", &n);
    vector<int> a(n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);
    vector<int> b(m);
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
    
    vector<int> ans(m + n);
    while (idx1 < n && idx2 < m && idx3 < n + m){
        if (a[idx1] > b[idx2]){
            ans[idx3] = b[idx2];
            idx2++; idx3++;
        }
        else{
            ans[idx3] = a[idx1];
            idx1++; idx3++;
        }
    }
    if (idx1 == n){
        for (i = idx2; i < m; i++){
            ans[idx3] = b[i];
            idx3++;
        }
    }
    else if (idx2 == n){
        for (i = idx1; i < n; i++){
            ans[idx3] = a[i];
            idx3++;
        }
    }

    for (i = 0; i < n + m; i++)
        printf("%d ", ans[i]);

    return 0;
}