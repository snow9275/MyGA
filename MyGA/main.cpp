//
//  main.cpp
//  MyGA
//
//  Created by 守山明高 on 2015/08/01.
//  Copyright (c) 2015年 Akitaka Moriyama. All rights reserved.
//
#pragma warning(disable : 4996) 
#include <string>
#include <iostream>
#include <fstream>
#include "Initialize.h"
#include "Evaluation.h"
#include "Selection.h"
#include "Crossover.h"
#include "Mutation.h"

int main(int argc, const char * argv[]) {

	const int generation = 400;
	const int column = 5;
	const int row = 5;
	const int geneLength = 30;
	const int labyrinth[5][5] = {
		{1,0,1,1,1},
		{1,0,1,0,1},
		{1,0,1,0,1},
		{1,0,1,0,1},
		{1,1,1,0,1}
	};
	//initialize
	std::vector<std::vector<int>> genesList = Initialize(geneLength).getGeneList();
	std::cout << "Initialized geneList..............." << std::endl;
	for (int i = 0; i < genesList.size(); ++i) {
		for (int j = 0; j < genesList[i].size(); ++j) {
			std::cout << genesList[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::vector<int> evaluateList;
	std::vector<std::vector<int>> selectedGenes;

	//evaluation
	Evaluation(row, column).evaluate(labyrinth, genesList, evaluateList, column, row);
	std::cout << "evaluation..............." << std::endl;
	for (int k : evaluateList)
		std::cout << k << " ";
	std::cout << std::endl;
	
	
	int n = 0;
	while (n < generation) {

		//selection
		selectedGenes.clear();
		Selection().select(evaluateList, genesList, selectedGenes);
/*		std::cout << "selection..............." << std::endl;
		for (auto k : selectedGenes) {
			for (auto s : k) {
				std::cout << s << " ";
			}std::cout << std::endl;
		}*/

		//crossover
		Crossover().cross(selectedGenes, geneLength);
/*		std::cout << "crossover..............." << std::endl;
		for (int i = 0; i < selectedGenes.size(); ++i) {
			for (int j = 0; j < selectedGenes[i].size(); ++j) {
				std::cout << selectedGenes[i][j] << " ";
			}
			std::cout << std::endl;
		}*/

		//mutation
		Mutation().mutate(selectedGenes);

		genesList = selectedGenes;

		//evaluation
		Evaluation(row, column).evaluate(labyrinth, genesList, evaluateList, column, row);
		if (!(n % 50)) {
			std::cout << "evaluation..............." << std::endl;
			for (int k : evaluateList)
				std::cout << k << " ";
			std::cout << std::endl;
		}/*
		std::cout << "evaluation geneList..............." << std::endl;
		for (int i = 0; i < genesList.size(); ++i) {
			for (int j = 0; j < genesList[i].size(); ++j) {
				std::cout << genesList[i][j] << " ";
			}
			std::cout << std::endl;
		}*/

		

		//terminateCheck
		++n;
	//	std::cout << std::endl;
	}
	return 0;
}
