#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, b = 1, cnt = 0, tmp, i;

    scanf("%d", &n);

    //정석 풀이
    tmp = n;
    n--;
    while (n > 0){
        b++;
        n = n - b;
        if (n % b == 0){
            for (i = 1; i < b; i++){
                printf("%d + ", (n / b) + i);
            }
            printf("%d = %d\n", (n / b) + i, tmp);
            cnt++;
        }
    }
    printf("%d\n", cnt);

    //내가 푼 풀이
    // vector<int> a(n);
    // for (i = n - 1; i >= 0; i--){
    //     total = 0;
    //     idx = 0;
    //     for (j = i; j >= 0; j--){
    //         total += j;
    //         a[idx++] = j;
    //         if (total == n){
    //             cnt++;
    //             printf("%d", a[idx - 1]);
    //             for (int z = idx - 2; z >= 0; z--){
    //                 printf(" + %d", a[z]);
    //             }
    //             printf(" = %d\n", total);
    //             break;
    //         }
    //         else if (total > n)
    //             break;
    //     }
    // }
    // printf("%d", cnt);

    return 0;
}