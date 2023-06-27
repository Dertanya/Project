#pragma once
#include <regex> // Для використання регулярних виразів
#include <msclr/marshal_cppstd.h>
#include <fstream>
#include <vector>
#include <sstream>
#include <ctime>
namespace SamsonovLr14KB24TxPrZS {
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace std;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Find_team
	/// </summary>


	public ref class Find_team : public System::Windows::Forms::Form
	{
	public:
		Find_team(void)
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
		~Find_team()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;

	private: System::Windows::Forms::TabPage^ tabPage3;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;
	public: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::Label^ label11;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1358, 453);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1350, 424);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Профіль";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(479, 31);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 16);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Login";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(727, 296);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(121, 22);
			this->textBox5->TabIndex = 15;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Find_team::textBox5_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Gray;
			this->label9->Location = System::Drawing::Point(457, 339);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(108, 19);
			this->label9->TabIndex = 14;
			this->label9->Text = L"* - обов\'язково";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(458, 302);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(131, 16);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Загальне питання*";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Maroon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(727, 339);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 47);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Зберегти дані";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Find_team::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(458, 265);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 16);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Рівень faceit";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(458, 215);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 16);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Ранг у грі*";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"CS:GO", L"Dota2" });
			this->comboBox1->Location = System::Drawing::Point(727, 60);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Find_team::comboBox1_SelectedIndexChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(727, 259);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 22);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Find_team::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(727, 209);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(121, 22);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Find_team::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(727, 158);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Find_team::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(727, 113);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Find_team::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(458, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(205, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Загальна кількість годин у грі*";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(458, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 16);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Дискорд нікнейм*";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(458, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(245, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"В якій грі ви хочете знайти команду*";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Navy;
			this->label1->Location = System::Drawing::Point(87, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(213, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Заповніть анкету!";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tabControl2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1350, 424);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Інші користувачі";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Location = System::Drawing::Point(3, 3);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(1351, 421);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->dataGridView1);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1343, 392);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"CS:GO";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1114, 392);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Login";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 130;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Hours";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 130;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Discord";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 130;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Rank";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 130;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Faceit";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 130;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"MM";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 130;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->dataGridView2);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1343, 392);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"DOTA 2";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column7,
					this->Column8, this->Column9, this->Column10, this->Column11, this->Column12
			});
			this->dataGridView2->Location = System::Drawing::Point(6, 6);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(1114, 383);
			this->dataGridView2->TabIndex = 0;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Login";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 130;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Hours";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 130;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Discord";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 130;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Rank";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 130;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Faceit";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->Width = 130;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"MMR";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			this->Column12->Width = 130;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Controls->Add(this->chart1);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1350, 424);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Активність використання програми";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::Lime;
			this->label11->Location = System::Drawing::Point(528, 340);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 18);
			this->label11->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(37, 338);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(419, 18);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Кількість зареєстрованих користувачів за весь час:";
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(6, 3);
			this->chart1->Name = L"chart1";
			series3->BorderWidth = 2;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"Кількість зареєстрованих";
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(870, 290);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// Find_team
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1382, 471);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Find_team";
			this->Text = L"Find_team";
			this->Load += gcnew System::EventHandler(this, &Find_team::Find_team_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void SaveDataToFile(string login, string typegame, int hours, string discord, string rank, int faceitLevel, string question)
		{
			ofstream file("Forms.txt", std::ios::app);  // Відкриваємо файл у режимі додавання (append mode)

			if (file.is_open())
			{
				// Записуємо дані у файл
				file << login << " " << typegame << " " << hours << " " << discord << " " << rank << " " << faceitLevel << " " << question << endl;

				file.close();
			}
		}
		
		void ProcessDatesAndBuildChart(string filename)
		{
			int registrationsByDate[31];

			// Читання дат з файлу та обрахунок кількості
			ifstream file(filename);
			string line;
			int totalDates = 0;

			if (file.is_open())
			{
				while (getline(file, line))
				{
					string dateStr;
					stringstream ss(line);
					getline(ss, dateStr, '.');
					totalDates++;

					int day = stoi(dateStr);
					if (day >= 1 && day <= 31)
					{
						registrationsByDate[day - 1]++;
					}
				}
				label11->Text = Convert::ToString(totalDates);
				file.close();
			}

			// Виведення графіка на Chart1
			chart1->Series[0]->Points->Clear();
			for (int i = 0; i < 31; i++)
			{
				chart1->Series[0]->Points->AddXY(i + 1, registrationsByDate[i]);
			}
		}
		bool CheckLoginExists(string login, int& linenumber)
		{
			ifstream file("Forms.txt");
			string line;
			while (getline(file, line))
			{
				// Знайти перше входження пробілу
				size_t spacePos = line.find(' ');
				// Витягнути перше слово (логін) з рядка
				string savedLogin = line.substr(0, spacePos);
				// Перевірити, чи співпадає логін з введеним значенням
				if (login == savedLogin)
				{
					file.close();
					return true; // Логін знайдено
				}
				linenumber++; // Змінна для збереження номера рядка
			}
			file.close();
			return false; // Логін не знайдено
		}
		vector<vector<string>> ReadDataFromFile()
		{
			vector<vector<string>> data;

			ifstream file("Forms.txt");
			string line;

			while (getline(file, line))
			{
				vector<string> rowData;

				istringstream iss(line);
				string item;

				while (getline(iss, item, ' '))
				{
					rowData.push_back(item);
				}

				data.push_back(rowData);
			}

			file.close();
			return data;
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		bool textBoxes[] = { textBox1->Text != "",textBox2->Text != "",textBox3->Text != "",textBox4->Text != "",textBox5->Text != "" };
		double count = 0, amount =0;
		for (int i = 0; i < 5; i++)
		{
			if (textBoxes[i])
			{
				count++;
			}
		}
		if (comboBox1->SelectedIndex != -1 && count >= 4)
		{
			try{
				bool one=false, two=false, three=false, four=false;
				bool valid[4];
				int inputValue = Convert::ToInt32(textBox1->Text);
				if (inputValue > 0 && inputValue < 50000)
				{
					one = true;
				}
				else {
					throw gcnew Exception("Введіть реальне значення годин");
					textBox1->BackColor = Color::Red;
				}
				String^ discord = textBox2->Text;
				// Використовуємо регулярний вираз для перевірки шаблону Discord ніка
				String^ pattern = "^.+#\\d{4}$";
				regex regexToMatch(msclr::interop::marshal_as<string>(pattern));
				string discordStr = msclr::interop::marshal_as<string>(discord);
				if (regex_match(discordStr, regexToMatch))
				{
					two = true;
				}
				else{
					throw gcnew Exception("Введіть ваш нікнейм дискорда з #\nПриклад: Nickname#1234");
					textBox2->BackColor = Color::Red;
				}
				String^ rank = Convert::ToString(textBox3->Text);
				if (textBox4->Text == "")
				{
					textBox4->Text = "0";
				}
				int lvl = Convert::ToDouble(textBox4->Text);
				if (lvl>=0 && lvl <=10)
				{
					three = true;
					int number = Convert::ToInt32(lvl);
				}
				else {
					throw gcnew Exception("Рівень фейсіта це значення від 0 до 10");
					textBox4->BackColor = Color::Red;
				}
				if (comboBox1->SelectedIndex == 0)
				{
					String^ title = Convert::ToString(textBox5->Text);
					four = true;
				}
				if (comboBox1->SelectedIndex == 1)
				{
					int MMR = Convert::ToInt32(textBox5->Text);
					if (MMR > 0 && MMR < 12000)
					{
						four = true;
					}
					else {
						throw gcnew Exception("Введіть справжнє значення MMR");
						textBox5->BackColor = Color::Red;
					}
				}
				valid[0] = one;
				valid[1] = two;
				valid[2] = three;
				valid[3] = four;
				for (int i = 0; i < 4; i++)
				{
					if (valid[i])
					{
						amount++;
					}
				}
				if (amount >=3)
				{
					label1->Visible = false;
					MessageBox::Show("Ви успішно заповнили анкету!", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
					// Конвертуємо значення з типу System::String^ до std::string
					string gameType = msclr::interop::marshal_as<string>(comboBox1->SelectedItem->ToString());
					string rankStr = msclr::interop::marshal_as<string>(rank);
					string question = msclr::interop::marshal_as<string>(textBox5->Text);
					string loginStr = msclr::interop::marshal_as<string>(label10->Text);
					SaveDataToFile(loginStr, gameType,inputValue, discordStr, rankStr, lvl, question);
					button1->Enabled = false;
					tabPage2->Enabled = true;
					tabPage3->Enabled = true;
					tabControl1->SelectedTab = tabPage2;
				}
			}
			catch (FormatException^ ex)
			{
				// Виведення повідомлення про помилку
				MessageBox::Show("Неправильний формат даних.", "Помилка",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			catch (OverflowException^ ex)
			{
				// Виведення повідомлення про помилку
				MessageBox::Show("Результат переповнює тип даних.", "Помилка",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			catch (Exception^ ex) {
				// показуємо повідомлення про будь-яку іншу помилку
				MessageBox::Show(ex->Message);
			}

		}
		else {
			MessageBox::Show("Заповніть усі обов'язкові поля!", "Анкета", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox2->BackColor = Color::White; 
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox3->BackColor = Color::White;
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox4->BackColor = Color::White;
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox5->BackColor = Color::White;
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox5->BackColor = Color::White;
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox1->SelectedIndex == 0)
	{
		label8->Text = "Звання у ММ*";
	}
	if (comboBox1->SelectedIndex == 1)
	{
		label8->Text = "Кількість ММР*";
	}
}
private: System::Void Find_team_Load(System::Object^ sender, System::EventArgs^ e) {
	try {
		tabPage2->Enabled = false;
		tabPage3->Enabled = false;
		string loginStr = msclr::interop::marshal_as<string>(label10->Text);
		String^ Cs = "CS:GO";
		String^ dota = "Dota2";
		vector<vector<string>> data = ReadDataFromFile();
		int lineNumber = 0; // Змінна для збереження номера рядка
		int CSTotal = 0;
		int DOTATotal = 0;
		if (CheckLoginExists(loginStr, lineNumber))
		{
			comboBox1->SelectedItem = gcnew String(data[lineNumber][1].c_str());
			// Заповнення TextBoxes
			textBox1->Text = gcnew String(data[lineNumber][2].c_str()); // hours
			textBox2->Text = gcnew String(data[lineNumber][3].c_str()); // discord
			textBox3->Text = gcnew String(data[lineNumber][4].c_str()); // rank
			textBox4->Text = gcnew String(data[lineNumber][5].c_str()); // lvl
			textBox5->Text = gcnew String(data[lineNumber][6].c_str()); // question
			label1->Visible = false;
			button1->Visible = false;
			tabPage2->Enabled = true;
			tabPage3->Enabled = true;
		}
		if (!data.empty())
		{
			for (int i = 0; i < data.size(); i++)
			{
				if (Cs == gcnew String(data[i][1].c_str()))
				{
					dataGridView1->Rows->Add();
					CSTotal++;
					for (int j = 0; j < data[i].size(); j++)
					{
						if (j == 0)
						{
							dataGridView1->Rows[i- DOTATotal]->Cells[j]->Value = gcnew String(data[i][j].c_str());
						}
						if (j > 1)
						{
							dataGridView1->Rows[i-DOTATotal]->Cells[j-1]->Value = gcnew String(data[i][j].c_str());
						}
					}
				}
				if (dota == gcnew String(data[i][1].c_str()))
				{
					DOTATotal++;
					dataGridView2->Rows->Add();
					for (int j = 0; j < data[i].size(); j++)
					{
						if (j == 0)
						{
							dataGridView2->Rows[i-CSTotal]->Cells[j]->Value = gcnew String(data[i][j].c_str());
						}
						if (j > 1)
						{
							dataGridView2->Rows[i- CSTotal]->Cells[j - 1]->Value = gcnew String(data[i][j].c_str());
						}
					}
				}
			}
		}
		ProcessDatesAndBuildChart("Registration_data.txt");
	}
	catch (IndexOutOfRangeException^ e) {
		MessageBox::Show("Заданий індекс масиву не існує!", "Індекс", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (ArgumentOutOfRangeException^ ex)
	{
		MessageBox::Show("Ви вийшли за межі масиву", "Масив", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}

};
}
