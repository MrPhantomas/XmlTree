#pragma once
#include <string>
#include "Client.h"
namespace XmlTree {

	using namespace System;
	using namespace System::Text;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Xml;
	using namespace System::IO;


	ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

		}
	public: void setStartParam()
	{
		this->client = gcnew Client(treeView1);
		treeView1->Sorted = false;
	}
	private: System::Windows::Forms::Button^ btnExit;
	public:

	public:
	private: Client^ client;


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::TextBox^ txtSurname;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtPatronimyc;
	private: System::Windows::Forms::TextBox^ txtPosition;
	private: System::Windows::Forms::TextBox^ txtSalary;
	private: System::Windows::Forms::Label^ labSurname;
	private: System::Windows::Forms::Label^ labName;
	private: System::Windows::Forms::Label^ labPatronimyc;
	private: System::Windows::Forms::Label^ labPosition;
	private: System::Windows::Forms::Label^ labSalary;
	private: System::Windows::Forms::Button^ btnWorkRedact;
	private: System::Windows::Forms::Button^ btnWorkDelete;
	private: System::Windows::Forms::TextBox^ txtDepartment;
	private: System::Windows::Forms::Label^ labDepartment;
	private: System::Windows::Forms::Button^ btnDelDepartment;
	private: System::Windows::Forms::Button^ btnRedactDepartment;
	private: System::Windows::Forms::Button^ btnWorkAdd;
	private: System::Windows::Forms::Button^ btnAddNewDepartment;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtNewDepartment;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnChooseXml;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ btnUndo;
	private: System::Windows::Forms::Button^ btnRedo;
	private: System::Windows::Forms::Button^ btnSaveXml;

	protected:
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->txtSurname = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtPatronimyc = (gcnew System::Windows::Forms::TextBox());
			this->txtPosition = (gcnew System::Windows::Forms::TextBox());
			this->txtSalary = (gcnew System::Windows::Forms::TextBox());
			this->labSurname = (gcnew System::Windows::Forms::Label());
			this->labName = (gcnew System::Windows::Forms::Label());
			this->labPatronimyc = (gcnew System::Windows::Forms::Label());
			this->labPosition = (gcnew System::Windows::Forms::Label());
			this->labSalary = (gcnew System::Windows::Forms::Label());
			this->btnWorkRedact = (gcnew System::Windows::Forms::Button());
			this->btnWorkDelete = (gcnew System::Windows::Forms::Button());
			this->txtDepartment = (gcnew System::Windows::Forms::TextBox());
			this->labDepartment = (gcnew System::Windows::Forms::Label());
			this->btnDelDepartment = (gcnew System::Windows::Forms::Button());
			this->btnRedactDepartment = (gcnew System::Windows::Forms::Button());
			this->btnWorkAdd = (gcnew System::Windows::Forms::Button());
			this->btnAddNewDepartment = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNewDepartment = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnChooseXml = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->btnUndo = (gcnew System::Windows::Forms::Button());
			this->btnRedo = (gcnew System::Windows::Forms::Button());
			this->btnSaveXml = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// treeView1
			// 
			this->treeView1->HideSelection = false;
			this->treeView1->Location = System::Drawing::Point(680, 13);
			this->treeView1->Name = L"treeView1";
			this->treeView1->ShowNodeToolTips = true;
			this->treeView1->Size = System::Drawing::Size(449, 594);
			this->treeView1->TabIndex = 0;
			this->treeView1->NodeMouseClick += gcnew System::Windows::Forms::TreeNodeMouseClickEventHandler(this, &MyForm::TreeView1_NodeMouseClick);
			// 
			// txtSurname
			// 
			this->txtSurname->Location = System::Drawing::Point(111, 145);
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(187, 26);
			this->txtSurname->TabIndex = 3;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(111, 177);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(187, 26);
			this->txtName->TabIndex = 4;
			// 
			// txtPatronimyc
			// 
			this->txtPatronimyc->Location = System::Drawing::Point(111, 209);
			this->txtPatronimyc->Name = L"txtPatronimyc";
			this->txtPatronimyc->Size = System::Drawing::Size(187, 26);
			this->txtPatronimyc->TabIndex = 5;
			// 
			// txtPosition
			// 
			this->txtPosition->Location = System::Drawing::Point(111, 241);
			this->txtPosition->Name = L"txtPosition";
			this->txtPosition->Size = System::Drawing::Size(187, 26);
			this->txtPosition->TabIndex = 6;
			// 
			// txtSalary
			// 
			this->txtSalary->Location = System::Drawing::Point(111, 273);
			this->txtSalary->Name = L"txtSalary";
			this->txtSalary->Size = System::Drawing::Size(187, 26);
			this->txtSalary->TabIndex = 7;
			// 
			// labSurname
			// 
			this->labSurname->AutoSize = true;
			this->labSurname->Location = System::Drawing::Point(16, 145);
			this->labSurname->Name = L"labSurname";
			this->labSurname->Size = System::Drawing::Size(81, 20);
			this->labSurname->TabIndex = 8;
			this->labSurname->Text = L"Фамилия";
			// 
			// labName
			// 
			this->labName->AutoSize = true;
			this->labName->Location = System::Drawing::Point(57, 177);
			this->labName->Name = L"labName";
			this->labName->Size = System::Drawing::Size(40, 20);
			this->labName->TabIndex = 9;
			this->labName->Text = L"Имя";
			// 
			// labPatronimyc
			// 
			this->labPatronimyc->AutoSize = true;
			this->labPatronimyc->Location = System::Drawing::Point(14, 209);
			this->labPatronimyc->Name = L"labPatronimyc";
			this->labPatronimyc->Size = System::Drawing::Size(83, 20);
			this->labPatronimyc->TabIndex = 11;
			this->labPatronimyc->Text = L"Отчество";
			// 
			// labPosition
			// 
			this->labPosition->AutoSize = true;
			this->labPosition->Location = System::Drawing::Point(2, 241);
			this->labPosition->Name = L"labPosition";
			this->labPosition->Size = System::Drawing::Size(95, 20);
			this->labPosition->TabIndex = 10;
			this->labPosition->Text = L"Должность";
			// 
			// labSalary
			// 
			this->labSalary->AutoSize = true;
			this->labSalary->Location = System::Drawing::Point(13, 273);
			this->labSalary->Name = L"labSalary";
			this->labSalary->Size = System::Drawing::Size(84, 20);
			this->labSalary->TabIndex = 12;
			this->labSalary->Text = L"Зарплата";
			// 
			// btnWorkRedact
			// 
			this->btnWorkRedact->Location = System::Drawing::Point(111, 317);
			this->btnWorkRedact->Name = L"btnWorkRedact";
			this->btnWorkRedact->Size = System::Drawing::Size(187, 38);
			this->btnWorkRedact->TabIndex = 13;
			this->btnWorkRedact->Text = L"Редактировать";
			this->btnWorkRedact->UseVisualStyleBackColor = true;
			this->btnWorkRedact->Click += gcnew System::EventHandler(this, &MyForm::BtnWorkRedact_Click);
			// 
			// btnWorkDelete
			// 
			this->btnWorkDelete->Location = System::Drawing::Point(111, 361);
			this->btnWorkDelete->Name = L"btnWorkDelete";
			this->btnWorkDelete->Size = System::Drawing::Size(187, 37);
			this->btnWorkDelete->TabIndex = 14;
			this->btnWorkDelete->Text = L"Удалить";
			this->btnWorkDelete->UseVisualStyleBackColor = true;
			this->btnWorkDelete->Click += gcnew System::EventHandler(this, &MyForm::BtnWorkDelete_Click);
			// 
			// txtDepartment
			// 
			this->txtDepartment->Location = System::Drawing::Point(439, 145);
			this->txtDepartment->Name = L"txtDepartment";
			this->txtDepartment->Size = System::Drawing::Size(187, 26);
			this->txtDepartment->TabIndex = 15;
			// 
			// labDepartment
			// 
			this->labDepartment->AutoSize = true;
			this->labDepartment->Location = System::Drawing::Point(483, 122);
			this->labDepartment->Name = L"labDepartment";
			this->labDepartment->Size = System::Drawing::Size(113, 20);
			this->labDepartment->TabIndex = 16;
			this->labDepartment->Text = L"Департамент";
			// 
			// btnDelDepartment
			// 
			this->btnDelDepartment->Location = System::Drawing::Point(439, 221);
			this->btnDelDepartment->Name = L"btnDelDepartment";
			this->btnDelDepartment->Size = System::Drawing::Size(187, 37);
			this->btnDelDepartment->TabIndex = 18;
			this->btnDelDepartment->Text = L"Удалить";
			this->btnDelDepartment->UseVisualStyleBackColor = true;
			this->btnDelDepartment->Click += gcnew System::EventHandler(this, &MyForm::BtnDelDepartment_Click);
			// 
			// btnRedactDepartment
			// 
			this->btnRedactDepartment->Location = System::Drawing::Point(439, 177);
			this->btnRedactDepartment->Name = L"btnRedactDepartment";
			this->btnRedactDepartment->Size = System::Drawing::Size(187, 38);
			this->btnRedactDepartment->TabIndex = 17;
			this->btnRedactDepartment->Text = L"Редактировать";
			this->btnRedactDepartment->UseVisualStyleBackColor = true;
			this->btnRedactDepartment->Click += gcnew System::EventHandler(this, &MyForm::BtnRedactDepartment_Click);
			// 
			// btnWorkAdd
			// 
			this->btnWorkAdd->Location = System::Drawing::Point(111, 404);
			this->btnWorkAdd->Name = L"btnWorkAdd";
			this->btnWorkAdd->Size = System::Drawing::Size(187, 37);
			this->btnWorkAdd->TabIndex = 19;
			this->btnWorkAdd->Text = L"Добавить работника";
			this->btnWorkAdd->UseVisualStyleBackColor = true;
			this->btnWorkAdd->Click += gcnew System::EventHandler(this, &MyForm::BtnWorkAdd_Click);
			// 
			// btnAddNewDepartment
			// 
			this->btnAddNewDepartment->Location = System::Drawing::Point(439, 355);
			this->btnAddNewDepartment->Name = L"btnAddNewDepartment";
			this->btnAddNewDepartment->Size = System::Drawing::Size(187, 38);
			this->btnAddNewDepartment->TabIndex = 22;
			this->btnAddNewDepartment->Text = L"Добавить";
			this->btnAddNewDepartment->UseVisualStyleBackColor = true;
			this->btnAddNewDepartment->Click += gcnew System::EventHandler(this, &MyForm::BtnAddNewDepartment_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(444, 300);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 20);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Новый департамент";
			// 
			// txtNewDepartment
			// 
			this->txtNewDepartment->Location = System::Drawing::Point(439, 323);
			this->txtNewDepartment->Name = L"txtNewDepartment";
			this->txtNewDepartment->Size = System::Drawing::Size(187, 26);
			this->txtNewDepartment->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(155, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 20);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Работник";
			// 
			// btnChooseXml
			// 
			this->btnChooseXml->Location = System::Drawing::Point(34, 10);
			this->btnChooseXml->Name = L"btnChooseXml";
			this->btnChooseXml->Size = System::Drawing::Size(614, 33);
			this->btnChooseXml->TabIndex = 24;
			this->btnChooseXml->Text = L"Загрузить XML";
			this->btnChooseXml->UseVisualStyleBackColor = true;
			this->btnChooseXml->Click += gcnew System::EventHandler(this, &MyForm::BtnChooseXml_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// btnUndo
			// 
			this->btnUndo->Location = System::Drawing::Point(87, 489);
			this->btnUndo->Name = L"btnUndo";
			this->btnUndo->Size = System::Drawing::Size(211, 42);
			this->btnUndo->TabIndex = 26;
			this->btnUndo->Text = L"Шаг назад";
			this->btnUndo->UseVisualStyleBackColor = true;
			this->btnUndo->Click += gcnew System::EventHandler(this, &MyForm::BtnUndo_Click);
			// 
			// btnRedo
			// 
			this->btnRedo->Location = System::Drawing::Point(408, 489);
			this->btnRedo->Name = L"btnRedo";
			this->btnRedo->Size = System::Drawing::Size(218, 42);
			this->btnRedo->TabIndex = 27;
			this->btnRedo->Text = L"Шаг вперёд";
			this->btnRedo->UseVisualStyleBackColor = true;
			this->btnRedo->Click += gcnew System::EventHandler(this, &MyForm::BtnRedo_Click);
			// 
			// btnSaveXml
			// 
			this->btnSaveXml->Location = System::Drawing::Point(34, 49);
			this->btnSaveXml->Name = L"btnSaveXml";
			this->btnSaveXml->Size = System::Drawing::Size(614, 36);
			this->btnSaveXml->TabIndex = 28;
			this->btnSaveXml->Text = L"Сохранить результат  в XML";
			this->btnSaveXml->UseVisualStyleBackColor = true;
			this->btnSaveXml->Click += gcnew System::EventHandler(this, &MyForm::BtnSaveXml_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(352, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 20);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Название";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(350, 326);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 20);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Название";
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(34, 560);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(614, 48);
			this->btnExit->TabIndex = 31;
			this->btnExit->Text = L"Выйти";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::BtnExit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1138, 620);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnSaveXml);
			this->Controls->Add(this->btnRedo);
			this->Controls->Add(this->btnUndo);
			this->Controls->Add(this->btnChooseXml);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnAddNewDepartment);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtNewDepartment);
			this->Controls->Add(this->btnWorkAdd);
			this->Controls->Add(this->btnDelDepartment);
			this->Controls->Add(this->btnRedactDepartment);
			this->Controls->Add(this->labDepartment);
			this->Controls->Add(this->txtDepartment);
			this->Controls->Add(this->btnWorkDelete);
			this->Controls->Add(this->btnWorkRedact);
			this->Controls->Add(this->labSalary);
			this->Controls->Add(this->labPatronimyc);
			this->Controls->Add(this->labPosition);
			this->Controls->Add(this->labName);
			this->Controls->Add(this->labSurname);
			this->Controls->Add(this->txtSalary);
			this->Controls->Add(this->txtPosition);
			this->Controls->Add(this->txtPatronimyc);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtSurname);
			this->Controls->Add(this->treeView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TreeView1_NodeMouseClick(System::Object^ sender, System::Windows::Forms::TreeNodeMouseClickEventArgs^ e) {

		if (e->Button == System::Windows::Forms::MouseButtons::Left) treeView1->SelectedNode = e->Node;

		if (treeView1->SelectedNode->Level == 2) treeView1->SelectedNode = treeView1->SelectedNode->Parent;

		if (treeView1->SelectedNode->Level == 1) {

			btnWorkRedact->Enabled = true;
			btnWorkDelete->Enabled = true;
			btnWorkAdd->Enabled = false;

			txtSurname->Text = treeView1->SelectedNode->Nodes[0]->Text;
			txtName->Text = treeView1->SelectedNode->Nodes[1]->Text;
			txtPatronimyc->Text = treeView1->SelectedNode->Nodes[2]->Text;
			txtPosition->Text = treeView1->SelectedNode->Nodes[3]->Text;
			txtSalary->Text = treeView1->SelectedNode->Nodes[4]->Text;
			txtDepartment->Text = treeView1->SelectedNode->Parent->Text;
		}

		if (treeView1->SelectedNode->Level == 0) {

			btnWorkRedact->Enabled = false;
			btnWorkDelete->Enabled = false;
			btnWorkAdd->Enabled = true;
			txtSurname->Clear();
			txtName->Clear();
			txtPatronimyc->Clear();
			txtPosition->Clear();
			txtSalary->Clear();
			txtPosition->Clear();
			txtDepartment->Text = treeView1->SelectedNode->Text;
		}
	}

	private: System::Void BtnWorkRedact_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (treeView1->SelectedNode->Level == 2) treeView1->SelectedNode = treeView1->SelectedNode->Parent;
			if (treeView1->SelectedNode->Level == 1) {
				if (txtSurname->Text != "" && txtName->Text != "" && txtPatronimyc->Text != "" && txtPosition->Text != "" && txtSalary->Text != "")
				{
					Convert::ToInt64(txtSalary->Text);
					Operands^ operands = gcnew Operands(treeView1->SelectedNode, treeView1->SelectedNode->Parent->Index, treeView1->SelectedNode->Index);
					operands->setNewEmplParam(txtSurname->Text, txtName->Text, txtPatronimyc->Text, txtPosition->Text, txtSalary->Text);
					client->RedactEmploym(operands);
				}
				else
					MessageBox::Show("Ошибка! Ни одно поле роботника не должно быть пустым.");
			}
		}
		catch (...) {
			MessageBox::Show("Ошибка! Вы не выбрли ноду работника или поле зарплты состоит не из целого числа.");
		}
	}

	private: System::Void BtnWorkDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (treeView1->SelectedNode->Level == 2) treeView1->SelectedNode = treeView1->SelectedNode->Parent;
			if (treeView1->SelectedNode->Level == 1) {
				Operands^ operands = gcnew Operands(treeView1->SelectedNode, treeView1->SelectedNode->Parent->Index, treeView1->SelectedNode->Index);
				client->DelEmploym(operands);
			}
		}
		catch (...) {
			MessageBox::Show("Ошибка! Выберите подходящую ноду работника.");
		}
	}

	private: System::Void BtnRedactDepartment_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (treeView1->SelectedNode->Level == 2) treeView1->SelectedNode = treeView1->SelectedNode->Parent;
			if (treeView1->SelectedNode->Level == 0) {
				Operands^ operands = gcnew Operands(treeView1->SelectedNode->Index, 0, txtDepartment->Text, treeView1->SelectedNode->Text);
				client->RedactDepart(operands);
			}
			else
			{
				Operands^ operands = gcnew Operands(treeView1->SelectedNode->Parent->Index, 0, txtDepartment->Text, treeView1->SelectedNode->Parent->Text);
				client->RedactDepart(operands);
			}
		}
		catch (...) {
			MessageBox::Show("Ошибка! Выберите подходящую ноду департамента или любую ноду внутри него.");
		}
	}

	private: System::Void BtnDelDepartment_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (treeView1->SelectedNode->Level == 2) treeView1->SelectedNode = treeView1->SelectedNode->Parent;
			if (treeView1->SelectedNode->Level == 0) {
				Operands^ operands = gcnew Operands(treeView1->SelectedNode, treeView1->SelectedNode->Index, 0);
				client->DelDepart(operands);
			}
			else
			{
				Operands^ operands = gcnew Operands(treeView1->SelectedNode->Parent, treeView1->SelectedNode->Parent->Index, 0);
				client->DelDepart(operands);
			}
		}
		catch (...) {
			MessageBox::Show("Ошибка! Выберите подходящую ноду департамента или любую ноду внутри него.");
		}
	}

	private: System::Void BtnWorkAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (treeView1->SelectedNode->Level == 0) {
				TreeNode^ node = gcnew TreeNode;
				if (txtSurname->Text != "" && txtName->Text != "" && txtPatronimyc->Text != "" && txtPosition->Text != "" && txtSalary->Text != "")
				{
					node->Text = txtSurname->Text + "." + (txtName->Text[0]) + "." + (txtPatronimyc->Text[0]);
					node->Nodes->Add(txtSurname->Text);
					node->Nodes->Add(txtName->Text);
					node->Nodes->Add(txtPatronimyc->Text);
					node->Nodes->Add(txtPosition->Text);
					node->Nodes->Add(txtSalary->Text);
					Operands^ operands = gcnew Operands(node, treeView1->SelectedNode->Index, treeView1->SelectedNode->Nodes->Count);
					client->AddEmploym(operands);
				}
				else
					MessageBox::Show("Ошибка! Ни одно поле роботника не должно быть пустым.");
			}
		}
		catch (...) {
			MessageBox::Show("Ошибка! Выберите подходящую ноду департамента.");
		}
	}

	private: System::Void BtnAddNewDepartment_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtNewDepartment->Text != "")
		{
			Operands^ operands = gcnew Operands(gcnew TreeNode, treeView1->Nodes->Count, 0, txtNewDepartment->Text, "");
			client->AddDepart(operands);
		}
		else
			MessageBox::Show("Ошибка! Поле департамента не должно быть пустым.");

	}

	private: System::Void BtnChooseXml_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->Filter = "Xml файлы (*.xml)|*.xml";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ fileName = openFileDialog1->FileName;
			loadXml(fileName);
			this->client = gcnew Client(treeView1);
		}
	}

	private: System::Void loadXml(String^ fileName) {
		treeView1->Nodes->Clear();
		XmlTextReader reader(fileName);
		try {
			while (reader.ReadToFollowing("departments"))
			{
				if (reader.ReadToDescendant("department"))
				{
					do {
						TreeNode^ node = gcnew TreeNode;
						node->Text = reader.GetAttribute("name");

						if (reader.ReadToDescendant("employments"))
						{
							XmlReader^ inner_dep = reader.ReadSubtree();
							if (inner_dep->ReadToDescendant("employment"))
							{
								do {
									XmlReader^ inner_empl = inner_dep->ReadSubtree();
									TreeNode^ node_lvl1 = gcnew TreeNode;
									while (inner_empl->Read())
									{
										if (inner_empl->Name == "surname" && (inner_empl->NodeType == XmlNodeType::Element))
										{
											inner_empl->Read();
											node_lvl1->Nodes->Add(inner_empl->Value);
										}
										if (inner_empl->Name == "name" && (inner_empl->NodeType == XmlNodeType::Element))
										{
											inner_empl->Read();
											node_lvl1->Nodes->Add(inner_empl->Value);
										}
										if (inner_empl->Name == "middleName" && (inner_empl->NodeType == XmlNodeType::Element))
										{
											inner_empl->Read();
											node_lvl1->Nodes->Add(inner_empl->Value);
										}
										if (inner_empl->Name == "function" && (inner_empl->NodeType == XmlNodeType::Element))
										{
											inner_empl->Read();
											node_lvl1->Nodes->Add(inner_empl->Value);
										}
										if (inner_empl->Name == "salary" && (inner_empl->NodeType == XmlNodeType::Element))
										{
											inner_empl->Read();
											node_lvl1->Nodes->Add(inner_empl->Value);
										}

									}
									node_lvl1->Text = node_lvl1->Nodes[0]->Text + "." + node_lvl1->Nodes[1]->Text[0] + "." + node_lvl1->Nodes[2]->Text[0];

									node->Nodes->Add(node_lvl1);
								} while (inner_dep->ReadToFollowing("employment"));
							}
						}
						treeView1->Nodes->Add(node);
					} while (reader.ReadToFollowing("department"));
				}
			}
		}
		catch (...) {
			treeView1->Nodes->Clear();
			MessageBox::Show("Ошибка! Файл неподходящего формата.");
		}
	}

	private: System::Void BtnSaveXml_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->Filter = "Xml файлы (*.xml)|*.xml";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ fileName = openFileDialog1->FileName;
			SaveXml(fileName);
		}
	}

	private: System::Void SaveXml(String^ fileName) {
		XmlTextWriter writer(fileName, Encoding::UTF8);
		writer.WriteStartDocument();
		writer.Formatting = Formatting::Indented;
		writer.WriteStartElement("departments");
		for (int i = 0; i < treeView1->Nodes->Count; i++)
		{
			writer.WriteStartElement("department");
			writer.WriteAttributeString("", "name", "", treeView1->Nodes[i]->Text);
			writer.WriteStartElement("employments");
			for (int j = 0; j < treeView1->Nodes[i]->Nodes->Count; j++)
			{
				writer.WriteStartElement("employment");
				writer.WriteElementString("surname", treeView1->Nodes[i]->Nodes[j]->Nodes[0]->Text);
				writer.WriteElementString("name", treeView1->Nodes[i]->Nodes[j]->Nodes[1]->Text);
				writer.WriteElementString("middleName", treeView1->Nodes[i]->Nodes[j]->Nodes[2]->Text);
				writer.WriteElementString("function", treeView1->Nodes[i]->Nodes[j]->Nodes[3]->Text);
				writer.WriteElementString("salary", treeView1->Nodes[i]->Nodes[j]->Nodes[4]->Text);
				writer.WriteEndElement();
			}
			writer.WriteEndElement();
			writer.WriteEndElement();
		}
		writer.WriteEndElement();
		writer.Flush();
		writer.Close();
	}

	private: System::Void BtnUndo_Click(System::Object^ sender, System::EventArgs^ e) {

		client->Undo(1);
	}

	private: System::Void BtnRedo_Click(System::Object^ sender, System::EventArgs^ e) {

		client->Redo(1);
	}

	private: System::Void BtnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
