#pragma once
#include "PuntDeInteresBase.h"

class PuntDeInteresRestaurantSolucio: public PuntDeInteresBase {
	public:
		PuntDeInteresRestaurantSolucio(Coordinate coord, string name, string cuisine, string wheelchair);

		string getName() override;
		unsigned int getColor() override;

	private:
		string m_cuisine;
		string m_wheelchair;
};