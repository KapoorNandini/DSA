//***First and Last Occurence**** 
#include<iostream>
using namespace std; 
int firstocc(int arr[],int n,int key){
    int s =0 ,e =n-1;
    int mid = s+ (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(key>arr[mid]){
           //right part m jao
           s = mid+1;
           }
        else{
            //left part m jao
            e = mid -1;
        }
        mid = s+ (e-s)/2; //yahan galti hui thii mid k sath int dobara likhne ki never do that 

    }
    return ans;
}
int Lastocc(int arr[],int n,int key){
    int s =0;
    int e =n-1;
    int mid = s+ (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if(key>arr[mid]){
           //right part m jao
           s = mid+1;
           }
        else{
            //left part m jao
            e = mid -1;
        }
        mid = s+ (e-s)/2;

    }
    return ans;
}
int main(){
    int arr[8] = {1,2,3,2,2,2,4,5};
    cout<<"The first Occ of 2 is at index "<<firstocc(arr,8,2)<<endl;
    cout<<"The last Occ of 2 is at index "<<Lastocc(arr,8,2)<<endl;

    int total = (Lastocc(arr,8,2)-firstocc(arr,8,2));
    cout<<total<<endl;
    
    return 0;
}
/*
Total no. of occ = (last occ - first occ);
*/
