#include<iostream>
#include <vector>
using namespace std;

void reverse_vector(vector<int> &v){
    int n = v.size();

    int st=0,end=n-1;

    while(st<=end){
        swap(v[st],v[end]);
        st++;
        end--;
    }
}

int main()
{

    vector<int> vec = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    reverse_vector(vec);

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    return 0;
}