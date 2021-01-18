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




	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ btnLimparLista;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ btnDesabilitarGrid;
	private: System::Windows::Forms::Button^ btnAbilitarGrid;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ btnConfigurarGrid;
	private: System::Windows::Forms::Button^ btnPreencherGrid;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Button^ btnLimparGrid;
	private: System::Windows::Forms::Button^ btnGerarNotas;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ btnNegativas;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
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
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->btnNegativas = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->btnLimparGrid = (gcnew System::Windows::Forms::Button());
			this->btnGerarNotas = (gcnew System::Windows::Forms::Button());
			this->btnConfigurarGrid = (gcnew System::Windows::Forms::Button());
			this->btnPreencherGrid = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btnDesabilitarGrid = (gcnew System::Windows::Forms::Button());
			this->btnAbilitarGrid = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnLimparLista = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPauta))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvPauta
			// 
			this->dgvPauta->BackgroundColor = System::Drawing::Color::LightBlue;
			this->dgvPauta->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvPauta->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dgvPauta->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::SteelBlue;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvPauta->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dgvPauta->ColumnHeadersHeight = 27;
			this->dgvPauta->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4)
				{
				this->Column1, this->Column2,
					this->Column3, this->Column4
				});
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::LightBlue;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvPauta->DefaultCellStyle = dataGridViewCellStyle8;
			this->dgvPauta->EnableHeadersVisualStyles = false;
			this->dgvPauta->GridColor = System::Drawing::Color::White;
			this->dgvPauta->Location = System::Drawing::Point(15, 65);
			this->dgvPauta->Name = L"dgvPauta";
			this->dgvPauta->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::LightBlue;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvPauta->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dgvPauta->Size = System::Drawing::Size(767, 507);
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
			this->Column3->HeaderText = L"Ano";
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
			this->btnContarPorFreguesia->Size = System::Drawing::Size(230, 30);
			this->btnContarPorFreguesia->TabIndex = 1;
			this->btnContarPorFreguesia->Text = L"Digite o Nome da Freguesia e Clique";
			this->btnContarPorFreguesia->UseVisualStyleBackColor = false;
			this->btnContarPorFreguesia->Click += gcnew System::EventHandler(this, &Form1::btnContarPorFreguesia_Click);
			// 
			// lstAuxiliar
			// 
			this->lstAuxiliar->BackColor = System::Drawing::Color::LightBlue;
			this->lstAuxiliar->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lstAuxiliar->FormattingEnabled = true;
			this->lstAuxiliar->Location = System::Drawing::Point(1057, 65);
			this->lstAuxiliar->Name = L"lstAuxiliar";
			this->lstAuxiliar->Size = System::Drawing::Size(163, 364);
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
			this->txtTotalFregueses->Location = System::Drawing::Point(157, 76);
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
			this->label2->Location = System::Drawing::Point(176, 62);
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
			this->btnMaisVelho->Location = System::Drawing::Point(9, 35);
			this->btnMaisVelho->Name = L"btnMaisVelho";
			this->btnMaisVelho->Size = System::Drawing::Size(108, 30);
			this->btnMaisVelho->TabIndex = 6;
			this->btnMaisVelho->Text = L"Aluno + Velho";
			this->btnMaisVelho->UseVisualStyleBackColor = false;
			this->btnMaisVelho->Click += gcnew System::EventHandler(this, &Form1::btnMaisVelho_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Location = System::Drawing::Point(32, 4);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(173, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Residência dos Alunos";
			// 
			// btnMaisNovo
			// 
			this->btnMaisNovo->BackColor = System::Drawing::Color::SteelBlue;
			this->btnMaisNovo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMaisNovo->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnMaisNovo->Location = System::Drawing::Point(128, 35);
			this->btnMaisNovo->Name = L"btnMaisNovo";
			this->btnMaisNovo->Size = System::Drawing::Size(107, 30);
			this->btnMaisNovo->TabIndex = 9;
			this->btnMaisNovo->Text = L"Aluno + Novo";
			this->btnMaisNovo->UseVisualStyleBackColor = false;
			this->btnMaisNovo->Click += gcnew System::EventHandler(this, &Form1::btnMaisNovo_Click);
			// 
			// txtIdadeAluno
			// 
			this->txtIdadeAluno->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtIdadeAluno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIdadeAluno->Location = System::Drawing::Point(179, 84);
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
			this->txtNomeAluno->Size = System::Drawing::Size(155, 16);
			this->txtNomeAluno->TabIndex = 7;
			this->txtNomeAluno->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(190, 71);
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
			this->label6->Text = L"Diferença de Idades";
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
			this->btnMulheres->Location = System::Drawing::Point(128, 30);
			this->btnMulheres->Name = L"btnMulheres";
			this->btnMulheres->Size = System::Drawing::Size(109, 30);
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
			this->btnHomens->Location = System::Drawing::Point(9, 30);
			this->btnHomens->Name = L"btnHomens";
			this->btnHomens->Size = System::Drawing::Size(108, 30);
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
			this->label7->Location = System::Drawing::Point(14, 4);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(221, 17);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Listagem Homens e Mulheres";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button2);
			this->groupBox4->Controls->Add(this->button1);
			this->groupBox4->Controls->Add(this->panel7);
			this->groupBox4->Controls->Add(this->panel6);
			this->groupBox4->Controls->Add(this->panel5);
			this->groupBox4->Controls->Add(this->btnLimparLista);
			this->groupBox4->Controls->Add(this->panel4);
			this->groupBox4->Controls->Add(this->panel3);
			this->groupBox4->Controls->Add(this->panel2);
			this->groupBox4->Controls->Add(this->panel1);
			this->groupBox4->Controls->Add(this->lstAuxiliar);
			this->groupBox4->Controls->Add(this->dgvPauta);
			this->groupBox4->Location = System::Drawing::Point(12, 12);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(1231, 677);
			this->groupBox4->TabIndex = 10;
			this->groupBox4->TabStop = false;
			this->groupBox4->Enter += gcnew System::EventHandler(this, &Form1::groupBox4_Enter);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::LightBlue;
			this->panel7->Controls->Add(this->btnNegativas);
			this->panel7->Location = System::Drawing::Point(1057, 477);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(163, 95);
			this->panel7->TabIndex = 17;
			// 
			// btnNegativas
			// 
			this->btnNegativas->BackColor = System::Drawing::Color::SteelBlue;
			this->btnNegativas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNegativas->ForeColor = System::Drawing::Color::White;
			this->btnNegativas->Location = System::Drawing::Point(34, 12);
			this->btnNegativas->Name = L"btnNegativas";
			this->btnNegativas->Size = System::Drawing::Size(99, 23);
			this->btnNegativas->TabIndex = 0;
			this->btnNegativas->Text = L"Ver Negativas";
			this->btnNegativas->UseVisualStyleBackColor = false;
			this->btnNegativas->Click += gcnew System::EventHandler(this, &Form1::btnNegativas_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::LightBlue;
			this->panel6->Controls->Add(this->btnLimparGrid);
			this->panel6->Controls->Add(this->btnGerarNotas);
			this->panel6->Controls->Add(this->btnConfigurarGrid);
			this->panel6->Controls->Add(this->btnPreencherGrid);
			this->panel6->Controls->Add(this->label10);
			this->panel6->Location = System::Drawing::Point(800, 477);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(246, 95);
			this->panel6->TabIndex = 16;
			// 
			// btnLimparGrid
			// 
			this->btnLimparGrid->BackColor = System::Drawing::Color::SteelBlue;
			this->btnLimparGrid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLimparGrid->ForeColor = System::Drawing::Color::White;
			this->btnLimparGrid->Location = System::Drawing::Point(128, 58);
			this->btnLimparGrid->Name = L"btnLimparGrid";
			this->btnLimparGrid->Size = System::Drawing::Size(109, 30);
			this->btnLimparGrid->TabIndex = 7;
			this->btnLimparGrid->Text = L"Limpar Grid";
			this->btnLimparGrid->UseVisualStyleBackColor = false;
			this->btnLimparGrid->Click += gcnew System::EventHandler(this, &Form1::btnLimparGrid_Click);
			// 
			// btnGerarNotas
			// 
			this->btnGerarNotas->BackColor = System::Drawing::Color::SteelBlue;
			this->btnGerarNotas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGerarNotas->ForeColor = System::Drawing::Color::White;
			this->btnGerarNotas->Location = System::Drawing::Point(9, 58);
			this->btnGerarNotas->Name = L"btnGerarNotas";
			this->btnGerarNotas->Size = System::Drawing::Size(108, 30);
			this->btnGerarNotas->TabIndex = 6;
			this->btnGerarNotas->Text = L"Gerar Notas";
			this->btnGerarNotas->UseVisualStyleBackColor = false;
			this->btnGerarNotas->Click += gcnew System::EventHandler(this, &Form1::btnGerarNotas_Click);
			// 
			// btnConfigurarGrid
			// 
			this->btnConfigurarGrid->BackColor = System::Drawing::Color::SteelBlue;
			this->btnConfigurarGrid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConfigurarGrid->ForeColor = System::Drawing::Color::White;
			this->btnConfigurarGrid->Location = System::Drawing::Point(128, 24);
			this->btnConfigurarGrid->Name = L"btnConfigurarGrid";
			this->btnConfigurarGrid->Size = System::Drawing::Size(109, 30);
			this->btnConfigurarGrid->TabIndex = 1;
			this->btnConfigurarGrid->Text = L"Configurar Grid";
			this->btnConfigurarGrid->UseVisualStyleBackColor = false;
			this->btnConfigurarGrid->Click += gcnew System::EventHandler(this, &Form1::btnConfigurarGrid_Click);
			// 
			// btnPreencherGrid
			// 
			this->btnPreencherGrid->BackColor = System::Drawing::Color::SteelBlue;
			this->btnPreencherGrid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPreencherGrid->ForeColor = System::Drawing::Color::White;
			this->btnPreencherGrid->Location = System::Drawing::Point(9, 24);
			this->btnPreencherGrid->Name = L"btnPreencherGrid";
			this->btnPreencherGrid->Size = System::Drawing::Size(109, 30);
			this->btnPreencherGrid->TabIndex = 0;
			this->btnPreencherGrid->Text = L"Preencher Grid";
			this->btnPreencherGrid->UseVisualStyleBackColor = false;
			this->btnPreencherGrid->Click += gcnew System::EventHandler(this, &Form1::btnPreencherGrid_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label10->Location = System::Drawing::Point(2, 3);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(242, 17);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Preenchimento da DataGridView";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::LightBlue;
			this->panel5->Controls->Add(this->btnDesabilitarGrid);
			this->panel5->Controls->Add(this->btnAbilitarGrid);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Location = System::Drawing::Point(800, 393);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(246, 72);
			this->panel5->TabIndex = 15;
			// 
			// btnDesabilitarGrid
			// 
			this->btnDesabilitarGrid->BackColor = System::Drawing::Color::SteelBlue;
			this->btnDesabilitarGrid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDesabilitarGrid->ForeColor = System::Drawing::Color::White;
			this->btnDesabilitarGrid->Location = System::Drawing::Point(128, 30);
			this->btnDesabilitarGrid->Name = L"btnDesabilitarGrid";
			this->btnDesabilitarGrid->Size = System::Drawing::Size(109, 30);
			this->btnDesabilitarGrid->TabIndex = 1;
			this->btnDesabilitarGrid->Text = L"Desativar Grid";
			this->btnDesabilitarGrid->UseVisualStyleBackColor = false;
			this->btnDesabilitarGrid->Click += gcnew System::EventHandler(this, &Form1::btnDesabilitarGrid_Click);
			// 
			// btnAbilitarGrid
			// 
			this->btnAbilitarGrid->BackColor = System::Drawing::Color::SteelBlue;
			this->btnAbilitarGrid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAbilitarGrid->ForeColor = System::Drawing::Color::White;
			this->btnAbilitarGrid->Location = System::Drawing::Point(9, 30);
			this->btnAbilitarGrid->Name = L"btnAbilitarGrid";
			this->btnAbilitarGrid->Size = System::Drawing::Size(108, 30);
			this->btnAbilitarGrid->TabIndex = 0;
			this->btnAbilitarGrid->Text = L"Ativar Grid";
			this->btnAbilitarGrid->UseVisualStyleBackColor = false;
			this->btnAbilitarGrid->Click += gcnew System::EventHandler(this, &Form1::btnAbilitarGrid_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label9->Location = System::Drawing::Point(21, 4);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(203, 17);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Controlos da DataGridView";
			// 
			// btnLimparLista
			// 
			this->btnLimparLista->BackColor = System::Drawing::Color::SteelBlue;
			this->btnLimparLista->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLimparLista->ForeColor = System::Drawing::Color::White;
			this->btnLimparLista->Location = System::Drawing::Point(1057, 435);
			this->btnLimparLista->Name = L"btnLimparLista";
			this->btnLimparLista->Size = System::Drawing::Size(163, 30);
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
			this->panel4->Size = System::Drawing::Size(1205, 37);
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
			this->panel3->Location = System::Drawing::Point(800, 65);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(246, 105);
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
			this->panel2->Location = System::Drawing::Point(800, 181);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(246, 117);
			this->panel2->TabIndex = 11;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightBlue;
			this->panel1->Controls->Add(this->btnMulheres);
			this->panel1->Controls->Add(this->btnHomens);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Location = System::Drawing::Point(800, 309);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(246, 72);
			this->panel1->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(420, 383);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 18;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(431, 429);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 19;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1255, 701);
			this->Controls->Add(this->groupBox4);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Projeto Alfa - Domingos Ribeiro";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPauta))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
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
		//Programa criado no ambito do módulo C++ do curso de Programação
		//Autor: Domingos Ribeiro
		//Data: 12-01-2021

	
	private: System::Void btnContarPorFreguesia_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		/*Contar quantas pessoas existem na Freguesia digitada na caixa de texto em baixo*/

		//A variável "total" é iniciaizada a zero
		int total = 0;
		
		//A variável "localizar" conta o número de linhas menos a ultima "-1"
		int localizar = dgvPauta->Rows->Count - 1;

		//O ciclo FOR percorre todas as linhas e conta os números da segunda coluna "Cells [1]"
		//Ou seja, conta os nomes da segunda coluna de cada linha e adiciona à variável "total"
		for (size_t i = 0; i < localizar; i++)
		{
			if (txtFreguesia->Text == Convert::ToString(dgvPauta->Rows[i]->Cells[1]->Value))
			{
				total++;
			}

		}

		//Depois de terminado o Ciclo, o valor da variável "total" passa para a textBox "txtTotalFregueses"
		//Neste caso o ciclo IF só verifica se a palavra Aluno será apresentada no Singular ou Plural
		if (total == 1)
		{
			txtTotalFregueses->Text = Convert::ToString(total) + " Aluno";
		}
		else
		{
			txtTotalFregueses->Text = Convert::ToString(total) + " Alunos";
		}
		
		
	}
private: System::Void btnHomens_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	//Enviar para a ListBox uma lista de todos os Homens da Turma 20 B


	//A variável "localizar" conta o número de linhas menos a ultima "-1"
	int localizar = dgvPauta->Rows->Count - 1;

	//O ciclo FOR percorre todas as linhas e verifica se existe a letra "M" na última coluna "Cells [3]"
	for (size_t i = 0; i < localizar; i++)
	{
		//Se encontrar a letra M
		if ("M" == dgvPauta->Rows[i]->Cells[3]->Value)
		{
			//Adiciona os dados que estão na coluna zero, neste caso o nome do aluno
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
	//Instruções identicas ao botão HOMENS, apenas trocamos para a letra F
	int localizar = dgvPauta->Rows->Count - 1;

	for (size_t i = 0; i < localizar; i++)
	{
		if ("F" == dgvPauta->Rows[i]->Cells[3]->Value)
		{
			lstAuxiliar->Items->Add(dgvPauta->Rows[i]->Cells[0]->Value);
		}

	}
	}
private: System::Void btnMaisVelho_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//Verificar quem é o aluno mais velho, ou seja, o ano MENOR

	//Vamos assumir que o ano mais pequeno é o que está na primeira linha
	int anoMenor = Convert::ToInt16(dgvPauta->Rows[0]->Cells[2]->Value);
	String^ nome = "";

	for (size_t i = 1; i < dgvPauta->Rows->Count - 1; i++)
	{
		if (anoMenor > Convert::ToInt16(dgvPauta->Rows[i]->Cells[2]->Value))
		{
			anoMenor = Convert::ToInt16(dgvPauta->Rows[i]->Cells[2]->Value);
			nome = Convert::ToString(dgvPauta->Rows[i]->Cells[0]->Value);
		}
	}
		txtNomeAluno->Text = nome;
		txtIdadeAluno->Text = Convert::ToString(2021 - anoMenor) + " Anos";
	
	}
private: System::Void btnMaisNovo_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	int maisNovo = Convert::ToInt16(dgvPauta->Rows[0]->Cells[2]->Value);
	String^ nome = "";
	int contagem = 0;

	for (size_t i = 0; i < dgvPauta->Rows->Count - 1; i++)
	{
		if (maisNovo >= 1) 
		{
			contagem = contagem + 1;
			
		}
	}
	MessageBox::Show(Convert::ToString(contagem));

	//lstAuxiliar->Items->Add(nome + " -" + Convert::ToString(2021 - maisNovo) + " Anos");


	}
	  
private: System::Void btnAbilitarGrid_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		dgvPauta->RowHeadersVisible = true;
		dgvPauta->AllowUserToAddRows = true;
	}
private: System::Void btnDesabilitarGrid_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	dgvPauta->RowHeadersVisible = false;
	dgvPauta->AllowUserToAddRows = false;
	}
private: System::Void groupBox4_Enter(System::Object^ sender, System::EventArgs^ e) 
{
}

	   private: void IniciarNomesGrid()
	   {
		   dgvPauta->Rows->Clear();

		   dgvPauta->Rows->Add("Ana Rita Cunha", "Maximinos", 1998, "F");
		   dgvPauta->Rows->Add("Bela Costa Silva", "Lomar", 2002, "F");
		   dgvPauta->Rows->Add("Carlos Alberto Costa", "Sequeira", 1999, "M");
		   dgvPauta->Rows->Add("Carlos Daniel Ferreira", "Sequeira", 2001, "M");
		   dgvPauta->Rows->Add("Daniel Bastos Gomes", "Lovios", 1998, "M");
		   dgvPauta->Rows->Add("Daniel Silva Ferraz", "S. Vítor", 1999, "M");
		   dgvPauta->Rows->Add("Elvira Gomes Pendes", "Maximinos", 2001, "F");
		   dgvPauta->Rows->Add("Fernanda Maria Silva", "S. Vítor", 2002, "F");
		   dgvPauta->Rows->Add("Fernando Gomes Barros", "Maximinos", 1999, "M");
		   dgvPauta->Rows->Add("Gilherme Alexandre Barros", "Lamaçães", 2001, "M");
		   dgvPauta->Rows->Add("Hilda Fonseca Silva", "S. Geraldo", 1999, "F");
		   dgvPauta->Rows->Add("José Manuel Carvalho", "Gualtar", 1997, "M");
		   dgvPauta->Rows->Add("José Alberto Gomes", "Maximinos", 2001, "M");
		   dgvPauta->Rows->Add("Maria Silvéria Bastos", "Maximinos", 1997, "F");
		   dgvPauta->Rows->Add("Anabela Bastos Torres", "S. Vítor", 1996, "F");
		   dgvPauta->Rows->Add("Rui Vasco Santos", "Maximinos", 2002, "M");
		   dgvPauta->Rows->Add("Otávio Ferreira", "Maximinos", 1999, "M");
		   dgvPauta->Rows->Add("Silvério Silva Teixeira", "Lamaçães", 2001, "M");
		   dgvPauta->Rows->Add("Teodoro Armando Matos", "Maximinos", 2002, "M");
		   dgvPauta->Rows->Add("Zacarias Alexandre Sampaio", "Ferreiros", 1998, "M");

		   //Acrescentar colunas

		   dgvPauta->ColumnCount = 15;
		   //criar a coluna 5:
		   dgvPauta->Columns[4]->Name = "d1";
		   //definir o cabeçalho para a coluna 6:
		   dgvPauta->Columns[4]->HeaderText = "Por";
		   dgvPauta->Columns[5]->Name = "d2"; dgvPauta->Columns[5]->HeaderText = "Ing";
		   dgvPauta->Columns[6]->Name = "d3"; dgvPauta->Columns[6]->HeaderText = "Fil";
		   dgvPauta->Columns[7]->Name = "d4"; dgvPauta->Columns[7]->HeaderText = "Mat";
		   dgvPauta->Columns[8]->Name = "d5"; dgvPauta->Columns[8]->HeaderText = "Fís";
		   dgvPauta->Columns[9]->Name = "d6"; dgvPauta->Columns[9]->HeaderText = "Quí";
		   dgvPauta->Columns[10]->Name = "d7"; dgvPauta->Columns[10]->HeaderText = "Geo";
		   dgvPauta->Columns[11]->Name = "d8"; dgvPauta->Columns[11]->HeaderText = "His";
		   dgvPauta->Columns[12]->Name = "d9"; dgvPauta->Columns[12]->HeaderText = "EF";
		   dgvPauta->Columns[13]->Name = "d10"; dgvPauta->Columns[13]->HeaderText = "Mor";
		   dgvPauta->Columns[14]->Name = "d11"; dgvPauta->Columns[14]->HeaderText = "Neg";

	   }

			private: void ConfigurarGrid()
			{
				//Centrar coluna "Sexo"
				dgvPauta->Columns[3]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;

				//Centrar "Idade"
				dgvPauta->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;

				//Defenir a largura das colunas das disciplinas ou cadeiras
				for (int i = 4; i < 14; i++)
				{
					dgvPauta->Columns[i]->Width = 34;
				}

				//Idade 
				dgvPauta->Columns[2]->Width = 40;

				//sexo
				dgvPauta->Columns[3]->Width = 40;

				//nome
				dgvPauta->Columns[0]->Width = 142;

				//freguesia
				dgvPauta->Columns[1]->Width = 77;

				//Negativas
				dgvPauta->Rows[0]->Cells[14]->Style->ForeColor = Color::Red;
				dgvPauta->Columns[14]->Width = 34;
			}


private: System::Void btnPreencherGrid_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		IniciarNomesGrid();
	}
private: System::Void btnConfigurarGrid_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		ConfigurarGrid();
	}
private: System::Void btnLimparGrid_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		dgvPauta->Rows->Clear();
	}

private: int gerarValor()
{
	/// Método para gerar valores aleatórios entre 6 e 20

	Random^ valor = gcnew Random();
	int notas = 0;

	for (int i = 0; i < 999999; i++)
	{
		/*O processador irá perder aqui alguns milesegundos
		A ideia é melhorar a geração de números aleatórios*/
	}

	//Intervalo das notas
	notas = valor->Next(6, 21);

	if (notas > 10 )
	{
		notas = valor->Next(6, 21);
	}
	return notas;
}

private: System::Void btnGerarNotas_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	int nLinhas = dgvPauta->RowCount - 1;
	for (size_t i = 0; i < nLinhas; i++) //Percorre as linhas
	{
		for (size_t j = 4; j < 14; j++) //Percorre as colunas
		{
			dgvPauta->Rows[i]->Cells[j]->Value = gerarValor();
		}
	}

	
	}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnNegativas_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	//int negativas = 0;

	//for (size_t i = 0; i < dgvPauta->Rows->Count - 1; i++) //Percorre as linhas
	//{
	//	if (dgvPauta->Rows[i]->Cells[j])
	//	{
	//
	//	}
	//}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
