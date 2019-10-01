#pragma once
#include "..\\Command.h"
ref class AddEmployment : Command
{
	public: AddEmployment(ExecuteUnit^ unit, Operands^ operands)
	{
		this->unit = unit;
		this->operands = operands;
	}

	public: void Execute() override
	{
		unit->Run(6, operands);
	}

	public: void UnExecute() override
	{
		unit->Run(4, operands);
	}
};