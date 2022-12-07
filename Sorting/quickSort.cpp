#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int lb,int ub){
    int pivot = arr[ub];
    int i = lb-1;
    for (int j = lb; j <ub; j++)
    {
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[ub]);
    return i+1;
    
}
int quickSort(vector<int> &arr,int lb,int ub){
    if(lb<ub){
        int pivot = partition(arr,lb,ub);
        quickSort(arr,lb,pivot-1);
        quickSort(arr,pivot+1,ub);
    }
}

int main(){

    vector<int> arr ={5,4,3,1,2};
    quickSort(arr,0,arr.size()-1);

    for(int i : arr){
        cout<< i;
    }

}