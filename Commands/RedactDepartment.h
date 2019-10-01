#pragma once
#include "..\\Command.h"
ref class RedactDepartment : Command
{
	public: RedactDepartment(ExecuteUnit^ unit, Operands^ operands)
	{
		this->unit = unit;
		this->operands = operands;
	}

	public: void Execute() override
	{
		unit->Run(2, operands);
	}

	public: void UnExecute() override
	{
		unit->Run(3, operands);
	}
};