

class Solution {
public:
vector<int> result;

    void preorderHelper(Node* root) {
        if (!root) return;
        result.push_back(root->val);
        for (auto child : root->children) {
            preorderHelper(child);
        }
    }
    vector<int> preorder(Node* root) {
         result.clear();
        preorderHelper(root);
        return result;
        
    }
};