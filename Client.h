// Client
#pragma once
#include "ControlUnit.h"
#include "ExecuteUnit.h"
#include "Commands/AddDepartment.h"
#include "Commands/DelDepartment.h"
#include "Commands/RedactDepartment.h"
#include "Commands/DelEmployment.h"
#include "Commands/AddEmployment.h"
#include "Commands/RedactEmployment.h"

ref class Client
{
	ControlUnit^ controlunit;
	ExecuteUnit^ executeunit;
	
	public: Client(System::Windows::Forms::TreeView^ view)
	{
		controlunit = gcnew ControlUnit;
		executeunit = gcnew ExecuteUnit(view);
	}

	private: void Run(Command^ command)
	{
		controlunit->StoreCommand(command);
		controlunit->ExecuteCommand(command);
	}

	public: void AddDepart(Operands^ operands)
	{
		Run(gcnew AddDepartment(executeunit, operands));
	}

	public: void DelDepart(Operands^ operands)
	{
		Run(gcnew DelDepartment(executeunit, operands));
	}

	public: void RedactDepart(Operands^ operands)
	{
		Run(gcnew RedactDepartment(executeunit, operands));
	}

	public: void DelEmploym(Operands^ operands)
	{
		Run(gcnew DelEmployment(executeunit, operands));
	}
			
	public: void AddEmploym(Operands^ operands)
	{
		Run(gcnew AddEmployment(executeunit, operands));
	}

	public: void RedactEmploym(Operands^ operands)
	{
		Run(gcnew RedactEmployment(executeunit, operands));
	}
			
	public: void Undo(int levels)
	{
		controlunit->Undo(levels);
	}

	public: void Redo(int levels)
	{
		controlunit->Redo(levels);
	}

};
