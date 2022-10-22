#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> v,int item){

    int lo=0,hi=v.size();

    int flag=0;
    while(lo<hi){
        int mid=(lo+hi)/2;

        if(v[mid] == item){
            return mid+1;
            flag=1;
        }
        else if(v[mid]<item)
            lo=mid+1;
        else
            hi=mid-1;
    }
    if(flag!=1){
        return -1;
    }

}

int main(){

    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int item;cin>>item;

    
    int l=binarySearch(v,item);

    if(l==-1)
        cout<<"NOT FOUND"<<endl;
    else
        cout<<l;
}
