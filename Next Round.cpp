#include <iostream>
using namespace std;

int main(){

    int n,k,chr[101],i,count=0;

    cin >> n >> k;;
    for(i=1;i<=n;i++){
        cin >> chr[i];
    }
    for(i=1;i<=n;i++){
        if(chr[i]>=chr[k] && chr[i]>0){
            count++;
        }
        if(chr[i]<chr[k])
            break;
        }

    cout << count << endl;
return 0;
}

