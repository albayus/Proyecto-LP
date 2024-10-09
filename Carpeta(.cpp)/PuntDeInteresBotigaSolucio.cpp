#include "PuntDeInteresBotigaSolucio.h"

PuntDeInteresBotigaSolucio::PuntDeInteresBotigaSolucio(Coordinate coord, string name, string shop, string openingHours, string wheelchair)
{
	PuntDeInteresBase(coord, name);
	m_shop = shop;
	m_openingHours = openingHours;
	m_wheelchair = wheelchair;

}

string PuntDeInteresBotigaSolucio::getName()
{

}

unsigned int PuntDeInteresBotigaSolucio::getColor()
{
	if (m_shop == "supermarket")
		return 0xA5BE00;
	if (m_shop == "tobacco")
		return 0xFFAD69;
	if (m_shop == "bakery")
		if (m_openingHours == "06:00-22:00" && m_wheelchair == "yes") 
			return 0x4CB944;
		else
			return 0xE85D75;
	return 0xEFD6AC;
}