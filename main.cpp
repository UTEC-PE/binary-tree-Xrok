#include <cstdlib>
#include <iostream>

#include "node.h"

//using namespace std;


int main() {
	tree arbol;
	arbol.agregarNodo(5);
	arbol.agregarNodo(4);
	arbol.agregarNodo(7);
	arbol.agregarNodo(6);
	arbol.agregarNodo(2);
	arbol.agregarNodo(3);
	arbol.agregarNodo(1);
	arbol.imprimir_inorder();
	arbol.imprimir_preorder();
	arbol.imprimir_postorder();
	cout<<endl;	
}