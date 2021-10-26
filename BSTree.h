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

    };

    void add(Type part){

        if(root==NULL){
            root = part;
        }
        else if(part > root.getItem()){
            BTNode<Type>* newNode = new BTNode<Type>;
        }

    };

    void remove(Type part){};

    int calculateParts(){};

    int calculateInventory(){};

    int calculateLessThan(int less){};

private:

    BTNode* root;

};

template <typename Type>
std::ostream& operator << (std::ostream& out, BSTree<Type> &tree){
    return out;
};



#endif //SENG1120_A3_BSTREE_H
