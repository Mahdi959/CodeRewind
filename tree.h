#ifndef TREE_H
#define TREE_H
#include <iostream>

template <class BaseData>
struct treeNode{
    treeNode <BaseData>* rightNode;
    treeNode <BaseData>* leftNode;
    BaseData TreeData;

    treeNode(BaseData val): TreeData(val),rightNode(nullptr),leftNode(nullptr){};
};

template <class BaseData>
class Tree{
    public: 
        void insert(BaseData data);
        void inOrder();
        void searchAndDestroy(BaseData target);

    private:
        treeNode<BaseData>* root = nullptr;

        void inOrderHelper(treeNode <BaseData>* &into);
        void insertHelper(BaseData data,treeNode<BaseData>* &into);
        void remove(treeNode<BaseData>* &target);
            
   
};
 #include "tree.cpp" 
 #endif