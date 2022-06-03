#include <iostream>
using namespace std;
#include <vector>


class tree {

  string token[2];
  vector<tree*> children;

public:
  tree(string tokenName , string tokenValue );
  tree(tree& other); 
  ~tree();

  vector<tree *> getChildren();
  string getToken(int i);

  tree* addChild(string _tokenName , string _tokenValue);
  tree* addChild(tree *child);
  tree* addOthersChild(tree* other);

  void deleteChild(tree *_root);
  void deletChildren();
};

void preorderTraversal(int input , tree* _root = NULL);