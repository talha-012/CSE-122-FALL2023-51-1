#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin>>str;

    int siz=str.size()/2+1;
    int arr[siz];

    int j=0;
    for(int i=0;i<str.size();i=i+2){
        arr[j]=str[i]-'0';
        j++;
    }

    sort(arr,arr+siz);

    for(int i=0;i<siz;i++){
        cout<<arr[i];
        if(i!=siz-1){
            cout<<'+';
        }
    }


  return 0;
}
