#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int compare(int a,int b){
 return a<b;
}
void merge_sort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        vector<int> left(arr.begin() + low, arr.begin() + mid + 1);
        vector<int> right(arr.begin() + mid + 1, arr.begin() + high + 1);
        vector<int> result(high - low + 1);
        merge(left.begin(), left.end(), right.begin(), right.end(), result.begin(),compare);
        copy(result.begin(), result.end(), arr.begin() + low);
    }
}

int main() {

    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    merge_sort(arr, 0, arr.size() - 1);
    for (auto x : arr) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
