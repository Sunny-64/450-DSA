public class MoveLastToFirst {
    public static void main(String[] args) {
        Node head = new Node(1); 
        Node second = new Node(2); 
        Node third = new Node(3); 
        Node fourth = new Node(4); 
        Node fifth = new Node(5); 
        head.next = second; 
        second.next = third; 
        third.next = fourth; 
        fourth.next = fifth; 
        fifth.next = null;
    }
    static Node moveLastNodeToFirst(Node head){


        return head; 
    }
    static void display(Node head){
        Node ptr = head; 
        while(ptr != null){
            System.out.print(ptr.data + " -> ");
            ptr = ptr.next; 
        }
    }
}
