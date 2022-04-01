#include<bits/stdc++.h>
using namespace std;

int get_lower_bound(vector<int>&vec, int v){
    int L, R;
    L=0;
    R=vec.size();
    while(L<R){
       int M = L + ((R-L)/2);
        if(vec[M]< v){
            L = M+1;
        }
        else{
            R=M;
        }
    }
    return L;
}


int main()
{
    int T, cs = 1;
    scanf("%d", &T);
    while(T--){
        int n, q;
        scanf("%d %d", &n, &q);
        vector<int>vec(n);
        for(int i=0; i<n; i++){
            scanf("%d", &vec[i]);
        }
        cout << "Case "<< cs++ << ":" << endl; 
        while(q--){
            int a, b, lb, ub;
            scanf("%d %d", &a, &b);
            lb = get_lower_bound(vec, a);
            ub = get_lower_bound(vec, b+1);
            cout << ub-lb << endl;
        }
    }
    return 0;
}