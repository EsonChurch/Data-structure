#include <iostream>
#include <queue>

using namespace std;

typedef struct node{
	int data;
	node* lchild;
	node* rchild;
} node;
int main() {
	queue<node*> nodeq;
	node root;
	root.data = 0;
	nodeq.push(&root);
	node* p;
	for(int i = 0; i < 10; i+=2){
		p = nodeq.front();
		nodeq.pop();
		p->lchild = new node;	
		p->lchild->data = i+1;	
		p->rchild = new node;	
		p->rchild->data = i+2;	
		nodeq.push(p->lchild);
		nodeq.push(p->rchild);
		
	}
	while(!nodeq.empty()){
		p = nodeq.front();
		p->lchild=p->rchild = NULL;
		nodeq.pop();
	}
	nodeq.push(&root);
	while(!nodeq.empty()){
		p = nodeq.front();
		cout << p->data <<endl ;
		nodeq.pop();
		if(p->lchild != NULL)
			nodeq.push(p->lchild);
		if(p->rchild != NULL)
			nodeq.push(p->rchild);

	}
	return 0;
}
