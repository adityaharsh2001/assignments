import java.util.*;

class LinkedList {
    Node head; 
       class Node {
        int data;
        Node next;
        Node(int d)
        {
            data = d;
            next = null;
        }
    }
    void sortedInsert(Node new_node)
    {
        Node current;
        if (head == null || head.data
>= new_node.data) {
            new_node.next = head;
            head = new_node;
        }
        else {
            current = head;
 
            while (current.next != null
&& current.next.data < new_node.data)
                current = current.next;
 
            new_node.next = current.next;
            current.next = new_node;
        }
    }

    void deleteNode(int key)
    {
        Node temp = head, prev = null;
 
        if (temp != null && temp.data == key) {
            head = temp.next; 
            return;
        }
 
        while (temp != null && temp.data != key) {
            prev = temp;
            temp = temp.next;
        }
 
        if (temp == null)
            return;
 
        prev.next = temp.next;
    }

    Node newNode(int data)
    {
        Node x = new Node(data);
        return x;
    }
    void printList()
    {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
    }
     public static void main(String args[])
    {
        LinkedList llist = new LinkedList();
        Node new_node;
        
        

       while(true){
        System.out.println("1. Insertion\t\t2. Deletion");
        Scanner scan = new Scanner(System.in);
        String choice = scan.nextLine();
        switch(choice){
            case "1": 
            
            System.out.println("Input a number");
            int num = scan.nextInt();
            new_node = llist.newNode(num);
            llist.sortedInsert(new_node);
            System.out.println("Created Linked List");
            llist.printList();
            break;

            case "2": 
            System.out.println("Input a number");
            num = scan.nextInt();
            llist.deleteNode(num); 
            System.out.println(
                "\nLinked List after Deletion of 1:");
            llist.printList();
            break; 

            default : System.exit(0);
        }

       }
      
    }
}