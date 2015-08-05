//
//  Crossover.cpp
//  MyGA
//
//  Created by 守山明高 on 2015/08/01.
//  Copyright (c) 2015年 Akitaka Moriyama. All rights reserved.
//

#include "Crossover.h"
Crossover::Crossover(){
    
}

void Crossover::cross(std::vector<std::vector<int>>& selectedGenes,const int geneLength){
    
    boost::random::mt19937 val(static_cast<unsigned int>(time(0)) );
    boost::random::uniform_real_distribution<> valRange(0,1);
    boost::random::variate_generator<boost::random::mt19937, boost::random::uniform_real_distribution<> > valRandom(val, valRange);
    double ran;
    int tmp;
    for(int i = 1; i < selectedGenes.size(); i+=2)
    {
        for(int j = 1; j < geneLength; ++j)
        {
            ran = valRandom();
            if (ran > 0.5) {
                tmp = selectedGenes[i][j];
                selectedGenes[i][j] = selectedGenes[i-1][j];
                selectedGenes[i-1][j] = tmp;
            }
            
            
        }
        
        
    }
  
    
}