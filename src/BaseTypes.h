#ifndef Z80EMULATOR_BASETYPES_H
#define Z80EMULATOR_BASETYPES_H

#include <cstdint>

using byte	= std::uint8_t;
using word	= std::uint16_t;
using dword = std::uint32_t;
using qword = std::uint64_t;

union WordRegister {
	struct
	{
		byte leftByte;
		byte rightByte;
	};

	word word;
};

#endif