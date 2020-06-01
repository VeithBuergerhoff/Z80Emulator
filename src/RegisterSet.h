#ifndef Z80EMULATOR_REGISTERSET_H
#define Z80EMULATOR_REGISTERSET_H

#include "BaseTypes.h"

class RegisterSet
{
private:
	// main registers
	WordRegister m_AF;
	WordRegister m_BC;
	WordRegister m_DE;
	WordRegister m_HL;

	// alternate registers
	WordRegister m_Alternate_AF;
	WordRegister m_Alternate_BC;
	WordRegister m_Alternate_DE;
	WordRegister m_Alternate_HL;

	// index registers
	WordRegister m_IX;
	WordRegister m_IY;
	WordRegister m_SP;

	// other registers
	byte m_I = 0;	 // interrupt vector
	byte m_R = 0;	 // refresh counter
public:
	// main registers
	word& getAF();
	byte& getA();
	byte& getF();
	word getAF() const;
	byte getA() const;
	byte getF() const;

	word& getBC();
	byte& getB();
	byte& getC();
	word getBC() const;
	byte getB() const;
	byte getC() const;

	word& getDE();
	byte& getD();
	byte& getE();
	word getDE() const;
	byte getD() const;
	byte getE() const;

	word& getHL();
	byte& getH();
	byte& getL();
	word getHL() const;
	byte getH() const;
	byte getL() const;

	// index registers
	word& getIX();
	word getIX() const;
	word& getIY();
	word getIY() const;
	word& getSP();
	word getSP() const;

	// other registers
	byte& getI();
	byte getI() const;
	byte& getR();
	byte getR() const;

	// alternate control
	void swapWithAlternateAF();
	void swapWithAlternateBCDEHL();
};

#endif