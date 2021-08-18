// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int i, n, m;
//     int left, right, mid, tmp, sum = 0, cnt = 0, max = INT_MIN;
//     scanf("%d %d", &n, &m);
//     vector<int> a(n);

//     for (i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//         sum += a[i];
//         if (a[i] > max) max = a[i];
//     }
//     sort(a.begin(), a.end());

//     left = 1; right = sum;
//     while (left <= right){
//         sum = 0; cnt = 1;
//         mid = (left + right) / 2;
//         for (i = 0; i < n; i++){
//             if (sum + a[i] > mid){
//                 sum = a[i];
//                 cnt++;
//             }
//             else sum += a[i];
//         }
//         if (cnt > m && mid < max) left = mid + 1;
//         else{
//             tmp = mid;
//             right = mid - 1;
//         }
//     }
//     printf("%d", tmp);

//     return 0;
// }

#include<stdio.h>
#include<algorithm>
using namespace std;
int a[1001], n;
int Count(int s){
	int i, cnt=1, sum=0;
	for(i=1; i<=n; i++){
		if(sum+a[i]>s){
			cnt++;
			sum=a[i];
		}
		else sum=sum+a[i];
	}
	return cnt;
}
int main(){
	int m, i, lt=1, rt=0, mid, res, maxx=-2147000000;
	scanf("%d %d", &n, &m);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
		rt=rt+a[i];
		if(a[i]>maxx) maxx=a[i];
	}
	while(lt<=rt){
		mid=(lt+rt)/2;
		if(mid>=maxx && Count(mid)<=m){	
			res=mid;
			rt=mid-1;
		}
		else lt=mid+1;
	}
	printf("%d\n", res);
	return 0;
}