#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(int n,vector<int> arr){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
    void bubblesort(int n, vector <int> &arr){
        bool swapped=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swapped =true;
                }
            }
            if(swapped==false){
                break;
            }
        }

    }    
int main(){
    int n,a;
    cout<<"Enter the size of the array ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter the elements ";
    for(int i=0;i<n;i++){ 
        cin>>a;
        arr.push_back(a);
    }
    cout<<"Array before sorting"<<endl;
    display(n,arr);
    cout<<"Array after sorting"<<endl;
    bubblesort(n,arr);
    display(n,arr);
    return 0;
}