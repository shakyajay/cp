//
//  FrequentElementInArray.cpp
//  XcodeProject
//
//  Created by Ajay Shakya on 12/1/19.
//  Copyright © 2019 Ajay Shakya. All rights reserved.
//

#include <iostream>
#include <unordered_map>
using namespace std;

void printFrequentElementInArray(int arr[],int n) {
    unordered_map<int, int> mp;
    for (int i=0;i<n;i++) {
        mp[arr[i]]++;
    }
    int mostFrequentElement=0,count=0;
    
    for (auto& [key,value] : mp) {
        if(count<value){
            mostFrequentElement=key;
            count=value;
        }
    }
    
    cout<<"most frequent element in array:  "<< mostFrequentElement<<'\n';
}

    int main() {
    int arr[]={ 1, 5, 2, 1, 3, 2, 1 };
    int n =sizeof(arr)/sizeof(arr[0]);
    printFrequentElementInArray(arr,n);
    return 0;
}
