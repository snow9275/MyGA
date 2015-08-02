//
//  Selection.h
//  MyGA
//
//  Created by 守山明高 on 2015/08/02.
//  Copyright (c) 2015年 Akitaka Moriyama. All rights reserved.
//

#ifndef __MyGA__Selection__
#define __MyGA__Selection__

#include <vector>
#include <boost/random.hpp>
#include <ctime>

class Selection{
public:
    void select(std::vector<int>& evaluateList, std::vector<int>& selectedGeneIndex);
    
};


#endif /* defined(__MyGA__Selection__) */
