class Node
{
    int data;
    Node next;
    Node(int d) {data = d; next = null; }
}


class NthNodeFromTheEnd{
    public static void main(String[] args){
        Node head = new Node(1); 
        Node second = new Node(2); 
        Node third = new Node(3); 
        Node fourth = new Node(4); 
        Node fifth = new Node(5); 
        Node sixth = new Node(6); 
        Node seventh = new Node(7); 
        Node eight = new Node(8); 
        Node nine = new Node(9); 

        head.next = second; 
        second.next = third; 
        third.next = fourth; 
        fourth.next = fifth; 
        fifth.next = sixth;
        sixth.next = seventh;
        seventh.next = eight;
        eight.next = nine;
        nine.next = null;
        display(head);
        int val = getNthFromLast(head, 2);
        System.out.println();
        System.out.println(val);
    }

    static int getNthFromLast(Node head, int n)
    {
    	// Your code here	
    	int size = getSize(head); 
    	if(size < n){
    	    return -1; 
    	}
    	int position = (size - n) + 1;
    	int i = 1;
    	Node ptr = head; 
    
    	while(i < position){
    	    ptr = ptr.next; 
    	    i++; 
    	}
    	return ptr.data;
    	
    }
    
    static int getSize(Node head){
        Node ptr = head;
        int count = 0; 
        while(ptr != null){
            ptr = ptr.next; 
            count++; 
        }
        return count; 
    }
    static void display(Node head){
        Node ptr = head; 
        while(ptr != null){
            System.out.print(ptr.data + " -> ");
            ptr = ptr.next; 
        }
    }
}