#include "tree.h"

int main(){
  tree * a = new tree("1" , "1");
  tree * b = new tree("5" , "6");
  b->addChild("7" , "8")->addChild("9" , "10");
  tree * c = new tree("11" , "12");
  node * d = new node("17" , "18");
  c->addChild("13" , "14")->addChild("15" , "16");
  a->addChild("3" , "4")->addChild(b->getRoot())->addOthersChild(c->getRoot())->addChild(d);

  preorderTraversal(1 , a->getRoot());
  cout << endl;
}