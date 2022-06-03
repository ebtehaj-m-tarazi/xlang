#include "tree.h"

/*=======================Node======================*/
node::node(string tokenName , string tokenValue ){
  token[0] = tokenName;
  token[1] = tokenValue;
}

vector<node*> node::getChildren(){
  return children;
}

string node::getToken(int i){
  return token[i];
}


node* node::addChild(string _tokenName , string _tokenValue){
  children.push_back(new node(_tokenName , _tokenValue));
  return this;
}

node* node::addChild(node *child){
  children.push_back(child);
  return this;
}

node* node::addOthersChild(node* other){
  vector<node*> othersChildren = other->getChildren();
  for(int i = 0; i < othersChildren.size(); i++){
    addChild(othersChildren[i]);
  }
  return this;
}

void node::deleteChild(node *_root){
  for(int i = 0; i < _root->children.size(); i++){
    deleteChild(_root->children[i]);
  }
  delete _root;
}

void node::deletChildren(){
  for(int i = 0; i < children.size(); i++){
    deleteChild(children[i]);
  }
}



/*=======================Tree======================*/
tree::tree(string _tokenName , string _tokenValue){
  root = new node(_tokenName , _tokenValue);
}

tree::tree(tree & other){
  root = new node(other.root->getToken(0) , other.root->getToken(1));
}

tree::~tree(){
  if(root == NULL)
    return;
  
  root->deletChildren();

  delete root;
}

node* tree::getRoot(){
  return root;
}

vector<node*> tree::getChildren(){
  return root->getChildren();
}

tree* tree::addChild(string _tokenName , string _tokenValue){
  root->addChild(_tokenName , _tokenValue);
  return this;
}

tree* tree::addChild(node* child){
  root->addChild(child);
  return this;
}

tree* tree::addOthersChild(node* other){
  root->addOthersChild(other);
  return this;
}

void preorderTraversal(int input , node* _root){

  if(_root == NULL)
    return;

  cout << _root->getToken(input) << " ";

  for(int i = 0; i < _root->getChildren().size(); i++)
    preorderTraversal(input , _root->getChildren()[i]);
}