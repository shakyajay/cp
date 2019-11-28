//
//  maxDistanceBetweenTwoSameElement.cpp
//  XcodeProject
//
//  Created by Ajay Shakya on 11/29/19.
//  Copyright © 2019 Ajay Shakya. All rights reserved.
//

#include <iostream>
#include <unordered_map>

using namespace std;

void maxDistanceBetweenTwoSameElement(int arr[],int size){
    
    unordered_map<int, int> mp;
    int maxCnt=0;
    
    for(int i=0;i<size;i++){
        if(mp.find(arr[i]) ==mp.end())
        {
            mp[arr[i]]=i;
        } else{
            maxCnt= max(maxCnt,i-mp[arr[i]]);
        }
    }
    
    cout<<"maximum distance for two same element: "<< maxCnt<<endl;
    
    
}

int main(){
    
    int arr[] = {3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    maxDistanceBetweenTwoSameElement(arr,size);
    
    return 0;
}
