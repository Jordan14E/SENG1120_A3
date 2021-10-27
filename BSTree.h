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

    void add(Type part){

        if(root==NULL){
            root = part;
        }
        else{
            place(root, part);
        }

    };

    void place(BTNode<Type> a, Type part){
        
        if(part == a){
            return;
        }

        else if(part>a){
            BTNode<Type>* newNode = new BTNode;
            a.
        }

    };


    void remove(Type part){};

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
