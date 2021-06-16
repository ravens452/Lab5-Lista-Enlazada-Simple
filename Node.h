class Node {
public:
    Node *next;
    int elem;
    Node() = default;//El estándar C ++ 11 introdujo la declaración de función predeterminada como una nueva forma de declaración de función.
    Node(Node *next, int elem) : next(next), elem(elem) {}
};
