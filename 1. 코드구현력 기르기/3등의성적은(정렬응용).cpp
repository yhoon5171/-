#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int x, int y){
    return x > y;
}

int main()
{
    int N, i, tmp, cnt = 1;
    scanf("%d", &N);
    vector<int> v(N);

    for (i = 0; i < N; i++){
        scanf("%d", &v[i]);
    }
    sort(v.begin(), v.end(), compare);
    tmp = v[0];
    i = 1;
    while(1){
        if (tmp != v[i]){
            tmp = v[i];
            cnt++;
        }
        if (cnt == 3)
            break;
        i++;
    }
    printf("%d", v[i]);
}