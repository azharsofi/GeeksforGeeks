class Solution {
    private:
    int height(struct Node* node){
        // code here 
        if(node==NULL)
        return 0;
        int hl=height(node->left);
        int hr=height(node->right);
        return max(hl,hr)+1;
    }
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        if(root==NULL)
        return 0;
        int a=diameter(root->left);
        int b=diameter(root->right);
        int c=height(root->left)+height(root->right)+1;
        int ans=max(a,max(b,c));
        return ans;
    }
};
