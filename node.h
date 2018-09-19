
#define NODE_H
class node
{
  int value;
  node* rigth;
  node* left; 
public:
  node();
  node(int value_):value(value_) {
    rigth=nullptr;
    left=nullptr;  
  };
  ~node();
  
};
