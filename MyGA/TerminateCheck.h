//
//  TerminateCheck.h
//  MyGA
//
//  Created by 守山明高 on 2015/08/01.
//  Copyright (c) 2015年 Akitaka Moriyama. All rights reserved.
//

#ifndef __MyGA__TerminateCheck__
#define __MyGA__TerminateCheck__

#include <stdio.h>

#endif /* defined(__MyGA__TerminateCheck__) */











#ifndef __MyGA__Initialize__
#define __MyGA__Initialize__

#include <stdio.h>
#include <vector>
#include <boost/random.hpp>
#include <ctime>

class Initialize{
public:
    Initialize();
    Initialize(const int geneLenght);
    std::vector<std::vector<int>>& getGeneList();
private:
    std::vector<std::vector<int>> geneList;
    
};

#endif //__MyGA__Initialize__