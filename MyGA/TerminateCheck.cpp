//
//  TerminateCheck.cpp
//  MyGA
//
//  Created by 守山明高 on 2015/08/01.
//  Copyright (c) 2015年 Akitaka Moriyama. All rights reserved.
//

#include "TerminateCheck.h"






//
//  Initialize.cpp
//  MyGA
//
//  Created by 守山明高 on 2015/08/01.
//  Copyright (c) 2015年 Akitaka Moriyama. All rights reserved.
//

#include "Initialize.h"

Initialize::Initialize(const int geneLength){
    const int numberOfIndividuals = 5;
    boost::random::mt19937 val(static_cast<unsigned int>(time(0)) );
    boost::random::uniform_int_distribution<> valRange(1,4);
    boost::random::variate_generator<boost::random::mt19937, boost::random::uniform_int_distribution<> > valRandom(val, valRange);
    boost::random::uniform_int_distribution<> lenRange(2,5);
    boost::random::variate_generator<boost::random::mt19937, boost::random::uniform_int_distribution<> > lenRandom(val, lenRange);
    int previousStep;
    for(int i = 0; i < numberOfIndividuals; ++i){
        std::vector<int> gene;
        //      int len = lenRandom();
        previousStep = 4;
        for(int j = 0; j < geneLength; j++){
            /*
             1
             4       2
             3
             
             上: 1, 右: 2, 下: 3, 左: 4
             */
            //可変長の長さを持ったの方向の生成
            //来た道を戻るならもう一度
            int v = valRandom();
            while(v == previousStep) v = valRandom();
            gene.push_back(valRandom());
        }
        geneList.push_back(gene);
    }
    
}

std::vector<std::vector<int>>& Initialize::getGeneList(){
    return geneList;
}


