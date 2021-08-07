#include <iostream>
using namespace std;

int main()
{
    int N, i, j;
    int num, stu_ans, ans;

    scanf("%d", &N);
    for (i = 0; i < N; i++){
        ans = 0;
        scanf("%d %d", &num, &stu_ans);
        for (j = 1; j <= num; j++)
            ans += j;
        if (ans == stu_ans) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}