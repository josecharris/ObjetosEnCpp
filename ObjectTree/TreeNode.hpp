/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TreeNode.hpp
 * Author: Usuario
 *
 * Created on 18 de septiembre de 2017, 11:00 AM
 */

#ifndef TREENODE_HPP
#define TREENODE_HPP
#include <cstdlib>
template <class T> class BinaryTree;
template <class T>

class TreeNode {
friend class BinaryTree<T>;
    public:
    TreeNode(T);
    virtual ~TreeNode();
private:
    T info;
    TreeNode* left;
    TreeNode* right;
};

template <class T>
TreeNode<T>::TreeNode(T info){
    this->info=info;
    left=NULL;
    right=NULL;
}

template <class T>
TreeNode<T>::~TreeNode(){}

#endif /* TREENODE_HPP */

