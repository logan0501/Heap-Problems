#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/k-largest-elements3736/1/?category[]=Heap&category[]=Heap&difficulty[]=-1&page=1&query=category[]Heapdifficulty[]-1page1category[]Heap

 vector<int> kLargest(int arr[], int n, int k)
{   
    vector<int> v;
    priority_queue<int,vector<int>,greater<int>> pq;
    int i;
    for(i=0;i<k;i++)
        pq.push(arr[i]);
        for(;i<n;i++){
        if(pq.top()<arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }

    }
    while(!pq.empty()){v.push_back(pq.top());pq.pop();};
    sort(v.begin(),v.end(),greater<int>());
    return v;
}
int main(){

}