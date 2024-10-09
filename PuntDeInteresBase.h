#pragma once

#include <string>
#include "Common.h"
#include <iostream>

using namespace std;

class PuntDeInteresBase {

	private:
		Coordinate m_coord;
		string m_name;

	public:		
		PuntDeInteresBase();
		PuntDeInteresBase(Coordinate coord, string name);

		virtual string getName();
		Coordinate getCoord();
		virtual unsigned int getColor();

};