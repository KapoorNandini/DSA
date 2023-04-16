/* ****RECURSION*****
   ---> When a Function calls itself
   ---> There are 2 components of recusrive function
   ---> BASE CASE(yeh dikhata hai ki rukna kab hai)
   ---> RECURSIVE RELATION

*/

// CODE FOR FACTORIAL
//  #include<iostream>
//  using namespace std;

// int factorial(int n){
//     // base case
//     if(n==0){
//         return 1;
//     }
//     //RR
//     return n*factorial(n-1);
// }
// int main(){
//     int n;
//     cin>>n;

//     int ans = factorial(n);
//     cout<<ans<<endl;
//     return 0;
// }

// CODE FOR POWER
//  #include<iostream>
//  using namespace std;

// int power(int n){
//     //base case
//     if(n==0){
//         return 1;
//     }
//     //RR
//     return 4*power(n-1);
// }
// int main(){
//     int n;
//     cin>>n;

//     int ans = power(n);
//     cout<<ans<<endl;
//     return 0;
// }

// CODE FOR PRINTING COUNTING
// 5 4 3 2 1
//  #include<iostream>
//  using namespace std;

// void print(int n){
//     //base case
//     if(n==0){
//         return;
//     }
//     //RR
//     cout<<n<<endl;
//     print(n-1);
// }
// int main(){
//     int n;
//     cin>>n;

//     print(n);
//     return 0;
// }

// CODE FOR PRINTING IN ASCENDING ORDER
// // 1 2 3 4 5
// #include <iostream>
// using namespace std;

// void print(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     print(n-1);
//     cout<<n<<endl;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     print(n);
//     return 0;
// }



