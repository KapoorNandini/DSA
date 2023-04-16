/*
--> Execution of the string stops when 
    New line
    Tab
    space 
    is Given ....

--> 
*/

//LENGTH OF STRING
//REVERSING A STRING
#include<iostream>
using namespace std; 

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        int tmp = ch - 'A' + 'a';
        return tmp;
    }
}

void reverse(char* arr,int len){
    int s=0;
    int e =len-1;
    while(s<e){
        swap(arr[s++],arr[e--]);
    }
}
int getlength(char* arr){
    int count =0;
    for(int i=0; arr[i]!='\0';i++){
        count++;
    }
    return count;
}
bool chkpalindrome(char *arr,int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        //if(arr[s]!=arr[e]){
            //To make it case insensitive
            if(toLowerCase(arr[s]) != toLowerCase(arr[e])){
            return 0;
            }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int main(){
    char str[20];
    cout<<"Enter your Name "<<endl;
    cin>>str;

    cout<<"Your Name is "<<str<<endl;

    int len = getlength(str);
    cout<<"The Length is : "<<len<<endl;

    reverse(str,len);
    cout<<"Reverse is : "<<endl;

    cout<<"Palindrome or not : "<<chkpalindrome(str,len)<<endl;

    cout<<"Your Character in lower case is "<<toLowerCase('b')<<endl;
    cout<<"Your Character in lower case is "<<toLowerCase('H')<<endl;
    return 0;
}



