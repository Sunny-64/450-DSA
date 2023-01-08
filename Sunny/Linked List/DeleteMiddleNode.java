 class ListNode {
      int val;
      ListNode next;
      ListNode() {}
      ListNode(int val) { this.val = val; }
      ListNode(int val, ListNode next) { this.val = val; this.next = next; }
  }

public class DeleteMiddleNode {
    public static void main(String[] args) {
        ListNode head = new ListNode(1);
        ListNode second = new ListNode(2);
        ListNode third = new ListNode(3);
        ListNode fourth = new ListNode(4);
        ListNode fifth = new ListNode(5);
        head.next = second;
//        head.next = null;
        second.next = third;
//        second.next = null;
        third.next = null;
//        third.next = fourth;
//        fourth.next = fifth;
//        fifth.next = null;
        display(head);
        System.out.println();
        deleteMiddle(head);
        display(head);

    }
    public static ListNode deleteMiddle(ListNode head) {
        int l = size(head);
        if(l == 1){
            return null;
        }
        l = (l/ 2) - 1; // node to be deleted

//        ListNode ptrNext = head.next;
        ListNode ptr = head;
        int i = 0;
        while(i < l){
            ptr = ptr.next;
//            ptrNext = ptrNext.next;
            i++;
        }
//        ptr.next = ptrNext.next;
        ptr.next = ptr.next.next;
        return head;
    }
    static int size (ListNode head){
        int count = 0;
        ListNode ptr = head;
        while(ptr != null){
            count++;
            ptr = ptr.next;
        }
        return count;
    }

    static void display (ListNode head){
        ListNode ptr = head;
        while(ptr != null){
            System.out.print(ptr.val + " -> ");
            ptr = ptr.next;
        }
    }
}
