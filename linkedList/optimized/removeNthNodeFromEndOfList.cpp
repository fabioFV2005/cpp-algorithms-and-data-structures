class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {

        ListNode *dummy = new ListNode(0);
        dummy->next = head;

        ListNode *fast = dummy;
        ListNode *slow = dummy;

        // Move fast pointer n+1 steps ahead
        for (int i = 0; i <= n; i++)
        {
            fast = fast->next;
        }

        // Move both pointers
        while (fast != nullptr)
        {
            fast = fast->next;
            slow = slow->next;
        }

        // Remove nth node
        ListNode *nodeToDelete = slow->next;
        slow->next = slow->next->next;

        delete nodeToDelete;

        return dummy->next;
    }
};