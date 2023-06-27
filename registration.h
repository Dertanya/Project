#pragma once
#include <Windows.h>
#include <locale>
#include <ctime>
#include "Class.h"
namespace SamsonovLr14KB24TxPrZS {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для registration
	/// </summary>
	public ref class registration : public System::Windows::Forms::Form
	{
	public:
		registration(void)
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
		~registration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label5;
	protected:



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(registration::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(230, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Реєстрація";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(457, 151);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(31, 22);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 27;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &registration::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(457, 151);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(31, 22);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 26;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &registration::pictureBox2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(279, 151);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(149, 22);
			this->textBox2->TabIndex = 25;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(279, 104);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(149, 22);
			this->textBox1->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(120, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 20);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Введіть пароль:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(138, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 20);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Введіть логін:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(279, 194);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(149, 22);
			this->textBox3->TabIndex = 29;
			this->textBox3->UseSystemPasswordChar = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(101, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(166, 20);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Повторіть пароль:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(174, 273);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(213, 45);
			this->button1->TabIndex = 30;
			this->button1->Text = L"Зареєструватися";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &registration::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(180, 284);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(38, 25);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 31;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label5->Location = System::Drawing::Point(101, 222);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(235, 16);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Згенерувати пароль автоматично";
			this->label5->Click += gcnew System::EventHandler(this, &registration::label5_Click);
			// 
			// registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(583, 368);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"registration";
			this->Text = L"Registration";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool isLoginAvailable(const std::string& login)
		{
			ifstream file("Data.txt"); // Назва файлу з логінами та паролями
			string line;

			while (getline(file, line))
			{
				string savedLogin = line.substr(0, line.find(' ')); // Виділення логіна з рядка

				if (savedLogin == login)
				{
					file.close();
					return false; // Логін уже існує у файлі
				}
			}
			file.close();
			return true; // Логін доступний
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*об'єкт класу locale з іменем loc2 зі спеціальними параметрами, що задають локалізацію англійської мови з кодуванням UTF-8.*/
		locale loc2("en_US.UTF8");
		Registration object;
		if (textBox1->Text->Length < 8 || textBox2->Text->Length < 8)
		{
			MessageBox::Show("Логін і пароль має містити більше 7 символів!", "Дані", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			// Отримати введений текст
			String^ login = textBox1->Text;
			String^ password = textBox2->Text;
			// Конвертуємо логін та пароль в рядки типу string
			string loginStr = msclr::interop::marshal_as<string>(login);
			string passwordStr = msclr::interop::marshal_as<string>(password);
			if (login == password || textBox2->Text != textBox3->Text)
			{
				MessageBox::Show("Перевірте, щоб паролі співпадали й логін відрізнявся від них!", "Дані", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (!isLoginAvailable(loginStr))
			{
				MessageBox::Show("Цей логін вже зайнятий. Спробуйте інший.","Логін", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				bool isLoginValid = true;
			    bool isPasswordValid = true;
				object.checkLoginPassword(login, password, isLoginValid, isPasswordValid);
				if (isLoginValid && isPasswordValid) {
					MessageBox::Show("Регістрація відбулася успішно", "Регістрація", MessageBoxButtons::OK, MessageBoxIcon::Information);
					// Шифруємо пароль
					int key = 42;
					string encrypted_password = object.encrypt(passwordStr,key);
					object.saveDataToFile(loginStr, encrypted_password);
					DateTime currentDate = DateTime::Now;  // Отримати поточну дату і час
					string registrationDate = object.GetCurrentDateAsString();
					ofstream file("Registration_data.txt", std::ios::app);
					if (file.is_open())
					{
						file << registrationDate << endl;
						file.close();
					}
					Close();
				}
				// Перевірка результатів умовних операцій
				if (!isLoginValid) {
					MessageBox::Show("Логін має містити виключно англійські літери й хоча б: 1 велику, 1 маленьку й 1 цифру", "Логін", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
				if (!isPasswordValid) {
					MessageBox::Show("Пароль має містити, хоча б: 1 велику, 1 маленьку, 1 цифру й 1 спец-символ. Тільки англійська мова", "Пароль", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
			}
		}
	}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Visible = false;
	pictureBox2->Visible = true;
	textBox2->UseSystemPasswordChar = false;
	textBox3->UseSystemPasswordChar = false;
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox2->Visible = false;
	pictureBox3->Visible = true;
	textBox2->UseSystemPasswordChar = true;
	textBox3->UseSystemPasswordChar = true;
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	Registration object;
	/*очищення тексту в textBox2*/
	textBox2->Text = "";
	textBox3->Text = "";
	srand(time(0));//Використовуємо для того, щоб генерувати з кожним запуском різні числа
	for (int i = 0; i < rand() % 121 + 8; i++)//цикл для написання паролей заданої довжини
	{
		int Xint = object.generateRandomPassword();
		textBox2->Text += System::Convert::ToChar(Xint);//Перетворюємо число в символ та виводимо//
		textBox3->Text += System::Convert::ToChar(Xint);//Перетворюємо число в символ та виводимо//
	}
}

};
}
