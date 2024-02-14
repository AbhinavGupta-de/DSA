package questions.tree.easy;

import questions.tree.TreeNode;

public class DiameterOfTree {
 int diameter = 0;

 public int diameterOfBinaryTree(TreeNode root) {
  height(root);
  return diameter;
 }

 private int height(TreeNode node) {
  if (node == null)
   return 0;

  int lh = height(node.left);
  int rh = height(node.right);

  this.diameter = Math.max(diameter, lh + rh);
  return 1 + Math.max(lh, rh);
 }
}
