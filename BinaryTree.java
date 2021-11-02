public class BinaryTree {

	Node root;

	BinaryTree() {
		root = new Node(Integer.MIN_VALUE);
	}

	void insert(Node p, Node q) {
		if (q.data < p.data) {
			if (p.left != null) {
				insert(p.left,q);
			} else {
				insertLeft(p,q);
			}
		} else if (p.data < q.data) {
			if (p.right != null) {
				insert(p.right,q);
			} else {
				insertRight(p,q);
			}
		}
	}

	void insertRight(Node p, Node q) {
		p.right = q;
	}

	void insertLeft(Node p, Node q) {
		p.left = q;
	}

	void insert(int n) {
	Node q = new Node(n);
		insert(root,q);
	}

	void inorder(Node p) {
		if (p == null) { return; }
		inorder(p.left);
		System.out.print(p.data + " ");
		inorder(p.right);
	}

	void inorder() {
		inorder(root);
		System.out.println();
	}
}