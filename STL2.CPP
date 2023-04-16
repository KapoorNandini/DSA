#include<iostream>
#include<algorithm>
#include<vector>
using namespace std; 

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(9);
    v.push_back(11);
    v.push_back(5);

    cout<<binary_search(v.begin(),v.end(),3)<<endl;
    cout<<lower_bound(v.begin(),v.end(),9)-v.begin()<<endl;    
    cout<<upper_bound(v.begin(),v.end(),9)-v.begin()<<endl;  

    int a =5 , b = 10;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;

    swap(a,b);
    cout<<b<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<abcd<<endl;




 

    return 0;
}