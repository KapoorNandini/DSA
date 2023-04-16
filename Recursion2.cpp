// CODE FOR REACH HOME
// #include<iostream>
// using namespace std; 

// void reachhome(int src,int dest){
//     cout<<"Source is "<<src<<" and dest is "<<dest<<endl;
//     //base case
//     if(src==dest){
//         cout<<"Reached"<<endl;
//         return;
//     }
//     reachhome(src+1,dest);
// }
// int main(){
//     int src =1;
//     int dest = 10;

//     reachhome(src,dest);
//     return 0;
// }

//FIBONACCI NUM 
//In this , pichle wale 2 nums ko add krke
//agla num bnta hai 
//0 1 1 2 3 5 8 13 21 .....
//F(n) = F(n-1) + F(n-2)

#include<iostream>
using namespace std; 

int fib(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int num = fib(n-1)+fib(n-2);
    return num;

}
int main(){
    int n;
    cin>>n;

    int ans = fib(n);
    cout<<ans<<endl;
    return 0;
}