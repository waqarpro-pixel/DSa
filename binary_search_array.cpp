#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "Binary Search on Array" << endl;
    int size,key;
    cout << "Enter the size of the Array : ";
    cin >> size;
    int arr[size];
    cout << "\n" << "Enter the Element of the Array : ";
    for(int i = 0;i < size;i++){
        cin >> arr[i];
    }

    cout << "\n" << "Which Element Do You Wanna Search : ";
    cin >> key;

    // Binary Search Code
    int s = 0,b = size,mid;
    while(s <= b){
        mid = (s+b)/2;
        if(arr[mid] == key){
            cout << "Your Element at : " << mid << endl;
            break;
        }else if(key < arr[mid]){
            b = mid - 1;
        }else{
            s = mid + 1;
        }
    }
    return 0;
}
