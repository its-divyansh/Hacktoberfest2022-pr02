// Author : Divyansh Rai
// Program to convert integer to roman number
#include<iostream>
using namespace std;

string intToRoman(int n) { int arr1[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string arr2[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int i=0;string str;
        while(n!=0)
        {while(n!=0 && arr1[i]<=n){
         str+=arr2[i];
        n-=arr1[i];}
        i++;}
    return str;
        
    }
    
int main(){
 int n;
 cout<<"Enter the number : ";
 cin>>n;
 cout<<"The number in Roman is : "<<intToRoman(n);
 return 0;
}
