#include <iostream>

using namespace std;

typedef struct Node{
	int data;
	Node *lchild;
	Node *rchild;
}  Node;

Node* createNode(int data){
	Node *ret = new Node;
	ret->data = data;
	return ret;
}

//顺序存储满二叉树转化为链式存储
Node* createTree(int tree[],int length,int i){
	if(i>=length)
		return NULL;
	Node *ret=createNode(tree[i]);
	ret->lchild=createTree(tree,length,i*2+1);
	ret->rchild=createTree(tree,length,i*2+2);
	return ret;
}
void printTree(Node* tree){
	if(tree == NULL)
		return;
	cout<< tree->data << " ";
	printTree(tree->lchild);
	printTree(tree->rchild);

}
/*********后序遍历非递归
 *1.一直把左子树压栈
 *2.压完后把在看栈顶元素是否已经访问过右子树
 如果没有，把栈顶右子树压栈并把访问右子树标记为真
 如果已经访问了则出栈输出
 * *******************************/
void postorderNorecursive(Node* tree){
	Node* stack[100];
	bool flag[100] = {false};//标记栈里元素是否已经访问右子树
	int top = 0;//栈顶指针指向第一个空元素
	Node *p = tree;
	while(!(top==0&&flag[0]==true)){//栈空且栈顶元素的右子树已经访问过说明遍历完成
		while(p!=NULL){
			stack[top]=p;
			flag[top++]=false;
			p=p->lchild;
		}
		if(flag[top-1]==false){
			p = stack[top-1]->rchild;
			flag[top-1]=true;
		}else if(flag[top-1] == true){
			cout << stack[--top]->data  ;
			
		}
		


	}

}
int main(){
	int data[] = {1,2,4,3,5};
	Node* tree = createTree(data,5,0);	

	printTree(tree);
	cout<<endl;
	postorderNorecursive(tree);

}
