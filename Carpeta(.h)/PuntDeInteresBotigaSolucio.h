#pragma once
#include "PuntDeInteresBase.h"

class PuntDeInteresBotigaSolucio : public PuntDeInteresBase {
public:

	PuntDeInteresBotigaSolucio(Coordinate coord, string name, string shop, string openingHours, string wheelchair);

	string getName() override;
	unsigned int getColor() override;

private:
	string m_shop; 
	string m_openingHours;
	string m_wheelchair;
};