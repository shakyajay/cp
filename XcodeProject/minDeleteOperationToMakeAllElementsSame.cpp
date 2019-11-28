//
//  minDeleteOperationToMakeAllElementsSame.cpp
//  XcodeProject
//
//  Created by Ajay Shakya on 11/29/19.
//  Copyright © 2019 Ajay Shakya. All rights reserved.
//

#include <iostream>
#include <unordered_map>

using namespace std;

void minDelOperation(int arr[],int size){
    
    unordered_map<int, int> mp;
    int maxCnt=0;
    
    for(int i=0;i<size;i++){
        mp[arr[i]]++;
    }
    
    for(auto& [key,value] : mp){
        
        if(maxCnt<value)maxCnt=value;
    }
    
    cout<< "minimum no of delete operation to make all elements same in array: "<< (size-maxCnt)<<endl;
}

int main(){
    
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    minDelOperation(arr,size);
    
    return 0;
}
