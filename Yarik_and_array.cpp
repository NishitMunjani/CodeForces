#include <iostream>
#include <string>
#include <climits>
#define ll long long
#include <vector>
using namespace std;

ll maxSubArr(vector<ll>&arr, int l, int r){
    ll max = LLONG_MIN, m_end = 0;
    for(int i=l; i<=r; i++){
        m_end = m_end + arr[i]; 
        if(max < m_end) {
            max = m_end;
        }
        if(m_end < 0){
            m_end = 0;
        }
    }
    return max;
}

void solve(){
    int n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int previous = 0;
    ll answer = LLONG_MIN;
    for(int i=1; i<n; i++){
        if((abs(arr[i])%2) == (abs(arr[i-1])%2)){
            answer = max(answer, maxSubArr(arr, previous, i-1));
            previous = i;
        }
    }
    answer = max(answer, maxSubArr(arr, previous, n-1));
    cout << answer << endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}