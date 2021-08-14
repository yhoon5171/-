#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, i, j, tmp;
    scanf("%d", &n);
    vector<int> v(n);

    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);

    //tmp에 idx 1 값부터 하나씩 넣는다. 한 값을 넣은 후에, 그 값의 앞으로 진행하며 tmp보다 큰 값을 찾아나간다. 큰 값을 찾은 뒤엔 바로 다음에 있는 뒷값을 찾은 큰 값으로 변경한다. 앞으로 진행하다가 tmp보다 작은값을 만난다면 바로 break를 해주고, 다음 i 반복문을 돌리기 전에 멈춘 지점에서 더하기 1을 해준 후, tmp 값을 삽입한다.
    for (i = 1; i < n; i++){
        tmp = v[i];
        for (j = i - 1; j >= 0; j--){
            if (v[j] > tmp)
                v[j + 1] = v[j];
            else break;
        }
        v[j + 1] = tmp;
    }

    for (i = 0; i < n; i++)
        printf("%d ", v[i]);

    return 0;
}