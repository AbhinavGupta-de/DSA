package questions.linkedlist.medium;

public class DeleteNode {

 private class ListNode {
  Object val;
  ListNode next;
 }

 public void deleteNode(ListNode node) {
  // while (node.next != null && node.next.next != null) {
  // node.val = node.next.val;
  // node = node.next;
  // }

  // if (node.next != null && node.next.next == null) {
  // node.val = node.next.val;
  // node.next = null;
  // }

  ListNode prev = null;

  while (node.next != null) {
   prev = node;
   prev.val = node.next.val;
   node = node.next;
  }

  prev.next = null;
 }
}
