#pragma once
#include "..\\Command.h"
ref class RedactEmployment : Command
{
	public: RedactEmployment(ExecuteUnit^ unit, Operands^ operands)
	{
		this->unit = unit;
		this->operands = operands;
	}

	public: void Execute() override
	{
		unit->Run(7, operands);
	}

	public: void UnExecute() override
	{
		unit->Run(8, operands);
	}
};