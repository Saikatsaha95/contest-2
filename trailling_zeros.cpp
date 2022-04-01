#include<bits/stdc++.h>
using namespace std;

int number_of_trailling_zeros(int n){
    int count = 0;
    int p = 5;
    int base = p;

    while(n >= base){
        count += n/base;
        base *= p;
    }

    return count;
}


int find_number(int Q){
    int L= 0, R = 1000000000;
    
    while(L < R){
        int M = L + (R - L) /2;
        if(number_of_trailling_zeros(M) < Q){
            L = M + 1;
        }else {
            R = M;
        }
    }
    if(number_of_trailling_zeros(L) != Q){
        return -1;
    }
    return L;
   
}

int main()
{
    int T, Q, cs = 1;
    scanf("%d", &T);
    while(T--){
        scanf("%d", &Q);
        int result = find_number(Q);
        cout << "Case " << cs++ << ": ";
        if (result == -1){
            cout << "impossible" << endl;
        }else {
            cout << result << endl;
        }

    }
    return 0;
}