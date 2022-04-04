#include<bits/stdc++.h>
using namespace std;

struct Ele{
    public:
    int val,i,j;
    Ele(int ele,int r,int c):val(ele),i(r),j(c){}
};
struct MyCmp{
    bool operator()(Ele &a,Ele &b){
        return a.val > b.val;
    }
};

int kthSmallest(vector<vector<int>>& matrix, int k) {
    priority_queue<Ele,vector<Ele>,MyCmp> heap;
    for(int i=0;i<matrix.size();i++){
        Ele curr(matrix[0][i],0,i);
        heap.push(curr);
    }
}
int main(){
    vector<vector<int>> mat =  
    {{1,5,9},
    {10,11,13},
    {12,13,15}};
    kthSmallest(mat,8);
    return 0;
}