#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//  Find the missing element in a array with duplicate - 

// Method 1- negative marking method - 

void findMissing( vector<int>arr ){
    int n = arr.size();
    for(int i=0;i<n;i++){
        int index = abs(arr[i]);
        if(arr[index - 1] > 0){
            arr[index - 1] *= -1;
        }
    }


    for(int i= 0 ; i<n ;i++){
        if(arr[i] > 0){
            cout<<i+1<<" ";
        }
    }
}

// Method 2 - Using sorting and Swapping-

 void usingSorting(vector<int>arr){
    int n = arr.size();
    
    //  To sort an array - 
    int i = 0 ;

    while(i<n){
        int index = arr[i] - 1;
    
        if(arr[i] != arr[index]){
            swap(arr[i] , arr[index]);
        }
        else i++;

    }

//  To check the missing number - 

for(int i=0 ; i<n;i++){
    if(arr[i] != i+1){
        cout<<i+1<<" ";
    }
}


}


int main()
{


    vector <int>arr  {1,3,5,3,4};

    // findMissing(arr,n);
    usingSorting(arr);


 return 0;
}