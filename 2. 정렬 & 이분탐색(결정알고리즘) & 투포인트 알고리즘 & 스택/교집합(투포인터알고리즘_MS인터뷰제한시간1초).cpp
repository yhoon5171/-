#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, i, ptr1 = 0, ptr2 = 0, ptr3 = 0;

    scanf("%d", &n);
    vector<int> a(n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);
    vector<int> b(m);
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> ans(n + m);
    while (ptr1 < n && ptr2 < m){
        if (a[ptr1] == b[ptr2]){
            ans[ptr3++] = a[ptr1++];
            ptr2++;
        }
        else if (a[ptr1] > b[ptr2])
            ptr2++;
        else ptr1++;
    }
    for (i = 0; i < ptr3; i++){
        printf("%d ",ans[i]);
    }

    return 0;
}