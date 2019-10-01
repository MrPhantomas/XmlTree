#pragma once
#include <string>
ref class Operands
{
	public: Operands(System::Windows::Forms::TreeNode^ node, int iIdLvl0, int iIdLvl1, System::String^ sTextNew, System::String^ sTextOld)
	{
		this->node = dynamic_cast<System::Windows::Forms::TreeNode^>(node->Clone());
		this->iIdLvl0 = iIdLvl0;
		this->iIdLvl1 = iIdLvl1;
		this->sTextNew = sTextNew;
		this->sTextOld = sTextOld;
	}

	public: Operands(int iIdLvl0, int iIdLvl1, System::String^ sTextNew, System::String^ sTextOld)
	{
		this->iIdLvl0 = iIdLvl0;
		this->iIdLvl1 = iIdLvl1;
		this->sTextNew = sTextNew;
		this->sTextOld = sTextOld;
	}

	public: Operands(System::Windows::Forms::TreeNode^ node, int iIdLvl0, int iIdLvl1)
	{
		this->node = dynamic_cast<System::Windows::Forms::TreeNode^>(node->Clone());
		this->iIdLvl0 = iIdLvl0;
		this->iIdLvl1 = iIdLvl1;
	}

	void setNewEmplParam(System::String^ surname, System::String^ name, System::String^ patronimyc, System::String^ functon, System::String^ salary)
	{
		this->sSurName = surname;
		this->sNewName = name;
		this->sPatronimyc = patronimyc;
		this->sFuncton = functon;
		this->sSalary = salary;
	}

	int iIdLvl0;
	int iIdLvl1;
	System::String^ sTextNew;
	System::String^ sTextOld;
	System::Windows::Forms::TreeNode^ node;

	System::String^ sSurName;
	System::String^ sNewName;
	System::String^ sPatronimyc;
	System::String^ sFuncton;
	System::String^ sSalary;
};
