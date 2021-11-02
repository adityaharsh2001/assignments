import java.util.Random;

public class ThreadedTree extends BinaryTree {

	Node root;

	ThreadedTree() {
		root = new Node(Integer.MIN_VALUE);
		root.thread = true;
		root.right = root;
	}

	void insert(Node p, Node q) {
		if (q.data < p.data) {
			if (p.left != null) {
				insert(p.left,q);
			} else {
				insertLeft(p,q);
			}
		} else if (p.data < q.data) {
			if (!p.thread) {
				insert(p.right,q);
			} else {
				insertRight(p,q);
			}
		}
	}

	void insert(int n) {
		Node q = new Node(n);
		insert(root, q);
	}

	void insertRight(Node p, Node q) {
		q.thread = true;
		q.right = succ(p);
		p.thread = false;
		p.right = q;
	}

	void insertLeft(Node p, Node q) {
		q.thread = true;
		q.right = p;
		p.left = q;
	}

	Node succ(Node p) {
		Node q = p.right;
		if (p.thread) {
			return q;
		}
		while (q.left != null) {
			q = q.left;
		}
		return q;
	}

	Node leftmost(Node p) {
		while (p.left != null) {
			p = p.left;
		}
		return p;
	}

	void inorder(Node p) {
		Node q = leftmost(p);
		while (q.right != root) {
			System.out.print(q.data + " ");
			q = succ(q);
		}
		System.out.print(q.data + " ");
	}

	void inorder() {
		inorder(root);
		System.out.println();
	}
}
