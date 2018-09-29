//insert , remove,pesos, 3 prints, iterator. 
#define NODE_H
using namespace std;
class node
{
public:
  int value;
  node* right;
  node* left; 

  node();
  node(int value_): value(value_) {
    right=nullptr;
    left=nullptr;
  };
  //~node();
 /* node* operator++(node* nodo){
		if (nodo->left)
		{
			return nodo->left;
		}else if (nodo->right)
		{
			return nodo->right;
		}else if (nodo->left==nullptr && nodo->right == nullptr)
		{
			return nullptr;
		}
	}
*/
 };

class tree
{
	public:
	node* root;

	tree(){
		root=nullptr;
	};
	//~tree();
	
	void agregarNodo(int new_data){
	 	node* nuevo = new node(new_data);
	 	if(!root){
	 		cout<<"Se ingreso el: "<<new_data<<endl;
	 		root = nuevo;
	 	}
	 	else {
	 		node* temp = root;
	 		while(!(temp->value == new_data)){

		 		if (new_data < temp->value)
		 		{
		 			if (temp->left == nullptr )
		 			{
		 				temp->left = nuevo;
		 				cout<<"Se ingreso el: "<<new_data<<endl;
		 				return;
		 			}else{
		 				temp = temp->left;
		 			}
		 		}

		 		else if (new_data> temp->value)
		 		{
		 			if (temp->right == nullptr )
		 			{
		 				temp->right = nuevo;
		 				cout<<"Se ingreso el: "<<new_data<<endl;
		 				return;
		 			}else{
		 				temp = temp->right; 
		 			}
	 			}

	 		}
	 	cout<<"Numero ya ingresado"<<endl;
		}
	}

	void print_inorder(node* nodo){
		if (nodo->left)
		{
			print_inorder(nodo->left);
		}

		cout<<nodo->value<<" ";

		if (nodo->right){
			print_inorder(nodo->right);
		}
	}

	void print_preorder(node* nodo){
		cout<<nodo->value<<" ";

		if (nodo->left)
		{
			print_preorder(nodo->left);
		}

		if (nodo->right){
			print_preorder(nodo->right);
		}
	}

	void print_postorder(node* nodo){
		if (nodo->left)
		{
			print_postorder(nodo->left);
		}

		if (nodo->right){
			print_postorder(nodo->right);
		}

		cout<<nodo->value<<" ";
	}


	void imprimir_inorder(){
		if (!root)
		{
			cout<<"arbol vacio"<<endl;
		}else 
		{
			cout<<endl<<"Inorder: ";
			print_inorder(root);
		}
	}

	void imprimir_preorder(){
		if (!root)
		{
			cout<<"arbol vacio"<<endl;
		}else 
		{
			cout<<endl<<"Preorder: ";
			print_preorder(root);
		}
	}
	void imprimir_postorder(){
		if (!root)
		{
			cout<<"arbol vacio"<<endl;
		}else 
		{
			cout<<endl<<"Postorder: ";
			print_postorder(root);
		}
	}
	/*void eliminar_nodo(int data_delete){
		node* delete_node = search(data_delete);//Implemetnar funciion search() | node or node*
		if (delete_node)
		{
			if(((delete_node->left == nullptr ) + (delete_node->right == nullptr)) == 2 )
			{
				cout<<"identifico nodo sin hijos"<<endl;
			}

			if(((delete_node->left == nullptr ) + (delete_node->right == nullptr)) == 1 )
			{
				cout<<"identifico nodo con 1 hijo"<<endl;
			}
			if(((delete_node->left == nullptr ) + (delete_node->right == nullptr)) == 0 )
			{
				cout<<"identifico nodo con 2 hijos"<<endl;
			}
		}
	}*/
	  
};