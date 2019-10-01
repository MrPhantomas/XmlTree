// Receiver - Получатель
#pragma once
#include "Operands.h"
ref class ExecuteUnit
{
	public: ExecuteUnit(System::Windows::Forms::TreeView^ view)
	{
		this->treeview = view;
	}
	private: System::Windows::Forms::TreeView^ treeview;

	public: void Run(int operationcode, Operands^ operand)
	{
		switch (operationcode)
		{
			case 0:
			{
				//Вставка ноды департамента
				if (operand->node->Text == "")
					treeview->Nodes->Add(operand->sTextNew);
				else
					InsertNode(operand, 0);
				break;
			}
			case 1:
			{
				//Удаление ноды департамента
				treeview->Nodes[operand->iIdLvl0]->Remove();
				break;
			}
			case 2:
			{
				//Редактирование ноды департамента
				treeview->Nodes[operand->iIdLvl0]->Text = operand->sTextNew;
				break;
			}
			case 3:
			{
				//Откат редактирования ноды департамента
				treeview->Nodes[operand->iIdLvl0]->Text = operand->sTextOld;
				break;
			}
			case 4:
			{
				//Удаление ноды работника
				treeview->Nodes[operand->iIdLvl0]->Nodes[operand->iIdLvl1]->Remove();
				break;
			}
			case 5:
			{
				//Откат удаления ноды работника
					InsertNode(operand, 1);
				break;
			}
			case 6:
			{
				//Добавление ноды работника
				treeview->Nodes[operand->iIdLvl0]->Nodes->Add(dynamic_cast<System::Windows::Forms::TreeNode^>(operand->node->Clone()));
				break;
			}
			case 7:
			{
				//Редактирование ноды работника
				treeview->Nodes[operand->iIdLvl0]->Nodes[operand->iIdLvl1]->Nodes[0]->Text = operand->sNewName;
				treeview->Nodes[operand->iIdLvl0]->Nodes[operand->iIdLvl1]->Nodes[1]->Text = operand->sSurName;
				treeview->Nodes[operand->iIdLvl0]->Nodes[operand->iIdLvl1]->Nodes[2]->Text = operand->sPatronimyc;
				treeview->Nodes[operand->iIdLvl0]->Nodes[operand->iIdLvl1]->Nodes[3]->Text = operand->sFuncton;
				treeview->Nodes[operand->iIdLvl0]->Nodes[operand->iIdLvl1]->Nodes[4]->Text = operand->sSalary;
				treeview->Nodes[operand->iIdLvl0]->Nodes[operand->iIdLvl1]->Text = operand->sSurName + "." + (operand->sNewName[0]) + "." + (operand->sPatronimyc[0]);
				break;
			}
			case 8:
			{
				//Откат редактирования ноды работника
				treeview->Nodes[operand->iIdLvl0]->Nodes[operand->iIdLvl1]->Nodes[0]->Text = operand->node->Nodes[0]->Text;
				treeview->Nodes[operand->iIdLvl0]->Nodes[operand->iIdLvl1]->Nodes[1]->Text = operand->node->Nodes[1]->Text;
				treeview->Nodes[operand->iIdLvl0]->Nodes[operand->iIdLvl1]->Nodes[2]->Text = operand->node->Nodes[2]->Text;
				treeview->Nodes[operand->iIdLvl0]->Nodes[operand->iIdLvl1]->Nodes[3]->Text = operand->node->Nodes[3]->Text;
				treeview->Nodes[operand->iIdLvl0]->Nodes[operand->iIdLvl1]->Nodes[4]->Text = operand->node->Nodes[4]->Text;
				treeview->Nodes[operand->iIdLvl0]->Nodes[operand->iIdLvl1]->Text = 
					(operand->node->Nodes[0]->Text + "." + (operand->node->Nodes[1]->Text[0]) + "." + (operand->node->Nodes[2]->Text[0]));
				break;
			}

		}

	}

	private: void InsertNode(Operands^ operand, int level)
	{
		treeview->Sorted = false;
		System::Collections::Generic::List<System::Windows::Forms::TreeNode^>^ arr = 
			gcnew System::Collections::Generic::List<System::Windows::Forms::TreeNode^>();
		arr->Add(dynamic_cast<System::Windows::Forms::TreeNode^>(operand->node->Clone()));
		if (!level)
		{
			for (int i = operand->iIdLvl0; i != treeview->Nodes->Count;)
			{
				arr->Add(treeview->Nodes[i]);
				treeview->Nodes[i]->Remove();
			}
			treeview->Nodes->AddRange(arr->ToArray());
		}
		else
		{
			for (int i = operand->iIdLvl1; i != treeview->Nodes[operand->iIdLvl0]->Nodes->Count;)
			{
				arr->Add(treeview->Nodes[operand->iIdLvl0]->Nodes[i]);
				treeview->Nodes[operand->iIdLvl0]->Nodes[i]->Remove();
			}
			treeview->Nodes[operand->iIdLvl0]->Nodes->AddRange(arr->ToArray());
		}

	}

};
