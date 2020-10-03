#include <iostream>
using namespace std;

int main(){
    int n,i,j,count=0,sum,result;
    char str[3],str2[3]={'\0'};
    cin >> n;
    for(i=0;i<n;i++){
        cin >> str;
        if(str[0]!=str2[0] && str[1]!=str2[1])
            count++;
        str2[0]=str[0];
        str2[1]=str[1];
    }
    cout << count << endl;
return 0;
}
