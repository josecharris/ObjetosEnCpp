/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinaryTree.hpp
 * Author: Usuario
 *
 * Created on 18 de septiembre de 2017, 11:27 AM
 */

#ifndef BINARYTREE_HPP
#define BINARYTREE_HPP
#include "TreeNode.hpp"
#include <iostream>
#include <string>
#include <vector>

template <class T>
class BinaryTree {
public:
    BinaryTree();
    bool isEmpty();
    void addNode(T);
    TreeNode<T>* findNode(std::string);
    T* findObject(std::string);
    int calculateHeightTree();
    int calculateWeightTree();
    int calculateHeightNode(TreeNode<T>*);
    int calculateWeightNode(TreeNode<T>*);
    virtual ~BinaryTree();
private:
    TreeNode<T>* root;
};

#endif /* BINARYTREE_HPP */

/*
 * template <class T>
 * void BinaryTree<T>::addNode(T node){
 *    TreeNode <T>* newNode = new TreeNode<T>(node);
 *    if(isEmpty()){
 *       root = newNode;
 *     }else{
 *          TreeNode<T>* ant = NULL;
 *          TreeNode<T>* act = NULL;
 *          while(act != NULL){
 *                ant = act;
 *                act = act->info.getId().compare(node.getId())>0 ? left:right;
 *          } 
 *             if(ant->info.getId().compare(node.getId())>0){
 *                 ant->left=newNode;
 *             }else{
 *                ant->right = newNode;
 *            }        
 *      }
 * }
 * 
 * 
 * template <class T>
 * T* BinaryTree<T>::findObject(string id){
 *    TreeNode <T>* aux = root;
 *    while(aux!=NULL){
 *         if(aux->info.getId().compare(id)==0){
 *            return &aux->info;
 *         }
 *     aux = aux->info.getId().compare(id)>0 ? aux->left:aux->right;
 *     }
 *     return NULL;
 * } 
 
 */

