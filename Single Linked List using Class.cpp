//EXPERIMENT 17
//Name:- Gandluri Sai Tejas
//Class:- ENTC A2
//PRN- 24070123045


#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node*next;
    
    Node(int data){
        val=data;
        next=NULL;
    }
};

int main() {
    Node*n=new Node(20);
    cout<<n->val<<" "<<n->next<<endl;

    return 0;
}

/*Output:
20 0
*/
