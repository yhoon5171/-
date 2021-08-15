#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, s, i, j, tmp, pos;
    scanf("%d", &s);
    scanf("%d", &n);
    vector<int> v(n);

    for (i = 0; i < n; i++){
        scanf("%d", &tmp);
        pos = -1;
        for (j = 0; j < n; j++){
            if (tmp == v[j]){
                pos = j;
                break;
            }
        }
        if (pos == -1){
            for (j = s - 1; j >= 1; j--){
                v[j] = v[j - 1];
            }
            v[0] = tmp;
        }
        else{
            for (j = pos; j >= 1; j--){
                v[j] = v[j - 1];
            }
            v[0] = tmp;
        }
    }

    for (i = 0; i < s; i++)
        printf("%d ", v[i]);
}