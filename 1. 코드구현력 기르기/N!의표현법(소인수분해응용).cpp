#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, i, j, tmp;
    scanf("%d", &N);
    vector<int> a(N + 2);

    for (i = 1; i <= N; i++){
        tmp = i;
        for (j = 2; j <= N; j++){
            if (tmp == 1) break; 
            if (tmp % j == 0){
                a[j]++;
                tmp /= j;
                j--;
            }
        }
    }

    printf("%d! = ", N);
    for (i = 0; i <= N; i++)
        if (a[i] != 0)
            printf("%d ", a[i]);

    return 0;
}