#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int reverse(int x){
    int tmp = 0;
    while (x != 0){
        tmp = tmp * 10 + x % 10;
        x /= 10;
    }
    return tmp;
}

bool isPrime(int x){
    int cnt = 0;
    if (x == 1) return false;
    for (int i = 2; i < x; i++){
        if (x % i == 0) return false;
    }
    return true;
}

int main()
{
    int n, num, i, tmp;

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &num);
        tmp = reverse(num);
        if (isPrime(tmp))
            printf("%d ", tmp);
    }
}