
template <typename T>
Node<T>* sortTwoLists(Node<T>* first, Node<T>* second) {
    Node<T>* p1 = first;
    Node<T>* p2 = second;
    Node<T>* dummy = new Node<T>(-1);
    Node<T>* p3 = dummy;

    while (p1 != nullptr && p2 != nullptr) {
        if (p1->data < p2->data) {
            p3->next = p1;
            p1 = p1->next;
        } else {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while (p1 != nullptr) {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }

    while (p2 != nullptr) {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    return dummy->next;
}
