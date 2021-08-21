#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i, n, k, pos = 0;
    int cnt = 0;
    scanf("%d %d", &n, &k); 
    vector<int> check(n);

    for (i = 0; i < n - 1; i++){
        cnt = 0;
        while (cnt != k){
            if (check[pos] == 0) cnt++;
            
            if (pos + 1 == n) pos = 0;
            else pos++;
        }
        if (pos == 0) check[n - 1] = 1;
        else check[pos - 1] = 1;
    }
    for (i = 0; i < n; i++){
        if (check[i] == 0){
            printf("%d", i + 1);
            break;
        }
    }
    return 0;
}
