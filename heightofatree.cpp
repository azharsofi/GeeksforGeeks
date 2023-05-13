class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node==NULL)
        return 0;
        int hl=height(node->left);
        int hr=height(node->right);
        return max(hl,hr)+1;
    }
};
