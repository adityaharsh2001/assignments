public class Node {
	int data;
	Node left,right;
	boolean thread;

	Node(int n) {
		data = n;
	}

	public String toString() {
		StringBuffer sb = new StringBuffer();
		sb.append("[").append(data).append(",");
		if (left != null) {
			sb.append(left.data);
		} else {
			sb.append(left);
		}
		sb.append(",");
		if (right != null) {
			sb.append(right.data);
		} else {
			sb.append(right);
		}
		sb.append(",");
		sb.append(thread);
		sb.append("]");
		return sb.toString();
	}
}