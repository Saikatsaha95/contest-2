#include<bits/stdc++.h>
using namespace std;

int find_integer(int n, int k){
    int L = 0, R = 2000000001;
   
    while(L < R){
        int M = L + ((R-L) / 2);
        int index = M - (M / n);
        if (index < k){
            L = M + 1;
        }else {
            R = M;
        }
        
    }
    return L;
}

int main()
{
    int T, n, k;
    cin >> T;
    while(T--){
        scanf("%d %d", &n, &k); 
        printf("%d\n", find_integer(n, k));
    }
    return 0;
}