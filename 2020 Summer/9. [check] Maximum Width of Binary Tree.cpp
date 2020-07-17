//discuss
//BFS / DFS 공부할 것
class Solution {
    public int widthOfBinaryTree(TreeNode root) {
        if (root == null)
            return 0;
        Deque<TreeNode> deque = new LinkedList<>(); // initialize deque
        deque.add(root); // add root node in deque
        int maxWidth = 0;
        while (!deque.isEmpty()) {
            int size = deque.size(); // size of current level
            maxWidth = Math.max(maxWidth, size);
            while (size-- > 0) {
                TreeNode node = deque.poll();
                if (node == null) { // node was null then to maintain add both left and right as null
                    deque.add(null);
                    deque.add(null);
                } else {
                    deque.add(node.left);
                    deque.add(node.right);
                }
            }
            while (!deque.isEmpty() && deque.peekFirst() == null)
                deque.pollFirst(); // remove all the null from the start until encounter first last non null node of level
            while (!deque.isEmpty() && deque.peekLast() == null)
                deque.pollLast(); // remove all the null from the last until encounter last non null node of level
        }
        return maxWidth;
    }
}
