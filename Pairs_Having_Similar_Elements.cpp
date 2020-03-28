#include<bits/stdc++.h>
using namespace std;

long long SimilarElementsPairs(vector<int> A, int N)
{
    sort(A.begin(),A.end());
    long long int answer = 0;

    for(int i = 1; i < N; i++) {
        long long int count = 0, check = 0;
        while((A[i] == A[i-1]) or (A[i] == A[i-1]+1)){
            check++;
            if(A[i] == A[i-1]) count++;
            i++;
        }
        if(check != 0 and check != count) answer += (check*(check+1))/2;
    }
    return  answer;
}
int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
    	cin >> A[i_A];
    }

    long long out_;
    out_ = SimilarElementsPairs(A,N);
    cout << out_;
}
