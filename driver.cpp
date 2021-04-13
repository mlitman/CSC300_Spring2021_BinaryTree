#include <iostream>
#include "BinaryTree.hpp"

using namespace std;

int main(int argc, char** argv)
{
    BinaryTree* bt = new BinaryTree();
    bt->add(5);
    bt->add(2);
    bt->add(13);
    bt->add(17);
    cout << bt->getCount() << endl;
    cout << "********" << endl;
    bt->visitInOrder();
    cout << endl << "********" << endl;
    bt->visitPostOrder();
    cout << endl << "********" << endl;
    bt->visitPreOrder();
    cout << endl << "********" << endl;
    return 0;
}
