#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k, i, pos = 0;
    scanf("%d", &n);
    vector<int> a(n);
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);

    while(k != 0){
        if (a[pos] != 0){
            a[pos]--;
            k--;
        }

        if (pos == n - 1){
            pos = 0;
        }
        else pos++;
    }
    int tmp = pos;
    while(a[pos] == 0){
        if (pos == n - 1){
            pos = 0;
        }
        else pos++;
        if (pos == tmp){
            printf("-1");
            return 0;
        }
    }
    printf("%d", pos + 1);

    return 0;
}