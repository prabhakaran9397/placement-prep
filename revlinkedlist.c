struct ListNode* reverseBetween(struct ListNode* head, int m, int n){

    int i;

    struct ListNode* curr = head;

    struct ListNode* prev = NULL;

    struct ListNode* next = NULL;

    struct ListNode* M = head;

    struct ListNode* temp = NULL;

    

    if(m > 1 && m!=n)

    {

        for(i=1; i<m-1; i++)

            M = M->next;

        curr = M->next;

        temp = curr;

        for(i=m; i<=n; i++)

        {

            next = curr->next;

            curr->next = prev;

            prev = curr;

            curr = next;

        }

        temp->next = curr;

        M->next = prev;

        M = head;

    } else if(m!=n){

        temp = curr;

        for(i=m; i<=n; i++)

        {

            next = curr->next;

            curr->next = prev;

            prev = curr;

            curr = next;

        }

        M = prev;

        temp->next = curr;

    }

    return M;

}
