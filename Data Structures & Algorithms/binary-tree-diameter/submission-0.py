# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        op1=self.diameterOfBinaryTree(root.left)
        op2=self.diameterOfBinaryTree(root.right)
        op3=self.height(root.left)+self.height(root.right)
        res=max(op1,max(op2,op3))
        return res
    def height(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        h1=self.height(root.left)
        h2=self.height(root.right)
        ans=max(h1,h2)+1
        return ans