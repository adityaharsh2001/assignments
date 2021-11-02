import java.util.Random;

public class Main {
	public static void main(String[] args) {
		{
			Random random = new Random(0);
			BinaryTree t = new BinaryTree();
			for (int i = 0; i < 10; i++) {
				t.insert(random.nextInt(1000));
			}
			t.inorder();
		}
		{
			Random random = new Random(0);
			ThreadedTree t = new ThreadedTree();
			for (int i = 0; i < 10; i++) {
				t.insert(random.nextInt(1000));
			}
			t.inorder();
		}
	}
}