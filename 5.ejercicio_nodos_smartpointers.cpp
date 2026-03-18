#include <iostream>
#include <memory>

using namespace std;

class Node {
public:
    std::shared_ptr<Node> next;
    int data;

    Node(int d) : data(d) {/**/}

    void print() {
        // implementar un método que permita
        // navegar por los nodos linkeados
        // e imprimir la data.

        Node* actual = this; //empezamos por el nodo actual
        while (actual) {
            cout << actual-> data;
            if (actual->next) { //si despues hay un nodo, se imprime una felcha
                cout << " -> ";
            }
            actual = actual->next.get(); // movemos el puntero al siguiente nodo
        }
        cout << endl;
    }
};

int main () {
    auto node1 = std::make_shared<Node>(1);
    auto node2 = std::make_shared<Node>(2);

    // Enlazamos nodos
    // node1.data => 1
    node1->next = node2; // next es shared_prt

    /**
     * Este médoto debería imprimir
     * 1 -> 2 en consola
     */
    node1->print();
}