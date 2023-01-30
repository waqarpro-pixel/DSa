#include <bits/stdc++.h>
using namespace std;
int Insertion(int arr[],int size,int capacity,int element,int index){
    if(size >= capacity){
        return -1;
    }
    for(int i = size - 1;i >= index;i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int Deletion(int arr[],int index,int size){
    for(int i = index;i < size - 1;i++){
        arr[i] = arr[i+1];
    }
}

int main(int argc, char const *argv[])
{
    int size = 5;
    int arr[50] = {0,3,7,10,15};
    Insertion(arr,size,50,11,2);
    size++;
    Insertion(arr,size,50,17,2);
    size++;
    Deletion(arr,1,size);
    for(int i = 0;i < size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
