// "Invoker" - инициатор
//  УУ - Устройство управления 
#pragma once
#include "Command.h"
ref class ControlUnit
{
	private: System::Collections::Generic::List<Command^>^ commands = gcnew System::Collections::Generic::List<Command^>();
	private: int current = 0;
	public: void StoreCommand(Command^ command)
	{
		for (current; current != commands->Count;)
			commands->Remove(commands[commands->Count - 1]);
		
		commands->Add(command);
	}
	public: void ExecuteCommand(Command^ command)
	{
		commands[current++]->Execute();
	}
	public: void Undo(int levels)
	{
		for (int i = 0; i < levels; i++)
			if(current > 0)
				commands[--current]->UnExecute();
	}
	public: void Redo(int levels)
	{
		for (int i = 0; i < levels; i++)
			if (current < commands->Count)
				commands[current++]->Execute();
	}
};
