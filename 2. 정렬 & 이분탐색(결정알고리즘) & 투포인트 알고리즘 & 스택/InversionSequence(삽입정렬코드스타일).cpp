#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, i, j, cnt = 0;
    scanf("%d", &n);
    vector<int> v(n);
    vector<int> a(n);

    for (i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    //배열의 끝에서 부터 처리하는 것이 이 문제의 핵심이다.
    for (i = n - 1; i >= 0; i--){
        //자기보다 앞에 있는 값 중 큰 값이 몇개 있는지 확인을 한 뒤에, 반복문을 통해서 그 수만큼 뒤에 있는 값들을 바꿔나간다. 선택정렬과 비슷한 개념이다.
        for (j = i; j < i + v[i]; j++){
            a[j] = a[j + 1];
        }
        //값을 바꾼 뒤 마지막에는 선택된 값을 넣는다.
        a[j] = i + 1;
    }
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}