#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if((a>=b && a<=c) || (a>=c && a<=b)){
        cout << abs(a-b)+abs(a-c) << endl;
        return 0;
    }
    if((b>=a && b<=c) || (b>=c && b<=a)){
        cout << abs(b-a)+abs(b-c) << endl;
        return 0;
    }
    if((c>=b && c<=a) || (c>=a && c<=b)){
        cout << abs(c-b)+abs(c-a) << endl;
        return 0;
    }
}

