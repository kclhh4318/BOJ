#include <iostream>
using namespace std;
typedef long long int ll;

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

ll fac(int n){
    if(n == 0) return 1;
    else return n * fac(n - 1);
}

int main(){

    init();

    int N;
    cin >> N;

    cout << fac(N) << endl;

    return 0;
}