/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int rangeSumBST(TreeNode root, int low, int high) {
            int sum = 0;
            if (root == null){
                return 0;
            }

            // val of the current node
            if (root.val >= low && root.val<=high){
                sum+=root.val;
            }

            // left child
            if (root.val > low){
                sum += rangeSumBST(root.left, low, high);
            }

            // right child
            if (root.val < high){
                sum += rangeSumBST(root.right, low, high);
            }
            return sum;
        }
    }
