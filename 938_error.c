#include <stdlib.h>

typedef struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
} t_node;

void dfs(t_node node, int L, int R, int *ans)
{
  if(node != NULL)
  {
    if(L <= node->val && node->vall <=R)
      *ans += node->val;
    if(L < node->val)
      dfs(node->left, L, R, &ans);
    if(node->val < R)
      dfs(node->right, L, R, &ans);
  }
}
 
int rangeSumBST(struct t_node* root, int L, int R){
  int ans = 0;
  dfs(root, L, R, &ans);
  return (ans);
}

int main() {

  return 0;
}
