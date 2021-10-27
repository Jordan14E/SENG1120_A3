//
// Created by jeade on 26/10/2021.
//

#ifndef SENG1120_A3_BSTREE_H
#define SENG1120_A3_BSTREE_H


#include "string"
#include "BTNode.h"
#include "MechPart.h"
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
            root = part;
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
    void place(BTNode<Type> a, Type part){
        
        //if the part is the same as the part stored in the current node replace it
        if(part == a.getItem()){
            a=part;
        }

        //if the part is greater then the part in the current node
        else if(part>a.getItem()){
            //if the right child of the current node is empty add the part as the right child
            if(a.getRChild()==NULL){
                BTNode<Type>* newNode = new BTNode;
                a.setRChild(newNode);
                newNode->setParent(a);
                return;
                }
            //otherwise run the method again using the right child of the current node
            else{
                place(a.getRChild(), part);
            }
        }
        
        //if the part is smaller than the part in current node
        else if(part<a.getItem()){
            //if the left child of the current node is empty add the part as the left child
            if(a.getLChild()==NULL){
                BTNode<Type>* newNode = new BTNode;
                a.setLChild(newNode);
                newNode->setParent(a);
                return;
            }
            //otherwise run the method again using the left child of the current node
            else{
                place(a.getLChild(), part);
            }
        }
    };

    /***
     * 
     * @param part
     */
    void remove(Type part){
            
    };

    int calculateParts(){};

    int calculateInventory(){};

    int calculateLessThan(int less){};

private:

    BTNode<Type>* root;

};

template <typename Type>
std::ostream& operator << (std::ostream& out, BSTree<Type> &tree){
    return out;
};



#endif //SENG1120_A3_BSTREE_H
