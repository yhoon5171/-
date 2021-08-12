#include <iostream>
using namespace std;

int main()
{
    int N, i, j, cnt2 = 0, cnt5 = 0;
    scanf("%d", &N);
    int tmp;

    for (i = 2; i <= N; i++){
        tmp = i;
        for (j = 2; j <= 5; j++){
            if (tmp % j == 0){
                if (j == 2) cnt2++;
                else if (j == 5) cnt5++;
                tmp /= j;
                j--;
            }
        }
    }
    printf("%d", cnt2 > cnt5 ? cnt5 : cnt2);
}