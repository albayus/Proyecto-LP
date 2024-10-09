#include "PuntDeInteresRestaurantSolucio.h"

PuntDeInteresRestaurantSolucio::PuntDeInteresRestaurantSolucio(Coordinate coord, string name, string cuisine, string wheelchair)
{
	PuntDeInteresBase(coord, name);
	m_cuisine = cuisine;
	m_wheelchair = wheelchair;

}

string PuntDeInteresRestaurantSolucio::getName()
{

}

unsigned int PuntDeInteresRestaurantSolucio::getColor()
{
	if (m_cuisine == "pizza" && m_wheelchair == "yes")
		return 0x03FCBA;
	if (m_cuisine == "chinese")
		return 0xA6D9F7;
	if (m_wheelchair == "yes")
		return 0x251351;
	return PuntDeInteresBase::getColor();
}