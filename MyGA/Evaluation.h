//
//  Evaluation.h
//  MyGA
//
//  Created by 守山明高 on 2015/08/02.
//  Copyright (c) 2015年 Akitaka Moriyama. All rights reserved.
//

#ifndef __MyGA__Evaluation__
#define __MyGA__Evaluation__

#include <vector>
//1の多さで評価
class Evaluation{
public:
    Evaluation();
	Evaluation(const int row, const int column);
    void evaluate(const int (&labyrinth)[5][5], std::vector<std::vector<int>>& geneList, std::vector<int>& evaluateList, int column, int row);
	void printLabyrinthOfIndex(int index, const int(&labyrinth)[5][5], std::vector<std::vector<int>>& geneList);
private:
	int row;
	int culomn;
};
#endif /* defined(__MyGA__Evaluation__) */
