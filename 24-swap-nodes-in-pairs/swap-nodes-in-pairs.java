/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapPairs(ListNode head) {
        if(head==null || head.next ==null){
            return head;
            }
            ListNode First=head;
            ListNode Second= head.next;
            ListNode prev= null;

        while(First!=null && Second!=null){
            ListNode Third = Second.next;

            Second.next= First;
            First.next = Third;

            if(prev!= null){
                prev.next =Second;
            }
            else{
                head=Second;
            }

            prev=First;
            First=Third;
            if(Third!= null){
                Second=Third.next;            
            }
            else{
                Second =null;
            }

        }
        return head;
    }
}
