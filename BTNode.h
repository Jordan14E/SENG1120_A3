//
// Created by jeade on 27/10/2021.
//

#ifndef SENG1120_A3_BTNODE_H
#define SENG1120_A3_BTNODE_H

#include "cstdlib"
#include "BSTree.h"

template <typename Type>
class BTNode {
public:

    BTNode(){
        parent = NULL;
        lChild = NULL;
        rChild = NULL;
        item = NULL;
    };

    BTNode(BTNode* Parent, BTNode Item){
        parent = Parent;
        item = Item;
        lChild = NULL;
        rChild = NULL;
    };

    ~BTNode(){
        //No action needed in this destructor as BSTree destructor will destroy all Nodes
    };

    Type getItem(){
        return item;
    };

    BTNode* getParent(){
        return parent;
    };

    BTNode* getLChild(){
        return lChild;
    };

    BTNode* getRChild(){
        return rChild;
    };


private:
    BTNode* parent;
    BTNode* lChild;
    BTNode* rChild;
    Type item;

};


#endif //SENG1120_A3_BTNODE_H