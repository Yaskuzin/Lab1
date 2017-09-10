//
// Created by Dima on 10.09.2017.
//
#include <iostream>
int i = 0;
void getEnergy(double e13, double e14){
    i++;
    double energy = e14-e13;
    std::cout << "Energy = "<<energy<< std::endl;
}
int getNumber(){
    return i;
}