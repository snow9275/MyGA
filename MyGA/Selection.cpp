//
//  Selection.cpp
//  MyGA
//
//  Created by 守山明高 on 2015/08/02.
//  Copyright (c) 2015年 Akitaka Moriyama. All rights reserved.
//

#include "Selection.h"
void Selection::select(std::vector<int>& evaluateList, std::vector<int>& selectedGeneIndex){
    
    int evaluateSum = 0;
    std::vector<double> stage;
    for(int k: evaluateList){
        evaluateSum+=k;
    }
    double tmpSum = 0;
    for(int k: evaluateList){
        tmpSum+=k;
        stage.push_back(tmpSum/(double)evaluateSum);
    }
    
    boost::random::mt19937 val(static_cast<unsigned int>(time(0)) );
    boost::random::uniform_real_distribution<> valRange(0,1);
    boost::random::variate_generator<boost::random::mt19937, boost::random::uniform_real_distribution<> > valRandom(val, valRange);
   
    for(int i = 0; i < evaluateList.size(); ++i){
  
        double ran = valRandom();
        
        for(int j = 0; j < stage.size(); ++j){
            if(stage[j] > ran)
            {
                selectedGeneIndex.push_back(j);
                break;
            }
        }
        
    }
    
    
    
}