//
//  Mutation.h
//  MyGA
//
//  Created by 守山明高 on 2015/08/01.
//  Copyright (c) 2015年 Akitaka Moriyama. All rights reserved.
//

#ifndef __MyGA__Mutation__
#define __MyGA__Mutation__
#pragma warning(disable : 4996) 

#include <stdio.h>
#include <vector>
#include <boost/random.hpp>
#include <ctime>
class Mutation {
public:
	Mutation();
	void mutate(std::vector<std::vector<int>>& selectedGenes);

};
#endif /* defined(__MyGA__Mutation__) */
