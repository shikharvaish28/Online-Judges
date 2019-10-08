/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
// class Solution {
// public:
//     vector<int> preorder(Node* root) {
//         stack<Node*> node;
//             node.push(root);
//         vector<int> g1;
//             while(!node.empty()){
                
//                 Node* pre = node.top();
//                 node.pop();
                
//                 g1.push_back(pre->val);
                
//                 vector<Node*>::iterator it = pre->children.end();
//                     while(it!=pre->children.begin()){
//                         it--;
//                         node.push(*it);
//                     }
                
//             }
//  for (auto i = g1.begin(); i != g1.end(); ++i) 
//         return *i; 
  
//         }
    
        
//     };
class Solution {
public:
    vector<int> preorder(Node* root) {
        
        if (root == nullptr) return m_res;
        m_res.push_back(root->val); 
        for(size_t i(0); i < root->children.size(); ++i)  // travese all the children nodes
        {
            preorder(root->children[i]);
        }
        return m_res;
    }

private:
    vector<int> m_res;
};