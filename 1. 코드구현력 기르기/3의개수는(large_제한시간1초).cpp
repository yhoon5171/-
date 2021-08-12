#include <iostream>
using namespace std;

int main()
{
    //freopen("input.txt", "rt", stdin);
    int N, ans = 0, tmp, cur, k = 1, lt = 10, rt;
    scanf("%d", &N);

    tmp = N;
    //일의 자리부터 제일 앞자리까지 그 자리에 몇개의 3이 올 수 있는지 하나씩 구한다. 
    while (lt != 0){
        //cur은 현재 지정된 자릿수, lt는 cur자릿수에서 왼쪽에 있는 숫자들, rt는 cur 자릿수에서 오른쪽에 있는 숫자들
        lt = N / (k * 10);
        cur = (N / k) % 10;
        rt = N % k;
        //cur가 3보다 클때
        if (cur > 3)
            ans = ans + (lt + 1) * k;
        //cur가 3보다 작을때
        else if (cur < 3)
            ans = ans + (lt * k);
        //cur가 3일때
        else
            ans = ans + (lt * k) + (rt + 1);

        k *= 10;
    }
    printf("%d", ans);
}