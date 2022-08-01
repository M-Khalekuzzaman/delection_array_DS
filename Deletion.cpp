#include<bits/stdc++.h>
using namespace std;
void printArray(int size,int *arr)
{
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int size;
    cin>>size;
    int *arr = new int[size]{0};
    for(int i = 0;i<size;i++){
       cin>>arr[i];
    }
    int pos;
    cout<<"Deletion your position : ";
    cin>>pos;
    if(pos == size-1){
        for(int i = 0;i<size-1;i++){
            arr[i] = arr[i];
        }
    }
    else{
        for(int i = pos;i<size-1;i++){
            arr[i] = arr[i+1];
        }
    }

    printArray(size-1,arr);

    return 0;
}
