
class Node:
    def struct(self, key):
        self.left = None
        self.right = None
        self.val = key
  
def insert(root, key):
    if root is None:
        return Node(key)
    else:
        if root.val == key:
            return root
        elif root.val < key:
            root.right = insert(root.right, key)
        else:
            root.left = insert(root.left, key)
    return root
  
def inorder(root):
    if root:
        inorder(root.left)
        print(root.val)
        inorder(root.right)
 
r = Node(70)
r = insert(r, 50)
r = insert(r, 30)
r = insert(r, 60)
r = insert(r, 90)
r = insert(r, 80)
r = insert(r, 100)
 
inorder(r)