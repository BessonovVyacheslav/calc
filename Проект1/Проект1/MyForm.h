#pragma once
#include <stdio.h>
#include <C:\Users\User\documents\visual studio 2012\Проект1\Проект1\Debug\Fact.h>
double num,a,b,FirstNum, zelaya_4ACTb;
int mnojitel = 10;
short int operation;
//1 plus
//2 minus
//3 *
//4 /
namespace Проект1 {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

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
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;



	private: System::Windows::Forms::Label^  lbl_1;
	private: System::Windows::Forms::Button^ btn_return;


	private: System::Windows::Forms::Button^ btn_1;
	private: System::Windows::Forms::Button^ btn_2;
	private: System::Windows::Forms::Button^ btn_3;
	private: System::Windows::Forms::Button^ btn_4;
	private: System::Windows::Forms::Button^ btn_5;
	private: System::Windows::Forms::Button^ btn_6;
	private: System::Windows::Forms::Button^ btn_7;
	private: System::Windows::Forms::Button^ btn_8;
	private: System::Windows::Forms::Button^ btn_9;
	private: System::Windows::Forms::Button^ btn_0;
	private: System::Windows::Forms::Button^ btn_dot;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выйтиToolStripMenuItem;
	private: System::Windows::Forms::Button^ btn_summ;
	private: System::Windows::Forms::Button^ btn_minus;
	private: System::Windows::Forms::Button^ btn_multiple;
	private: System::Windows::Forms::Button^ btn_div;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btn_swap;
	private: System::Windows::Forms::ToolStripMenuItem^ menu_Clear;
	private: System::Windows::Forms::Button^ btn_ln;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ помощьToolStripMenuItem;
	private: System::Windows::Forms::HelpProvider^ hlp_1;
	private: System::Windows::Forms::TextBox^ tb_2;
	private: System::Windows::Forms::Label^ lbl_2;
	private: System::Windows::Forms::TextBox^ tb_1;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Timer^ timer1;

	private: System::ComponentModel::IContainer^ components;















	protected:








	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->lbl_1 = (gcnew System::Windows::Forms::Label());
			this->btn_return = (gcnew System::Windows::Forms::Button());
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->btn_2 = (gcnew System::Windows::Forms::Button());
			this->btn_3 = (gcnew System::Windows::Forms::Button());
			this->btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_5 = (gcnew System::Windows::Forms::Button());
			this->btn_6 = (gcnew System::Windows::Forms::Button());
			this->btn_7 = (gcnew System::Windows::Forms::Button());
			this->btn_8 = (gcnew System::Windows::Forms::Button());
			this->btn_9 = (gcnew System::Windows::Forms::Button());
			this->btn_0 = (gcnew System::Windows::Forms::Button());
			this->btn_dot = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu_Clear = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выйтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->помощьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btn_summ = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->btn_multiple = (gcnew System::Windows::Forms::Button());
			this->btn_div = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btn_swap = (gcnew System::Windows::Forms::Button());
			this->btn_ln = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->hlp_1 = (gcnew System::Windows::Forms::HelpProvider());
			this->tb_2 = (gcnew System::Windows::Forms::TextBox());
			this->lbl_2 = (gcnew System::Windows::Forms::Label());
			this->tb_1 = (gcnew System::Windows::Forms::TextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// lbl_1
			// 
			this->lbl_1->AutoSize = true;
			this->lbl_1->Location = System::Drawing::Point(39, 66);
			this->lbl_1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_1->Name = L"lbl_1";
			this->lbl_1->Size = System::Drawing::Size(73, 17);
			this->lbl_1->TabIndex = 2;
			this->lbl_1->Text = L"Значение";
			this->lbl_1->Click += gcnew System::EventHandler(this, &MyForm::Input_Click);
			// 
			// btn_return
			// 
			this->btn_return->BackColor = System::Drawing::SystemColors::Control;
			this->btn_return->Font = (gcnew System::Drawing::Font(L"GOST type B", 16.2F));
			this->btn_return->Location = System::Drawing::Point(42, 348);
			this->btn_return->Margin = System::Windows::Forms::Padding(4);
			this->btn_return->Name = L"btn_return";
			this->btn_return->Size = System::Drawing::Size(180, 97);
			this->btn_return->TabIndex = 4;
			this->btn_return->Text = L"&Ввод";
			this->btn_return->UseVisualStyleBackColor = false;
			this->btn_return->Click += gcnew System::EventHandler(this, &MyForm::Return);
			// 
			// btn_1
			// 
			this->btn_1->Font = (gcnew System::Drawing::Font(L"GOST type B", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_1->Location = System::Drawing::Point(42, 104);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(57, 47);
			this->btn_1->TabIndex = 5;
			this->btn_1->Text = L"&1";
			this->btn_1->UseVisualStyleBackColor = true;
			this->btn_1->Click += gcnew System::EventHandler(this, &MyForm::btn_1_click);
			// 
			// btn_2
			// 
			this->btn_2->Font = (gcnew System::Drawing::Font(L"GOST type B", 16.2F));
			this->btn_2->Location = System::Drawing::Point(105, 105);
			this->btn_2->Name = L"btn_2";
			this->btn_2->Size = System::Drawing::Size(54, 46);
			this->btn_2->TabIndex = 6;
			this->btn_2->Text = L"&2";
			this->btn_2->UseVisualStyleBackColor = true;
			this->btn_2->Click += gcnew System::EventHandler(this, &MyForm::btn_2_click);
			// 
			// btn_3
			// 
			this->btn_3->Font = (gcnew System::Drawing::Font(L"GOST type B", 16.2F));
			this->btn_3->Location = System::Drawing::Point(165, 104);
			this->btn_3->Name = L"btn_3";
			this->btn_3->Size = System::Drawing::Size(57, 47);
			this->btn_3->TabIndex = 7;
			this->btn_3->Text = L"&3";
			this->btn_3->UseVisualStyleBackColor = true;
			this->btn_3->Click += gcnew System::EventHandler(this, &MyForm::btn_3_click);
			// 
			// btn_4
			// 
			this->btn_4->Font = (gcnew System::Drawing::Font(L"GOST type B", 16.2F));
			this->btn_4->Location = System::Drawing::Point(41, 157);
			this->btn_4->Name = L"btn_4";
			this->btn_4->Size = System::Drawing::Size(58, 54);
			this->btn_4->TabIndex = 8;
			this->btn_4->Text = L"&4";
			this->btn_4->UseVisualStyleBackColor = true;
			this->btn_4->Click += gcnew System::EventHandler(this, &MyForm::btn_4_click);
			// 
			// btn_5
			// 
			this->btn_5->Font = (gcnew System::Drawing::Font(L"GOST type B", 16.2F));
			this->btn_5->Location = System::Drawing::Point(106, 158);
			this->btn_5->Name = L"btn_5";
			this->btn_5->Size = System::Drawing::Size(53, 53);
			this->btn_5->TabIndex = 9;
			this->btn_5->Text = L"&5";
			this->btn_5->UseVisualStyleBackColor = true;
			this->btn_5->Click += gcnew System::EventHandler(this, &MyForm::btn_5_click);
			// 
			// btn_6
			// 
			this->btn_6->Font = (gcnew System::Drawing::Font(L"GOST type B", 16.2F));
			this->btn_6->Location = System::Drawing::Point(165, 157);
			this->btn_6->Name = L"btn_6";
			this->btn_6->Size = System::Drawing::Size(57, 54);
			this->btn_6->TabIndex = 10;
			this->btn_6->Text = L"&6";
			this->btn_6->UseVisualStyleBackColor = true;
			this->btn_6->Click += gcnew System::EventHandler(this, &MyForm::btn_6_click);
			// 
			// btn_7
			// 
			this->btn_7->Font = (gcnew System::Drawing::Font(L"GOST type B", 16.2F));
			this->btn_7->Location = System::Drawing::Point(41, 217);
			this->btn_7->Name = L"btn_7";
			this->btn_7->Size = System::Drawing::Size(57, 54);
			this->btn_7->TabIndex = 11;
			this->btn_7->Text = L"&7";
			this->btn_7->UseVisualStyleBackColor = true;
			this->btn_7->Click += gcnew System::EventHandler(this, &MyForm::btn_7_click);
			// 
			// btn_8
			// 
			this->btn_8->Font = (gcnew System::Drawing::Font(L"GOST type B", 16.2F));
			this->btn_8->Location = System::Drawing::Point(102, 217);
			this->btn_8->Name = L"btn_8";
			this->btn_8->Size = System::Drawing::Size(57, 54);
			this->btn_8->TabIndex = 12;
			this->btn_8->Text = L"&8";
			this->btn_8->UseVisualStyleBackColor = true;
			this->btn_8->Click += gcnew System::EventHandler(this, &MyForm::btn_8_click);
			// 
			// btn_9
			// 
			this->btn_9->Font = (gcnew System::Drawing::Font(L"GOST type B", 16.2F));
			this->btn_9->Location = System::Drawing::Point(165, 217);
			this->btn_9->Name = L"btn_9";
			this->btn_9->Size = System::Drawing::Size(57, 54);
			this->btn_9->TabIndex = 13;
			this->btn_9->Text = L"&9";
			this->btn_9->UseVisualStyleBackColor = true;
			this->btn_9->Click += gcnew System::EventHandler(this, &MyForm::btn_9_click);
			// 
			// btn_0
			// 
			this->btn_0->Font = (gcnew System::Drawing::Font(L"GOST type B", 16.2F));
			this->btn_0->Location = System::Drawing::Point(42, 287);
			this->btn_0->Name = L"btn_0";
			this->btn_0->Size = System::Drawing::Size(57, 54);
			this->btn_0->TabIndex = 14;
			this->btn_0->Text = L"&0";
			this->btn_0->UseVisualStyleBackColor = true;
			this->btn_0->Click += gcnew System::EventHandler(this, &MyForm::btn_0_click);
			// 
			// btn_dot
			// 
			this->btn_dot->Font = (gcnew System::Drawing::Font(L"GOST type B", 16.2F));
			this->btn_dot->Location = System::Drawing::Point(106, 287);
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->Size = System::Drawing::Size(57, 54);
			this->btn_dot->TabIndex = 15;
			this->btn_dot->Text = L"&.";
			this->btn_dot->UseVisualStyleBackColor = true;
			this->btn_dot->Click += gcnew System::EventHandler(this, &MyForm::btn_dot_click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->справкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(475, 28);
			this->menuStrip1->TabIndex = 16;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menu_Clear,
					this->выйтиToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->fileToolStripMenuItem->Text = L"&Файл";
			// 
			// menu_Clear
			// 
			this->menu_Clear->Name = L"menu_Clear";
			this->menu_Clear->Size = System::Drawing::Size(224, 26);
			this->menu_Clear->Text = L"&Очистить";
			this->menu_Clear->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->menu_Clear->Click += gcnew System::EventHandler(this, &MyForm::clear);
			// 
			// выйтиToolStripMenuItem
			// 
			this->выйтиToolStripMenuItem->AutoToolTip = true;
			this->выйтиToolStripMenuItem->Name = L"выйтиToolStripMenuItem";
			this->выйтиToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::Q));
			this->выйтиToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->выйтиToolStripMenuItem->Text = L"Вы&йти";
			this->выйтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::quit);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->помощьToolStripMenuItem });
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->справкаToolStripMenuItem->Text = L"&Справка";
			// 
			// помощьToolStripMenuItem
			// 
			this->помощьToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->помощьToolStripMenuItem->Name = L"помощьToolStripMenuItem";
			this->помощьToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->помощьToolStripMenuItem->Text = L"&Помощь";
			// 
			// btn_summ
			// 
			this->btn_summ->Font = (gcnew System::Drawing::Font(L"GOST type B", 16.2F));
			this->btn_summ->Location = System::Drawing::Point(263, 104);
			this->btn_summ->Name = L"btn_summ";
			this->btn_summ->Size = System::Drawing::Size(57, 47);
			this->btn_summ->TabIndex = 17;
			this->btn_summ->Text = L"&+";
			this->btn_summ->UseVisualStyleBackColor = true;
			this->btn_summ->Click += gcnew System::EventHandler(this, &MyForm::summ);
			// 
			// btn_minus
			// 
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"GOST type B", 16.2F));
			this->btn_minus->Location = System::Drawing::Point(339, 104);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(66, 47);
			this->btn_minus->TabIndex = 18;
			this->btn_minus->Text = L"&-";
			this->btn_minus->UseVisualStyleBackColor = true;
			this->btn_minus->Click += gcnew System::EventHandler(this, &MyForm::minus);
			// 
			// btn_multiple
			// 
			this->btn_multiple->Font = (gcnew System::Drawing::Font(L"GOST type B", 16.2F));
			this->btn_multiple->Location = System::Drawing::Point(263, 166);
			this->btn_multiple->Name = L"btn_multiple";
			this->btn_multiple->Size = System::Drawing::Size(57, 45);
			this->btn_multiple->TabIndex = 19;
			this->btn_multiple->Text = L"&*";
			this->btn_multiple->UseVisualStyleBackColor = true;
			this->btn_multiple->Click += gcnew System::EventHandler(this, &MyForm::multiply);
			// 
			// btn_div
			// 
			this->btn_div->Font = (gcnew System::Drawing::Font(L"GOST type B", 16.2F));
			this->btn_div->Location = System::Drawing::Point(339, 167);
			this->btn_div->Name = L"btn_div";
			this->btn_div->Size = System::Drawing::Size(66, 44);
			this->btn_div->TabIndex = 20;
			this->btn_div->Text = L"&/";
			this->btn_div->UseVisualStyleBackColor = true;
			this->btn_div->Click += gcnew System::EventHandler(this, &MyForm::division);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"GOST type B", 16.2F));
			this->button1->Location = System::Drawing::Point(263, 224);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 41);
			this->button1->TabIndex = 21;
			this->button1->Text = L"&Корень";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::sqtr);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"GOST type B", 14.2F));
			this->button2->Location = System::Drawing::Point(263, 335);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 49);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Ф&акториал";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::factorial);
			// 
			// btn_swap
			// 
			this->btn_swap->Font = (gcnew System::Drawing::Font(L"GOST type B", 10.2F));
			this->btn_swap->Location = System::Drawing::Point(169, 287);
			this->btn_swap->Name = L"btn_swap";
			this->btn_swap->Size = System::Drawing::Size(51, 54);
			this->btn_swap->TabIndex = 23;
			this->btn_swap->Text = L"+/-";
			this->btn_swap->UseVisualStyleBackColor = true;
			this->btn_swap->Click += gcnew System::EventHandler(this, &MyForm::swap);
			// 
			// btn_ln
			// 
			this->btn_ln->Font = (gcnew System::Drawing::Font(L"GOST type B", 10.2F));
			this->btn_ln->Location = System::Drawing::Point(263, 277);
			this->btn_ln->Name = L"btn_ln";
			this->btn_ln->Size = System::Drawing::Size(142, 52);
			this->btn_ln->TabIndex = 24;
			this->btn_ln->Text = L"&Натуральный логарифм";
			this->btn_ln->UseVisualStyleBackColor = true;
			this->btn_ln->Click += gcnew System::EventHandler(this, &MyForm::ln);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"GOST type B", 16.2F));
			this->button3->Location = System::Drawing::Point(263, 390);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(142, 49);
			this->button3->TabIndex = 25;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// tb_2
			// 
			this->tb_2->Location = System::Drawing::Point(263, 40);
			this->tb_2->Name = L"tb_2";
			this->tb_2->Size = System::Drawing::Size(142, 22);
			this->tb_2->TabIndex = 26;
			this->tb_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lbl_2
			// 
			this->lbl_2->AutoSize = true;
			this->lbl_2->Location = System::Drawing::Point(260, 66);
			this->lbl_2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_2->Name = L"lbl_2";
			this->lbl_2->Size = System::Drawing::Size(51, 17);
			this->lbl_2->TabIndex = 27;
			this->lbl_2->Text = L"Буфер";
			this->lbl_2->Click += gcnew System::EventHandler(this, &MyForm::lbl_2_Click);
			// 
			// tb_1
			// 
			this->tb_1->Location = System::Drawing::Point(42, 40);
			this->tb_1->Name = L"tb_1";
			this->tb_1->Size = System::Drawing::Size(178, 22);
			this->tb_1->TabIndex = 28;
			this->tb_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// toolTip1
			// 
			this->toolTip1->Tag = L"Ввод числа";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(475, 488);
			this->Controls->Add(this->tb_1);
			this->Controls->Add(this->lbl_2);
			this->Controls->Add(this->tb_2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->btn_ln);
			this->Controls->Add(this->btn_swap);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_div);
			this->Controls->Add(this->btn_multiple);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->btn_summ);
			this->Controls->Add(this->btn_dot);
			this->Controls->Add(this->btn_0);
			this->Controls->Add(this->btn_9);
			this->Controls->Add(this->btn_8);
			this->Controls->Add(this->btn_7);
			this->Controls->Add(this->btn_6);
			this->Controls->Add(this->btn_5);
			this->Controls->Add(this->btn_4);
			this->Controls->Add(this->btn_3);
			this->Controls->Add(this->btn_2);
			this->Controls->Add(this->btn_1);
			this->Controls->Add(this->btn_return);
			this->Controls->Add(this->lbl_1);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Input_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Tb_1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void btn_Click(System::Object^  sender, System::EventArgs^  e) {
		int number=System::Convert::ToDouble(tb_1->Text);
		tb_1->Text = System::Convert:: ToString(number);
		 }
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
 private: System::Void btn_1_click(System::Object^ sender, System::EventArgs^ e) {
	a = a * mnojitel + 1* mnojitel/10;
	tb_1->Text = System::Convert::ToString(a);
 }
private: System::Void btn_2_click(System::Object^ sender, System::EventArgs^ e) {
	a = a * mnojitel + 2 * mnojitel / 10;
	tb_1->Text = System::Convert::ToString(a);
}
private: System::Void btn_3_click(System::Object^ sender, System::EventArgs^ e) {
	a = a * mnojitel + 3 * mnojitel / 10;
	tb_1->Text = System::Convert::ToString(a);
}
private: System::Void btn_4_click(System::Object^ sender, System::EventArgs^ e) {
	a = a * mnojitel + 4 * mnojitel / 10;
	tb_1->Text = System::Convert::ToString(a);
}
private: System::Void btn_5_click(System::Object^ sender, System::EventArgs^ e) {
	a = a * mnojitel + 5 * mnojitel / 10;
	tb_1->Text = System::Convert::ToString(a);
}
private: System::Void btn_6_click(System::Object^ sender, System::EventArgs^ e) {
	a = a * mnojitel + 6 * mnojitel / 10;
	tb_1->Text = System::Convert::ToString(a);
}
private: System::Void btn_7_click(System::Object^ sender, System::EventArgs^ e) {
	a = a * mnojitel + 7 * mnojitel / 10;
	tb_1->Text = System::Convert::ToString(a);
}
private: System::Void btn_8_click(System::Object^ sender, System::EventArgs^ e) {
	a = a * mnojitel + 8 * mnojitel / 10;
	tb_1->Text = System::Convert::ToString(a);
}
private: System::Void btn_9_click(System::Object^ sender, System::EventArgs^ e) {
	a = a * mnojitel + 9 * mnojitel / 10;
	tb_1->Text = System::Convert::ToString(a);
}
private: System::Void btn_0_click(System::Object^ sender, System::EventArgs^ e) {
	a = a * mnojitel + 0 * mnojitel / 10;
	tb_1->Text = System::Convert::ToString(a);
}
private: System::Void btn_dot_click(System::Object^ sender, System::EventArgs^ e) {
	zelaya_4ACTb=a;
	a = 0;
	mnojitel= 5;
	printf("%lf", a);
}
private: System::Void quit(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void summ(System::Object^ sender, System::EventArgs^ e) {
	operation = 1;
	FirstNum = zelaya_4ACTb + a;
	tb_2->Text = System::Convert::ToString(FirstNum);
	a = 0;
}
private: System::Void minus(System::Object^ sender, System::EventArgs^ e) {
	operation = 2;
	FirstNum = zelaya_4ACTb + a;
	tb_2->Text = System::Convert::ToString(FirstNum);
	a = 0;
}
private: System::Void multiply(System::Object^ sender, System::EventArgs^ e) {
	operation = 3;
	FirstNum = zelaya_4ACTb + a;
	tb_2->Text = System::Convert::ToString(FirstNum);
	a = 0;
}
private: System::Void division(System::Object^ sender, System::EventArgs^ e) {
	operation = 4;
	FirstNum = zelaya_4ACTb + a;
	tb_2->Text = System::Convert::ToString(FirstNum);
	a = 0;
}

//private: System::Void sqtr(System::Object^ sender, System::EventArgs^ e) {
//	operation = 5;
//	FirstNum = zelaya_4ACTb + a;
//	sqrt(FirstNum);
//}

private: System::Void factorial(System::Object^ sender, System::EventArgs^ e) {
	operation = 6;
	FirstNum = zelaya_4ACTb + a;
	Fact(FirstNum);
}
private: System::Void swap(System::Object^ sender, System::EventArgs^ e) {
	operation = 7;
	a = -a;
	tb_1->Text = System::Convert::ToString(a);
}
private: System::Void ln(System::Object^ sender, System::EventArgs^ e) {
	operation = 8;
	//a = ln(a);
}
private: System::Void clear(System::Object^ sender, System::EventArgs^ e) {
	a = 0;
	FirstNum = 0;
	mnojitel = 10;
	tb_1->Text = System::Convert::ToString(FirstNum);
	tb_2->Text = System::Convert::ToString(a);
}
private: System::Void Return(System::Object^ sender, System::EventArgs^ e) {
	if (operation = 1)
	{
		num=sum(a, FirstNum);
	}
	/*else if(operation = 2)
	{
		num=minus(FirstNum, a);
	}*/
	else if (operation = 3)
	{
		num=multiple(FirstNum, a);
	}
	/*else if (operation = 4)
	{
		num=division(FirstNum, a);
	}*/
	tb_2->Text = System::Convert::ToString(FirstNum);
	FirstNum = num;
	tb_1->Text = System::Convert::ToString(num);
}
private: System::Void sqtr(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbl_2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}