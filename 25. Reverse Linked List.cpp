template <typename T>
void solve(LinkedListNode<T>*& head, LinkedListNode<T>* curr, LinkedListNode<T>* prev) {
    if (curr == nullptr) {
        head = prev;
        return;
    }

    LinkedListNode<T>* forward = curr->next;
    solve(head, forward, curr);
    curr->next = prev;
}

template <typename T>
LinkedListNode<T>* reverseLinkedList(LinkedListNode<T>* head) {
    LinkedListNode<T>* curr = head;
    LinkedListNode<T>* prev = nullptr;
    solve(head, curr, prev);
    return head;
}
