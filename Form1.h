#pragma once

namespace ProjetoCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvPauta;
	protected:

	protected:





	private: System::Windows::Forms::Button^ btnContarPorFreguesia;
	private: System::Windows::Forms::ListBox^ lstAuxiliar;
	private: System::Windows::Forms::TextBox^ txtFreguesia;
	private: System::Windows::Forms::TextBox^ txtTotalFregueses;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnMaisVelho;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtIdadeAluno;

	private: System::Windows::Forms::TextBox^ txtNomeAluno;

	private: System::Windows::Forms::Button^ btnMaisNovo;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnMulheres;


	private: System::Windows::Forms::Button^ btnHomens;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ btnLimparLista;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dgvPauta = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnContarPorFreguesia = (gcnew System::Windows::Forms::Button());
			this->lstAuxiliar = (gcnew System::Windows::Forms::ListBox());
			this->txtFreguesia = (gcnew System::Windows::Forms::TextBox());
			this->txtTotalFregueses = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnMaisVelho = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnMaisNovo = (gcnew System::Windows::Forms::Button());
			this->txtIdadeAluno = (gcnew System::Windows::Forms::TextBox());
			this->txtNomeAluno = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnMulheres = (gcnew System::Windows::Forms::Button());
			this->btnHomens = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->btnLimparLista = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPauta))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvPauta
			// 
			this->dgvPauta->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dgvPauta->BackgroundColor = System::Drawing::Color::LightBlue;
			this->dgvPauta->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvPauta->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dgvPauta->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::SteelBlue;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvPauta->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvPauta->ColumnHeadersHeight = 27;
			this->dgvPauta->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1, this->Column2,
					this->Column3, this->Column4
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::LightBlue;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvPauta->DefaultCellStyle = dataGridViewCellStyle2;
			this->dgvPauta->EnableHeadersVisualStyles = false;
			this->dgvPauta->GridColor = System::Drawing::Color::White;
			this->dgvPauta->Location = System::Drawing::Point(15, 65);
			this->dgvPauta->Name = L"dgvPauta";
			this->dgvPauta->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::LightBlue;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvPauta->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dgvPauta->Size = System::Drawing::Size(424, 507);
			this->dgvPauta->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nome";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 72;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Freguesia";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 103;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Idade";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 71;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Sexo";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 66;
			// 
			// btnContarPorFreguesia
			// 
			this->btnContarPorFreguesia->BackColor = System::Drawing::Color::SteelBlue;
			this->btnContarPorFreguesia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnContarPorFreguesia->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnContarPorFreguesia->Location = System::Drawing::Point(5, 28);
			this->btnContarPorFreguesia->Name = L"btnContarPorFreguesia";
			this->btnContarPorFreguesia->Size = System::Drawing::Size(254, 30);
			this->btnContarPorFreguesia->TabIndex = 1;
			this->btnContarPorFreguesia->Text = L"Digite o Nome da Freguesia e Clique aqui";
			this->btnContarPorFreguesia->UseVisualStyleBackColor = false;
			this->btnContarPorFreguesia->Click += gcnew System::EventHandler(this, &Form1::btnContarPorFreguesia_Click);
			// 
			// lstAuxiliar
			// 
			this->lstAuxiliar->BackColor = System::Drawing::Color::LightBlue;
			this->lstAuxiliar->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lstAuxiliar->FormattingEnabled = true;
			this->lstAuxiliar->Location = System::Drawing::Point(726, 65);
			this->lstAuxiliar->Name = L"lstAuxiliar";
			this->lstAuxiliar->Size = System::Drawing::Size(203, 286);
			this->lstAuxiliar->TabIndex = 2;
			// 
			// txtFreguesia
			// 
			this->txtFreguesia->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtFreguesia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFreguesia->Location = System::Drawing::Point(8, 76);
			this->txtFreguesia->Multiline = true;
			this->txtFreguesia->Name = L"txtFreguesia";
			this->txtFreguesia->Size = System::Drawing::Size(128, 16);
			this->txtFreguesia->TabIndex = 3;
			this->txtFreguesia->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtTotalFregueses
			// 
			this->txtTotalFregueses->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtTotalFregueses->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTotalFregueses->Location = System::Drawing::Point(178, 76);
			this->txtTotalFregueses->Multiline = true;
			this->txtTotalFregueses->Name = L"txtTotalFregueses";
			this->txtTotalFregueses->Size = System::Drawing::Size(80, 16);
			this->txtTotalFregueses->TabIndex = 4;
			this->txtTotalFregueses->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Freguesia";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(199, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Total";
			// 
			// btnMaisVelho
			// 
			this->btnMaisVelho->BackColor = System::Drawing::Color::SteelBlue;
			this->btnMaisVelho->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMaisVelho->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnMaisVelho->Location = System::Drawing::Point(5, 35);
			this->btnMaisVelho->Name = L"btnMaisVelho";
			this->btnMaisVelho->Size = System::Drawing::Size(112, 30);
			this->btnMaisVelho->TabIndex = 6;
			this->btnMaisVelho->Text = L"Aluno mais Velho";
			this->btnMaisVelho->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Location = System::Drawing::Point(46, 4);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(173, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Resid�ncia dos Alunos";
			// 
			// btnMaisNovo
			// 
			this->btnMaisNovo->BackColor = System::Drawing::Color::SteelBlue;
			this->btnMaisNovo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMaisNovo->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnMaisNovo->Location = System::Drawing::Point(142, 35);
			this->btnMaisNovo->Name = L"btnMaisNovo";
			this->btnMaisNovo->Size = System::Drawing::Size(116, 30);
			this->btnMaisNovo->TabIndex = 9;
			this->btnMaisNovo->Text = L"Aluno mais Novo";
			this->btnMaisNovo->UseVisualStyleBackColor = false;
			// 
			// txtIdadeAluno
			// 
			this->txtIdadeAluno->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtIdadeAluno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIdadeAluno->Location = System::Drawing::Point(201, 84);
			this->txtIdadeAluno->Multiline = true;
			this->txtIdadeAluno->Name = L"txtIdadeAluno";
			this->txtIdadeAluno->Size = System::Drawing::Size(56, 16);
			this->txtIdadeAluno->TabIndex = 8;
			this->txtIdadeAluno->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtNomeAluno
			// 
			this->txtNomeAluno->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtNomeAluno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNomeAluno->Location = System::Drawing::Point(8, 84);
			this->txtNomeAluno->Multiline = true;
			this->txtNomeAluno->Name = L"txtNomeAluno";
			this->txtNomeAluno->Size = System::Drawing::Size(178, 16);
			this->txtNomeAluno->TabIndex = 7;
			this->txtNomeAluno->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(212, 71);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Idade";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label6->Location = System::Drawing::Point(55, 3);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(154, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Diferen�a de Idades";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(82, 71);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Nome";
			// 
			// btnMulheres
			// 
			this->btnMulheres->BackColor = System::Drawing::Color::SteelBlue;
			this->btnMulheres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMulheres->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnMulheres->Location = System::Drawing::Point(155, 35);
			this->btnMulheres->Name = L"btnMulheres";
			this->btnMulheres->Size = System::Drawing::Size(86, 30);
			this->btnMulheres->TabIndex = 7;
			this->btnMulheres->Text = L"MULHERES";
			this->btnMulheres->UseVisualStyleBackColor = false;
			this->btnMulheres->Click += gcnew System::EventHandler(this, &Form1::btnMulheres_Click);
			// 
			// btnHomens
			// 
			this->btnHomens->BackColor = System::Drawing::Color::SteelBlue;
			this->btnHomens->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHomens->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnHomens->Location = System::Drawing::Point(24, 35);
			this->btnHomens->Name = L"btnHomens";
			this->btnHomens->Size = System::Drawing::Size(93, 30);
			this->btnHomens->TabIndex = 6;
			this->btnHomens->Text = L"HOMENS";
			this->btnHomens->UseVisualStyleBackColor = false;
			this->btnHomens->Click += gcnew System::EventHandler(this, &Form1::btnHomens_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label7->Location = System::Drawing::Point(3, 4);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(252, 17);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Listagem dos Homens e Mulheres";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->btnLimparLista);
			this->groupBox4->Controls->Add(this->panel4);
			this->groupBox4->Controls->Add(this->panel3);
			this->groupBox4->Controls->Add(this->panel2);
			this->groupBox4->Controls->Add(this->panel1);
			this->groupBox4->Controls->Add(this->lstAuxiliar);
			this->groupBox4->Controls->Add(this->dgvPauta);
			this->groupBox4->Location = System::Drawing::Point(12, 12);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(944, 587);
			this->groupBox4->TabIndex = 10;
			this->groupBox4->TabStop = false;
			// 
			// btnLimparLista
			// 
			this->btnLimparLista->BackColor = System::Drawing::Color::SteelBlue;
			this->btnLimparLista->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLimparLista->ForeColor = System::Drawing::Color::White;
			this->btnLimparLista->Location = System::Drawing::Point(726, 358);
			this->btnLimparLista->Name = L"btnLimparLista";
			this->btnLimparLista->Size = System::Drawing::Size(203, 30);
			this->btnLimparLista->TabIndex = 14;
			this->btnLimparLista->Text = L"LIMPAR LISTA";
			this->btnLimparLista->UseVisualStyleBackColor = false;
			this->btnLimparLista->Click += gcnew System::EventHandler(this, &Form1::btnLimparLista_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::SteelBlue;
			this->panel4->Controls->Add(this->label8);
			this->panel4->Location = System::Drawing::Point(15, 20);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(914, 37);
			this->panel4->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(5, 6);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(138, 25);
			this->label8->TabIndex = 1;
			this->label8->Text = L"TURMA 20 B";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LightBlue;
			this->panel3->Controls->Add(this->btnContarPorFreguesia);
			this->panel3->Controls->Add(this->txtTotalFregueses);
			this->panel3->Controls->Add(this->txtFreguesia);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(449, 65);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(266, 112);
			this->panel3->TabIndex = 12;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightBlue;
			this->panel2->Controls->Add(this->btnMaisNovo);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->txtIdadeAluno);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->txtNomeAluno);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->btnMaisVelho);
			this->panel2->Location = System::Drawing::Point(449, 188);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(266, 117);
			this->panel2->TabIndex = 11;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightBlue;
			this->panel1->Controls->Add(this->btnMulheres);
			this->panel1->Controls->Add(this->btnHomens);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Location = System::Drawing::Point(449, 316);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(266, 72);
			this->panel1->TabIndex = 10;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(972, 628);
			this->Controls->Add(this->groupBox4);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Projeto Alfa";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPauta))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		dgvPauta->Rows->Add("Ana Rita Cunha", "Maximinos", 1998, "F");
		dgvPauta->Rows->Add("Bela Costa Silva", "Lomar", 2002, "F");
		dgvPauta->Rows->Add("Carlos Alberto Costa", "Sequeira", 1999, "M");
		dgvPauta->Rows->Add("Carlos Daniel Ferreira", "Sequeira", 2001, "M");
		dgvPauta->Rows->Add("Daniel Bastos Gomes", "Lovios", 1998, "M");
		dgvPauta->Rows->Add("Daniel Silva Ferraz", "S. V�tor", 1999, "M");
		dgvPauta->Rows->Add("Elvira Gomes Pendes", "Maximinos", 2001, "F");
		dgvPauta->Rows->Add("Fernanda Maria Silva", "S. V�tor", 2002, "F");
		dgvPauta->Rows->Add("Fernando Gomes Barros", "Maximinos", 1999, "M");
		dgvPauta->Rows->Add("Gilherme Alexandre Barros", "Lama��es", 2001, "M");
		dgvPauta->Rows->Add("Hilda Fonseca Silva", "S. Geraldo", 1999, "F");
		dgvPauta->Rows->Add("Jos� Manuel Carvalho", "Gualtar", 1997, "M");
		dgvPauta->Rows->Add("Jos� Alberto Gomes", "Maximinos", 2001, "M");
		dgvPauta->Rows->Add("Maria Silv�ria Bastos", "Maximinos", 1997, "F");
		dgvPauta->Rows->Add("Anabela Bastos Torres", "S. V�tor", 1996, "F");
		dgvPauta->Rows->Add("Rui Vasco Santos", "Maximinos", 2002, "M");
		dgvPauta->Rows->Add("Ot�vio Ferreira", "Maximinos", 1999, "M");
		dgvPauta->Rows->Add("Silv�rio Silva Teixeira", "Lama��es", 2001, "M");
		dgvPauta->Rows->Add("Teodoro Armando Matos", "Maximinos", 2002, "M");
		dgvPauta->Rows->Add("Zacarias Alexandre Sampaio", "Ferreiros", 1998, "M");
	}
	private: System::Void btnContarPorFreguesia_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		//Contar quantas pessoas existem na Freguesia digitada na caixa de texto em baixo

		//A vari�vel "total" � iniciaizada a zero
		int total = 0;
		
		//A vari�vel "localizar" conta o n�mero de linhas menos a ultima "-1"
		int localizar = dgvPauta->Rows->Count - 1;

		//O ciclo FOR percorre todas as linhas e conta os n�meros da segunda coluna "Cells [1]"
		//Ou seja, conta os nomes da segunda coluna de cada linha e adiciona � vari�vel "total"
		for (size_t i = 0; i < localizar; i++)
		{
			if (txtFreguesia->Text == Convert::ToString(dgvPauta->Rows[i]->Cells[1]->Value))
			{
				total = total + 1;
			}

		}

		//Depois de terminado o Ciclo, o valor da vari�vel "total" passa para a textBox "txtTotalFregueses"
		txtTotalFregueses->Text = Convert::ToString(total);
	}
private: System::Void btnHomens_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	//Enviar para a ListBox uma lista de todos os Homens da Turma 20 B


	//A vari�vel "localizar" conta o n�mero de linhas menos a ultima "-1"
	int localizar = dgvPauta->Rows->Count - 1;

	//O ciclo FOR percorre todas as linhas e verifica se existe a letra "M" na �ltima coluna "Cells [3]"
	for (size_t i = 0; i < localizar; i++)
	{
		//Se encontrar a letra M
		if ("M" == dgvPauta->Rows[i]->Cells[3]->Value)
		{
			//Adiciona o que est� na coluna zero, neste caso o nome do aluno
			lstAuxiliar->Items->Add(dgvPauta->Rows[i]->Cells[0]->Value);
		}

	}

	}
private: System::Void btnLimparLista_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		lstAuxiliar->Items->Clear();
	}
private: System::Void btnMulheres_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	//Instru��es identicas ao bot�o HOMENS, apenas trocamos para a letra F
	int localizar = dgvPauta->Rows->Count - 1;

	for (size_t i = 0; i < localizar; i++)
	{
		if ("F" == dgvPauta->Rows[i]->Cells[3]->Value)
		{
			lstAuxiliar->Items->Add(dgvPauta->Rows[i]->Cells[0]->Value);
		}

	}
	}
};
}
