/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinaryTree.cpp
 * Author: Usuario
 * 
 * Created on 18 de septiembre de 2017, 11:27 AM
 */

#include "BinaryTree.hpp"
#include "TreeNode.hpp"

template <class T>
BinaryTree<T>::BinaryTree() {
    root = NULL;
}

template<class T>
bool BinaryTree<T>::isEmpty() {
    return root==NULL;
}

template <class T>
 void BinaryTree<T>::addNode(T info){
     TreeNode<T>* newNode = new TreeNode<T>(info);
     if(isEmpty()){
        root = newNode;
      }else{
           TreeNode<T>* ant = NULL;
           TreeNode<T>* act = root;
           while(act != NULL){
                 ant = act;
                 act = act->info.getIdTeam().compare(info.getIdTeam())>0 ? act->left:act->right;
           } 
              if(ant->info.getIdTeam().compare(info.getIdTeam())>0){
                  ant->left=newNode;
              }else{
                 ant->right = newNode;
             }        
       }
  }

/*
 * template<class T>
void BinaryTree<T>::addNode(T info){
    if(isEmpty()){
        root= new TreeNode<T>(info);
    }
    else{
        TreeNode<T>* aux = root;
        TreeNode<T>* ant = NULL;
        while(aux!=NULL){
            ant=aux;
            aux=aux->info.getIdTeam().compare(info.getIdTeam())>0 ? aux->left:aux->right;
            }
        if(ant->info.getIdTeam().compare(info.getIdTeam())>0){
            ant->left=new  TreeNode<T>(info);
        }
        else{
            ant->right = new TreeNode<T>(info);
        }
    
    }
}
 */

template <class T>
 T* BinaryTree<T>::findObject(std::string id){
    TreeNode <T>* aux = root;
     while(aux!=NULL){
          if(aux->info.getIdTeam().compare(id)==0){
             return &aux->info;
          }
      aux = aux->info.getIdTeam().compare(id)>0 ? aux->left:aux->right;
      }
      return NULL;
  } 

template <class T>
BinaryTree<T>::~BinaryTree(){}

