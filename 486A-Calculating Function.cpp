#include <iostream>
using namespace std;

int main(){
    long long int i,j,n,sum=0;
    cin >> n;
    if(n%2==0)
        sum=n/2;
    else
        sum=((n-1)/2)-n;
    cout << sum << endl;
return 0;
}

