#pragma once
#include "..\\Command.h"
ref class DelDepartment : Command
{
	public: DelDepartment(ExecuteUnit^ unit, Operands^ operands)
	{
		this->unit = unit;
		this->operands = operands;
	}

	public: void Execute()override
	{
		unit->Run(1, operands);
	}

	public: void UnExecute() override
	{
		unit->Run(0, operands);
	}
};