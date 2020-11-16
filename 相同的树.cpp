class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q==NULL) return true;//如果都为空树则相同 如果走到头都相等 则返回true
        if(p==NULL||q==NULL) return false;//其中一棵空则不同
        if(p->val!=q->val) return false;//判断值是否相等
        return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
    }
};