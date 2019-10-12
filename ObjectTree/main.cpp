/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Usuario
 *
 * Created on 18 de septiembre de 2017, 10:47 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "BinaryTree.hpp"
#include "BinaryTree.cpp"
#include "FootballTeam.hpp"

using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {
    BinaryTree<FootballTeam> footballTeam;
    footballTeam.addNode(FootballTeam("ax","MU",3,4));
    
    if(footballTeam.isEmpty()){
        cout<<"El arbol está vacio"<<endl;
    }else{ cout<<"El arbol tiene nodos"<<endl;}
    
    if(footballTeam.findObject("ax")!=NULL){
        cout<<footballTeam.findObject("ax")->toString()<<endl;
    }
    
    
    
    return 0;
}

