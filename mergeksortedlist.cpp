#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    ListNode * next;
    ListNode(int x):val(x),next(nullptr){}
};
struct MyCmp{
    bool operator()(ListNode *a,ListNode *b){
        return a->val > b->val;
    }
};
ListNode* mergeKLists(vector<ListNode*>& lists) {
    priority_queue<ListNode*,vector<ListNode *>,MyCmp> pq;
    for(auto a:lists){
        if(a)pq.push(a);
    }  
    ListNode head(0);
    ListNode* tail = &head;
    while (!pq.empty())
    {
        auto temp = pq.top();
        pq.pop();
        tail->next = temp;
        tail = tail->next;
        if(temp->next)pq.push(temp->next);

    }
    tail->next = NULL;
    return head.next;
    
}
int main(){

    return 0;
}