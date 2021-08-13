#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, i, j;
    scanf("%d", &N);
    vector<int> v(N);

    for (i = 0; i < N; i++){
        scanf("%d", &v[i]);
    }
    for (i = 0; i < N; i++){
        for (j = 0; j < N - i - 1; j++){
            if (v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
        }
    }
    for (i = 0; i < N; i++)
        printf("%d ", v[i]);

    return 0;
}