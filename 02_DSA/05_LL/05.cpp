https://leetcode.com/problems/odd-even-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* odd = head;
        ListNode* even = head -> next;
        ListNode* evenHead = even;

        while(even!=NULL || even->next!+NULL){
            odd->next = even->next;
            odd = odd->next;

            even->next = odd->next;
            even = even ->next;
        }
        odd->next = evenHead;
        return head;
    }
};


https://leetcode.com/problems/remove-nth-node-from-end-of-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* t1 = head;
        ListNode* t2 = head;

        //move t2 ahead by n steps
        for(int i = 0; i< n; i++){
            t2 = t2->next;
        }
        if(t2 == NULL) return head->next;

        while(t2->next != NULL){
            t1 = t1->next;
            t2 = t2->next;
        }

        ListNode* toDel = t1->next;
        t1->next = t1->next->next;
        delete toDel;
        return head;
    }
};


https://www.naukri.com/code360/problems/reverse-list-in-k-groups_983644?leftPanelTabValue=PROBLEM

/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* kReverse(Node* head, int k) {
    // Write your code here.
    Node* curr = head;
    int count = 0;

    while(curr!= NULL && count < k){
        curr = curr->next;
        count++;
    }

    if(count == k){
        Node* currNode = head;
        Node* prevNode = NULL;
        Node* nextNode = NULL;
        int count2 = 0;

        while(count2 < k){
            nextNode = currNode->next;
            currNode->next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
            count2++;
        }
        head->next = kReverse(curr, k);
        return prevNode;
    }
    return head;


}

https://leetcode.com/problems/lru-cache/


class LRUCache {
public:
    class Node{
        public:
        int key,
        int value;
        Node* prev;
        Node* next;

        Node(int k, int v){
            key = k;
            value = v;
            prev = NULL;
            next = NULL;
        }
    };
    unordered_map<int, Node*> cache;
    int cap = 0;
    Node* head, tail;

    //if we have to insert a node immediately after head, which will make is most recently used node(MRU)
    void addToFront(Node* node){
        node -> next = head->next; //connect new node with first real node
        node->prev = head; 
        head->next->prev = node;
        head->next = node;
    }

    void removeNode(Node* node){
        Node* left = node->prev;
        Node* right = node->next;

        left->next = right;
        right->prev = left;
    }

    void moveToFront(Node* node){
        removeNode(node);
        addToFront(node);
    }

    LRUCache(int capacity) {
        cap = capacity;
        head = new Node(-1,-1);
        tail = new Node(-1, -1);

        head -> next = tail;
        tail ->prev = head;
    }
    
    int get(int key) {
        if(cache.find() == cache.end()){
            return -1;
        }
        Node* node = cache[key];
        moveToFront(node);
        return node->value;
    }
    
    void put(int key, int value) {
        //case 1 key already exists -> update the val and move to front
        if(cache.find(key) != cache.end()){
            Node* node = cache[key];
            node->value = value;
            moveToFront(node);
            return;
        }

        //cache full -> remove LRU
        if(cache.size() == cap){
            Node* node = tail->prev;
            cache.erase(node->key);
            removeNode(node);
            delete node;
        }
        //create new node
        Node* node = new Node(key, value);
        cache[key] = node;
        addToFront(node);
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */




