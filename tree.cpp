#include "tree.h"


tree::tree(string tokenName , string tokenValue ){
  token[0] = tokenName;
  token[1] = tokenValue;
}

tree::tree(tree& other){
  token[0] = other.getToken(0);
  token[1] = other.getToken(1);
} 

tree::~tree(){
  deletChildren();
}

vector<tree*> tree::getChildren(){
  return children;
}

string tree::getToken(int i){
  return token[i];
}


tree* tree::addChild(string _tokenName , string _tokenValue){
  children.push_back(new tree(_tokenName , _tokenValue));
  return this;
}

tree* tree::addChild(tree *child){
  children.push_back(child);
  return this;
}

tree* tree::addOthersChild(tree* other){
  vector<tree*> othersChildren = other->getChildren();
  for(int i = 0; i < othersChildren.size(); i++){
    addChild(othersChildren[i]);
  }
  return this;
}

void tree::deleteChild(tree *_root){
  for(int i = 0; i < _root->children.size(); i++){
    deleteChild(_root->children[i]);
  }
  delete _root;
}

void tree::deletChildren(){
  for(int i = 0; i < children.size(); i++){
    deleteChild(children[i]);
  }
}

void preorderTraversal(int input , tree* _root){

  if(_root == NULL)
    return;

  cout << _root->getToken(!input) << " ";

  for(int i = 0; i < _root->getChildren().size(); i++)
    preorderTraversal(input , _root->getChildren()[i]);
}