#include <iostream>
using namespace std;
#include <vector>


class node {

  string token[2];
  vector<node*> children;

public:
  node(string tokenName , string tokenValue ); 

  vector<node *> getChildren();
  string getToken(int i);

  void addChild(string _tokenName , string _tokenValue);
  void addChild(node *child);
  void addOthersChild(node* other);

  void deleteChild(node *_root);
  void deletChildren();
};


class tree { 

  node *root;
  
  void Delete(node* _root);

public:
  tree(string _tokenName , string _tokenValue);
  tree(tree& other);
  ~tree();

  node* getRoot();
  vector<node*> getChildren();

  tree& addChild(string _tokenName , string _tokenValue);
  tree& addChild(node *child);
  tree& addOthersChild(tree& other);
};

void preorderTraversal(int input , node* _root = NULL);