#include "Class.h"
bool Registration::checkLoginPassword(String^ login, String^ password, bool& isLoginValid, bool& isPasswordValid) {
	/*створення булевих змінних*/
	bool has_digit = false;
	bool has_uppercase = false;
	bool has_only_english = true;

	// Перевірка, чи містить рядкова змінна мінімум одну цифру, одну велику літеру, один спецсимвол, має містити тільки літери англійського алфавіту 
	for each (wchar_t c in login) {
		if (isdigit(c)) {
			has_digit = true;
		}
		else if (isupper(c)) {
			has_uppercase = true;
		}
		else if (!isalpha(c))
		{
			has_only_english = false;
		}
	};
	/*створення булевих змінних*/
	bool Big_letter = false;
	bool Number = false;
	bool Special_char = false;
	bool Only_English = true;
	// Перевірка, чи містить рядкова змінна мінімум одну цифру, одну велику літеру, один спецсимвол, має містити тільки літери англійського алфавіту
	for each (wchar_t f in password) {
		if (isdigit(f)) {
			Number = true;
		}
		else if (isupper(f)) {
			Big_letter = true;
		}
		else if (ispunct(f)) {
			Special_char = true;
		}
		else if (!isalpha(f))
		{
			Only_English = false;
		}
	};
	int count = 0;
	//створення булевого масиву
	bool vars[] = { Big_letter, Number, Special_char };
	//перевірка на те, скільки елементів масиву true
	for (int i = 0; i < 3; i++) {
		if (vars[i]) {
			count++;
		}
	}
	if (count >= 2 && Only_English && has_digit && has_uppercase && has_only_english) {
		return true;
	}
	else {
		if (!(has_digit && has_uppercase && has_only_english))
		{
			isLoginValid = false;
		}
		if (!(count >= 2 && Only_English)) {
			isPasswordValid = false;
		}
		return false;
	}
}

void Registration::saveDataToFile(const string& login, const string& encrypted_password) {
	// Відкриваємо файл Save.txt для запису
	ofstream file("Data.txt", std::ios::app);
	// Перевіряємо, чи відкрився файл
	if (!file.is_open())
	{
		// Якщо файл не відкрився, виводимо повідомлення про помилку
		MessageBox::Show("Не вдалося відкрити файл", "Файл", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	// Записуємо зашифрований логін та пароль у файл Save.txt
	file << login << " ";
	file << encrypted_password << endl;
	// Закриваємо файл
	file.close();
}
int Registration::generateRandomPassword() {
	//ініцілізуємо змінні//
	double Xi, Xmin = 33, Xmax = 126, Ui;
	int i, Xint;
	Ui = (double)rand() / RAND_MAX;/*оскільки значення випадкових чисел буде від 0 до 1,
	то використовуємо double, щоб числа були з комою*/
	Xi = Xmin + (Xmax - Xmin) * Ui;
	return Xi;//Використовуємо Хint, щоб виділити цілу частину з числа Хі //
}
string Registration::encrypt(string text, int key) {
	std::string encrypted_text = "";
	for (char c : text) {
		if (isalpha(c)) {
			char base = islower(c) ? 'a' : 'A';
			char encrypted_char = ((c - base + key) % 26) + base;
			encrypted_text += encrypted_char;
		}
		else {
			encrypted_text += c;
		}
	}
	return encrypted_text;
}
bool Registration::checkDataFromFile(const std::string& login, const std::string& password)
{
	ifstream file("Data.txt");
	string storedLogin, storedPassword;

	while (file >> storedLogin >> storedPassword) {
		if (storedLogin == login && storedPassword == password) {
			file.close();
			return true;
		}
	}

	file.close();
	return false;
}
string Registration::GetCurrentDateAsString()
{
	time_t currentTime = time(nullptr);
	std::tm* localTime = localtime(&currentTime);

	char buffer[11]; // "dd.MM.yyyy\0" займає 11 символів
	strftime(buffer, sizeof(buffer), "%d.%m.%Y", localTime);

	return string(buffer);
}