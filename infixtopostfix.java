import java.util.*;

class infixtopostfix {

  static int precedance(char ch) {
    switch (ch) {
      case '+':
      case '-':
        return 1;
      case '*':
      case '/':
        return 2;
      case '^':
        return 3;
    }
    return -1;
  }

  static String covert(String exp) {
    String result = new String("");

    Stack<Character> stack = new Stack<>();

    for (int i = 0; i < exp.length(); ++i) {
      char c = exp.charAt(i);

      if (Character.isLetterOrDigit(c))
      result += c; 
      else if (c == '(')
      stack.push(c);
      else if (c == ')'){
        while (!stack.isEmpty() && stack.peek() != '(')
        result += stack.pop();
        stack.pop();
      }
      else{
        while (!stack.isEmpty() && precedance(c) <= precedance(stack.peek())){
          result += stack.pop();
        }
        stack.push(c);
      }
    }
    while (!stack.isEmpty()) {
      if (stack.peek() == '(') return "Invalid Expression";
      result += stack.pop();
    }
    return result;
  }

  static int eval(String exp) {
    Stack<Integer> stack = new Stack<>();

    for (int i = 0; i < exp.length(); i++) {
      char c = exp.charAt(i);

      if (Character.isDigit(c)) stack.push(c - '0'); else {
        int val1 = stack.pop();
        int val2 = stack.pop();

        switch (c) {
          case '+':
            stack.push(val2 + val1);
            break;
          case '-':
            stack.push(val2 - val1);
            break;
          case '/':
            stack.push(val2 / val1);
            break;
          case '*':
            stack.push(val2 * val1);
            break;
        }
      }
    }
    return stack.pop();
  }

  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    System.out.println("Enter The Infix Expression: ");
    String exp = in.nextLine();
    String newexp = covert(exp);
    System.out.println(newexp);
    System.out.println("Postfix Expression: " + (newexp));
    System.out.println("Evaluated Expression: " + eval(newexp));
  }
}
