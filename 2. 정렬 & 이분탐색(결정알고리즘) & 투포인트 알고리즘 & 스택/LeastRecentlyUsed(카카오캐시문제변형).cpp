#include <iostream>
#include <vector>
using namespace std;

//삽입정렬을 응용한 것이다.
int main()
{
    int n, s, i, j, tmp, pos;
    scanf("%d", &s);
    scanf("%d", &n);
    vector<int> v(n);

    for (i = 0; i < n; i++){
        //다음에 오는 수를 입력 받는다
        scanf("%d", &tmp);
        //pos변수를 반복문이 돌때마다 -1이로 초기화시켜준다.
        pos = -1;
        //입력받은 수가 배열에 없으면 miss, 있으면 hit이다. 만약 hit라면 pos에 hit가 된 위치를 저장하고 break한다.
        for (j = 0; j < n; j++){
            if (tmp == v[j]){
                pos = j;
                break;
            }
        }
        //pos가 -1이므로 miss일때 실행된다.
        if (pos == -1){
            //반복문을 이용하여 배열의 끝부터 하나씩 위치를 옮긴다.
            for (j = s - 1; j >= 1; j--){
                v[j] = v[j - 1];
            }
            //반복문이 끝나면 배열의 첫번째 값을 입력 받은 값으로 교체한다.
            v[0] = tmp;
        }
        //pos가 입력 받은 값의 위치로 바뀌었다면 hit로 실행된다.
        else{
            //반복문을 이용하여 hit가 된 위치에서부터 왼쪽의 값과 계속 교체를 하여 0의 위치까지 간다.
            for (j = pos; j >= 1; j--){
                v[j] = v[j - 1];
            }
            //반복무닝 끝나면 배열의 0의 값을 입력받은 값으로 바꿔준다.
            v[0] = tmp;
        }
    }

    for (i = 0; i < s; i++)
        printf("%d ", v[i]);
}