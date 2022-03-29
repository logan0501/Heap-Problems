#include<bits/stdc++.h>
using namespace std;
// Link - https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1
long long minCost(long long arr[], long long n) {
    long long cost=0;
    priority_queue<long long,vector<long long>,greater<long long>> heap(arr,arr+n);
    while(heap.size()>1){
        long long a = heap.top();
        heap.pop();
        long long b = heap.top();
        heap.pop();
        long long new_rope = a+b;
        cost+=new_rope;
        heap.push(new_rope);
    }
    return cost;
}
int main(){
    return 0;
}