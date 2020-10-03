#include <iostream>
#include <cmath>
using namespace std;

int s(int x){
    int sum=0,k;

    while(x>0){
        k=x%10;
        sum+=k;
        x=x/10;
    }
    return sum;
}




int main(){

    long long int i,j,n,limit,value,flag=0,index,start;

    cin >> n;

    limit=sqrt(n);


    for(i=limit/2;i<=limit;i=i+1){

        value=(i*i)+(s(i)*i);

        if(value==n){
            flag=1;
            index=i;
            break;
        }
    }

    if(flag==1)
        cout << index << endl;
    else
        cout << "-1" << endl;

    return 0;
}
