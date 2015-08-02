//
//  main.cpp
//  MyGA
//
//  Created by 守山明高 on 2015/08/01.
//  Copyright (c) 2015年 Akitaka Moriyama. All rights reserved.
//

#include <string>
#include <iostream>
#include <fstream>
#include "Initialize.h"
#include "Evaluation.h"
#include "Selection.h"
#include "Crossover.h"

int main(int argc, const char * argv[]) {

    const int column = 5;
    const int row = 5;
    const int geneLength = 10;
    const int labyrinth[5][5] = {
        {1,0,1,1,1},
        {1,0,1,0,1},
        {1,0,1,0,1},
        {1,0,1,0,1},
        {1,1,1,0,1}
    };
  
    std::vector<std::vector<int>> geneList = Initialize().getGeneList();
    std::vector<int> evaluateList;
    std::vector<int> selectedGeneIndex;
    
    Evaluation().evaluate(labyrinth, geneList, evaluateList, column, row);
    Selection().select(evaluateList, selectedGeneIndex);
    
    
    
    
    for(int i = 0; i < geneList.size(); ++i){
        for(int j = 0; j < geneList[i].size(); ++j){
            std::cout << geneList[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    std::cout << "..............." << std::endl;
    for(int k: evaluateList)
        std::cout << k << " ";
    std::cout << std::endl;

    std::cout << "..............." << std::endl;
    for(auto k: selectedGeneIndex)
        std::cout << k << " ";
    std::cout << std::endl;
    return 0;
}
