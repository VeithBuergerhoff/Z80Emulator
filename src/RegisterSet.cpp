#include "RegisterSet.h"
#include <utility>

word& RegisterSet::getAF()
{
	return m_AF.word;
}

byte& RegisterSet::getA()
{
	return m_AF.leftByte;
}

byte& RegisterSet::getF()
{
	return m_AF.rightByte;
}

word RegisterSet::getAF() const
{
	return m_AF.word;
}

byte RegisterSet::getA() const
{
	return m_AF.leftByte;
}

byte RegisterSet::getF() const
{
	return m_AF.rightByte;
}

word& RegisterSet::getBC()
{
	return m_BC.word;
}

byte& RegisterSet::getB()
{
	return m_BC.leftByte;
}

byte& RegisterSet::getC()
{
	return m_BC.rightByte;
}

word RegisterSet::getBC() const
{
	return m_BC.word;
}

byte RegisterSet::getB() const
{
	return m_BC.leftByte;
}

byte RegisterSet::getC() const
{
	return m_BC.rightByte;
}

word& RegisterSet::getDE()
{
	return m_DE.word;
}

byte& RegisterSet::getD()
{
	return m_DE.leftByte;
}

byte& RegisterSet::getE()
{
	return m_DE.rightByte;
}

word RegisterSet::getDE() const
{
	return m_DE.word;
}

byte RegisterSet::getD() const
{
	return m_DE.leftByte;
}

byte RegisterSet::getE() const
{
	return m_DE.rightByte;
}

word& RegisterSet::getHL()
{
	return m_HL.word;
}

byte& RegisterSet::getH()
{
	return m_HL.leftByte;
}

byte& RegisterSet::getL()
{
	return m_HL.rightByte;
}

word RegisterSet::getHL() const
{
	return m_HL.word;
}

byte RegisterSet::getH() const
{
	return m_HL.leftByte;
}

byte RegisterSet::getL() const
{
	return m_HL.rightByte;
}

word& RegisterSet::getIX()
{
	return m_IX.word;
}

word RegisterSet::getIX() const
{
	return m_IX.word;
}

word& RegisterSet::getIY()
{
	return m_IY.word;
}

word RegisterSet::getIY() const
{
	return m_IY.word;
}

word& RegisterSet::getSP()
{
	return m_SP.word;
}

word RegisterSet::getSP() const
{
	return m_SP.word;
}

byte& RegisterSet::getI()
{
	return m_I;
}

byte RegisterSet::getI() const
{
	return m_I;
}

byte& RegisterSet::getR()
{
	return m_R;
}

byte RegisterSet::getR() const
{
	return m_R;
}

void RegisterSet::swapWithAlternateAF()
{
	std::swap(m_AF, m_Alternate_AF);
}

void RegisterSet::swapWithAlternateBCDEHL()
{
	std::swap(m_BC, m_Alternate_BC);
	std::swap(m_DE, m_Alternate_DE);
	std::swap(m_HL, m_Alternate_HL);
}
