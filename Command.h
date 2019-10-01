#pragma once
#include "ExecuteUnit.h"
ref class Command
{
	protected: ExecuteUnit^ unit;
	protected: Operands^ operands;
	public: virtual void Execute() = 0;
	public: virtual void UnExecute() = 0;
};