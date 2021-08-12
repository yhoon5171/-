#include <iostream>
using namespace std;

int main()
{
    int N, ans = 0, i, j, tmp;
    scanf("%d", &N);

    for (i = 1; i <= N; i++){
        tmp = i;
        while (tmp != 0){
            if (tmp % 10 == 3)
                ans++;
            tmp /= 10;
        }
    }
    printf("%d", ans);
}