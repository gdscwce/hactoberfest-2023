class Node {
public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        next = nullptr;
    }

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }

    Node(int data, Node* next) {
        this->data = data;
        this->next = next;
    }
};

Node* findMiddle(Node* head) {
    Node* fast = head;
    Node* slow = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}
