// https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/min-max-difference/

// #include <bits/stdc++.h>

// using namespace std;

// int main (){
//     int r, *arr;
//     cin >> r;
//     while (r--){
//         int n, e, sum = 0,max = 0, min = 0,ex_max =0,ex_min=0;
//         cin >> n >> e;
//         arr = new int[n];
//         for (int i = 0; i < n; i++){
//             cin >> arr[i];
//             sum += arr[i];
//         }
//         sort(arr, arr+n);
//         for(int i = 0;  i < e; i++)
//             ex_max += arr[i];
//         for (int j = n ; j > (n-e-1) ; j--)
//             ex_min += arr[j];
//         cout << (sum - ex_max)-(sum - ex_min )<<"\n";
//     }
//     return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,M,N,A[1000];
cin>>t;
for(int i=0;i<t;i++)
{
cin>>N;
cin>>M;
for(int j=0;j<N;j++)
cin>>A[j];

sort(A,A+N);
int sum1 = 0,sum2 = 0;
for(int k=0,l=M;k<N-M-1,l<N;k++,l++)
{
sum1 = sum1+A[k];
sum2 = sum2+A[l];
}
cout<<abs(sum1-sum2)<<endl;
}
return 0;
}