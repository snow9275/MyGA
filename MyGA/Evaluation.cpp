//
//  Evaluation.cpp
//  MyGA
//
//  Created by 守山明高 on 2015/08/02.
//  Copyright (c) 2015年 Akitaka Moriyama. All rights reserved.
//

#include "Evaluation.h"
Evaluation::Evaluation(){
}
Evaluation::Evaluation(const int row, const int column) {
	this->row = row; 
	this->culomn = column;
}
//  Copyright (c) 2015年 Akitaka Moriyama. All rights reserved.
//

#include "Evaluation.h"
//1の多さで評価
void Evaluation::evaluate(const int (&labyrinth)[5][5], std::vector<std::vector<int>>& geneList, std::vector<int>& evaluateList, int column, int row){
    int result;
    int x;
    int y;
    int bannedStep;
	evaluateList.clear();

    for(int i = 0; i < geneList.size(); ++i){
        
        result = 0;
        x = 0;
        y = 0;
        bannedStep = 0;
        for(int j = 0; j < geneList[i].size(); ++j){
            switch (geneList[i][j]) {
                case 1:
                    if(0 < y && labyrinth[y-1][x] && bannedStep != 1)
                    {--y; ++result; bannedStep = 3;}
                    break;
                case 2:
                    if(x < column-1 && labyrinth[y][x+1] && bannedStep != 2)
                    {++x; ++result; bannedStep = 4;}
                    break;
                case 3:
                    if(y < row-1 && labyrinth[y+1][x] && bannedStep != 3)
                    {++y; ++result; bannedStep = 1;}
                    break;
                case 4:
                    if(0 < x && labyrinth[y][x-1] && bannedStep != 4)
                    {--x; ++result; bannedStep = 2;}
                    break;
                default:
                    break;
            }
            
        }
        evaluateList.push_back(result);
    }
    

}

void Evaluation::printLabyrinthOfIndex(int index, const int(&labyrinth)[5][5], std::vector<std::vector<int>>& geneList) {

	for (int i = 0; i < culomn; ++i) {
		for (int j = 0; j < row; ++j) {



		}

	}

}