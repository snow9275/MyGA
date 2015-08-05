//
//  Mutation.cpp
//  MyGA
//
//  Created by 守山明高 on 2015/08/01.
//  Copyright (c) 2015年 Akitaka Moriyama. All rights reserved.
//

#include "Mutation.h"

Mutation::Mutation()
{
}

void Mutation::mutate(std::vector<std::vector<int>>& selectedGenes)
{
	bool mutated = false;
	const double mutateProbability = 0.3;
	boost::random::mt19937 val(static_cast<unsigned int>(time(0)));
	boost::random::uniform_real_distribution<> valRange(0, 1);
	boost::random::variate_generator<boost::random::mt19937, boost::random::uniform_real_distribution<> > valRandom(val, valRange);
	boost::random::uniform_real_distribution<> range(0, 9);
	boost::random::variate_generator<boost::random::mt19937, boost::random::uniform_real_distribution<> > randomIndex(val, range);
	boost::random::uniform_real_distribution<> vecRange(1, 4);
	boost::random::variate_generator<boost::random::mt19937, boost::random::uniform_real_distribution<> > randomVector(val, vecRange);
	double x;

	for (int i = 0; i < selectedGenes.size(); ++i)
	{
		x = valRandom();
		if (x < mutateProbability)
		{
			int ind = randomIndex();
			int vec = randomVector();
			selectedGenes[i][ind] = vec;
/*			mutated = true;
			std::cout << ind << " " << vec << "-----------------" << std::endl;
			for (int k = 0; k < selectedGenes.size(); ++k) {
				for (int j = 0; j < selectedGenes[k].size(); ++j) {
					std::cout << selectedGenes[k][j] << " ";
				}std::cout << std::endl;
			}*/


		}
	}

//	if (mutated)
//		std::cout << "|||||||||| mutated!! ||||||||||" << std::endl;
}
