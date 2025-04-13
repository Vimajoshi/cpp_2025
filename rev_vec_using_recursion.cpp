#include <iostream>
#include <vector>
using namespace std;

void reverse_vector(vector<int> &vc, int l, int r)
{
    if(l>=r){
        return;
    }
    
    swap(vc[l],vc[r]);
    reverse_vector(vc,l+1,r-1);
}

int main()
{

    vector<int> vec = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    cout<<"Original vector: ";

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    reverse_vector(vec,0,vec.size()-1);

    cout<<"Vector after reversing: ";

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    cout<<"Terminated!"<<endl;
    
    return 0;
}