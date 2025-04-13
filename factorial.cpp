#include <iostream>

using namespace std;


int factNo(int n){
    if(n==0){
        return 1;
    }
    return n*factNo(n-1);
}

int main(){

    int ans = factNo(6);
    cout<<"factorial of 6: "<<ans<<endl;

    return 0;


}