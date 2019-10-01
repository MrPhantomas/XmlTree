#pragma once
#include "..\\Command.h"
ref class DelEmployment : Command
{
	public: DelEmployment(ExecuteUnit^ unit, Operands^ operands)
	{
		this->unit = unit;
		this->operands = operands;
	}

	public: void Execute() override
	{
		unit->Run(4, operands);
	}

	public: void UnExecute() override
	{
		unit->Run(5, operands);
	}
};