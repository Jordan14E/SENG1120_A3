//
// Created by jeade on 26/10/2021.
//

#ifndef SENG1120_A3_BSTREE_H
#define SENG1120_A3_BSTREE_H


#include "string"
#include "BTNode.h"

template <typename Type>
class BSTree {

public:

    BSTree(){
        root = NULL;
    };

    ~BSTree(){
        //TODO: add destructor here
    };

    /***
     * The add() method is used to add an item to the binary tree. If the root node is NULL the part is added as the root. Otherwise
     * the method passes off to the recursive place() function to find the correct position for the part.
     * @param part The part to be added to the binary tree
     */
    void add(Type part){

        //if the root node is empty add as the root node
        if(root==NULL){
            root->setItem(part);
        }

        //otherwise pass off to place()
        else{
            place(root, part);
        }
    };


    /***
     * The place() method is used to find the correct position for the passed part and add it. The place() method uses recursion 
     * to move through the tree and find the correct position for the part based on binary search tree principles.
     * @param a The Node currently being compared to the part
     * @param part The part to be added to the tree
     */
    void place(BTNode<Type>* a, Type part){
        
        //if the part is the same as the part stored in the current node replace it
        if(part == a->getItem()){
            a->setItem(part);
        }

        //if the part is greater then the part in the current node
        else if(part>a->getItem()){
            //if the right child of the current node is empty add the part as the right child
            if(a->getRChild()==NULL){
                BTNode<Type>* newNode = new BTNode<Type>;
                a->setRChild(newNode);
                newNode->setParent(a);
                newNode->setItem(part);
                return;
                }
            //otherwise run the method again using the right child of the current node
            else{
                place(a->getRChild(), part);
            }
        }
        
        //if the part is smaller than the part in current node
        else if(part<a->getItem()){
            //if the left child of the current node is empty add the part as the left child
            if(a->getLChild()==NULL){
                BTNode<Type>* newNode = new BTNode<Type>;
                a->setLChild(newNode);
                newNode->setParent(a);
                newNode->setItem(part);
                return;
            }
            //otherwise run the method again using the left child of the current node
            else{
                place(a->getLChild(), part);
            }
        }
    };

    /***
     * 
     * @param part
     */
    void remove(Type part){
            deleteNode(root, part);
    };

    /***
     * 
     * @param a
     * @param part
     */
    void deleteNode(BTNode<Type>* a, Type part){
        /*Cases:
            - Node matches, no left or right
                + delete node
            - Node doesn't match, part < node
                + move to left child of node
            - Node doesn't match, part > node
                + move to right child of node
            -Node matches, has left child, no right
                + delete node, replace with left child
            -Node matches, has right child. smallest right child has no children
                + delete node, replace with smallest node on right side
            - Node matches, has right child, smallest right child has child
                + delete node, replace with smallest node on right side. replace that node with its right child
        */




    }

    int calculateParts(){
        return 0;
    };

    int calculateInventory(){return 0;};

    int calculateLessThan(int less){return 0;};

private:

    BTNode<Type>* root;

};

template <typename Type>
std::ostream& operator << (std::ostream& out, BSTree<Type> &tree){
    return out;
};



#endif //SENG1120_A3_BSTREE_H
