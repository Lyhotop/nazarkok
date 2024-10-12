#pragma once
#include <msclr/marshal.h>
#include "SerialPort.h"
namespace client {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TestForm
	/// </summary>
	public ref class TestForm : public System::Windows::Forms::Form
	{
	public:
		
		TestForm(void)
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
		~TestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelSend;
	protected:


	private: System::Windows::Forms::Panel^ panelSend;
	private: System::Windows::Forms::Button^ buttonSend;


	private: System::Windows::Forms::ComboBox^ comboBoxComPort;

	private: System::Windows::Forms::TextBox^ textBoxSend;

	private: System::Windows::Forms::Panel^ panelReceive;

	private: System::Windows::Forms::TextBox^ textBoxReceive;
	private: System::Windows::Forms::Label^ labelReceive;



	protected:

	private:
		System::String^ selectedComPort;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TestForm::typeid));
			this->labelSend = (gcnew System::Windows::Forms::Label());
			this->panelSend = (gcnew System::Windows::Forms::Panel());
			this->buttonSend = (gcnew System::Windows::Forms::Button());
			this->comboBoxComPort = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxSend = (gcnew System::Windows::Forms::TextBox());
			this->panelReceive = (gcnew System::Windows::Forms::Panel());
			this->textBoxReceive = (gcnew System::Windows::Forms::TextBox());
			this->labelReceive = (gcnew System::Windows::Forms::Label());
			this->panelSend->SuspendLayout();
			this->panelReceive->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelSend
			// 
			this->labelSend->AutoSize = true;
			this->labelSend->BackColor = System::Drawing::Color::Transparent;
			this->labelSend->Font = (gcnew System::Drawing::Font(L"Georgia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSend->ForeColor = System::Drawing::Color::White;
			this->labelSend->Location = System::Drawing::Point(14, 18);
			this->labelSend->Name = L"labelSend";
			this->labelSend->Size = System::Drawing::Size(207, 27);
			this->labelSend->TabIndex = 1;
			this->labelSend->Text = L"Input the message:";
			// 
			// panelSend
			// 
			this->panelSend->Controls->Add(this->buttonSend);
			this->panelSend->Controls->Add(this->comboBoxComPort);
			this->panelSend->Controls->Add(this->textBoxSend);
			this->panelSend->Controls->Add(this->labelSend);
			this->panelSend->Location = System::Drawing::Point(12, 61);
			this->panelSend->Name = L"panelSend";
			this->panelSend->Size = System::Drawing::Size(658, 159);
			this->panelSend->TabIndex = 2;
			// 
			// buttonSend
			// 
			this->buttonSend->BackColor = System::Drawing::Color::Transparent;
			this->buttonSend->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSend->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSend->Font = (gcnew System::Drawing::Font(L"Georgia", 13.8F));
			this->buttonSend->ForeColor = System::Drawing::Color::White;
			this->buttonSend->Location = System::Drawing::Point(513, 106);
			this->buttonSend->Name = L"buttonSend";
			this->buttonSend->Size = System::Drawing::Size(130, 39);
			this->buttonSend->TabIndex = 4;
			this->buttonSend->Text = L"Send!";
			this->buttonSend->UseVisualStyleBackColor = false;
			this->buttonSend->Click += gcnew System::EventHandler(this, &TestForm::buttonSend_Click);
			// 
			// comboBoxComPort
			// 
			this->comboBoxComPort->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBoxComPort->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxComPort->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxComPort->FormattingEnabled = true;
			this->comboBoxComPort->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"COM1", L"COM2", L"COM3", L"COM4", L"COM5",
					L"COM6", L"COM7", L"COM8", L"COM9"
			});
			this->comboBoxComPort->Location = System::Drawing::Point(513, 54);
			this->comboBoxComPort->Name = L"comboBoxComPort";
			this->comboBoxComPort->Size = System::Drawing::Size(130, 32);
			this->comboBoxComPort->TabIndex = 3;
			this->comboBoxComPort->Text = L"Select port";
			this->comboBoxComPort->SelectedIndexChanged += gcnew System::EventHandler(this, &TestForm::comboBoxComPort_SelectedIndexChanged);
			// 
			// textBoxSend
			// 
			this->textBoxSend->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxSend->Font = (gcnew System::Drawing::Font(L"Georgia", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSend->Location = System::Drawing::Point(19, 55);
			this->textBoxSend->Name = L"textBoxSend";
			this->textBoxSend->Size = System::Drawing::Size(474, 31);
			this->textBoxSend->TabIndex = 2;
			this->textBoxSend->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panelReceive
			// 
			this->panelReceive->Controls->Add(this->textBoxReceive);
			this->panelReceive->Controls->Add(this->labelReceive);
			this->panelReceive->Location = System::Drawing::Point(12, 284);
			this->panelReceive->Name = L"panelReceive";
			this->panelReceive->Size = System::Drawing::Size(658, 121);
			this->panelReceive->TabIndex = 3;
			// 
			// textBoxReceive
			// 
			this->textBoxReceive->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxReceive->Enabled = false;
			this->textBoxReceive->Font = (gcnew System::Drawing::Font(L"Georgia", 13.8F));
			this->textBoxReceive->Location = System::Drawing::Point(19, 58);
			this->textBoxReceive->Name = L"textBoxReceive";
			this->textBoxReceive->Size = System::Drawing::Size(624, 34);
			this->textBoxReceive->TabIndex = 2;
			// 
			// labelReceive
			// 
			this->labelReceive->AutoSize = true;
			this->labelReceive->BackColor = System::Drawing::Color::Transparent;
			this->labelReceive->Font = (gcnew System::Drawing::Font(L"Georgia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelReceive->ForeColor = System::Drawing::Color::White;
			this->labelReceive->Location = System::Drawing::Point(14, 18);
			this->labelReceive->Name = L"labelReceive";
			this->labelReceive->Size = System::Drawing::Size(201, 27);
			this->labelReceive->TabIndex = 1;
			this->labelReceive->Text = L"Received message:";
			// 
			// TestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(682, 453);
			this->Controls->Add(this->panelReceive);
			this->Controls->Add(this->panelSend);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"TestForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Testing SW-HW:";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TestForm::TestForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &TestForm::TestForm_Load);
			this->panelSend->ResumeLayout(false);
			this->panelSend->PerformLayout();
			this->panelReceive->ResumeLayout(false);
			this->panelReceive->PerformLayout();
			this->ResumeLayout(false);
			this->panelSend->BackColor = Color::FromArgb(125, Color::Black);
			this->buttonSend->FlatAppearance->MouseOverBackColor = Color::FromArgb(125, Color::Black);
			this->panelReceive->BackColor = Color::FromArgb(125, Color::Black);

		}
#pragma endregion
	private: System::Void TestForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void TestForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}
	private: System::Void comboBoxComPort_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		selectedComPort = comboBoxComPort->SelectedItem->ToString();
		//textBoxReceive->Text = selectedComPort;
	}
private: System::Void buttonSend_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBoxComPort->SelectedItem == nullptr){
		MessageBox::Show("Select COM PORT!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (textBoxSend->Text == "") {
		MessageBox::Show("Write a message!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	msclr::interop::marshal_context context;
	const wchar_t* wideMessage = context.marshal_as<const wchar_t*>(selectedComPort);
	HANDLE hSerial = openSerialPort(wideMessage, CBR_9600);

	if (hSerial == INVALID_HANDLE_VALUE) {
		MessageBox::Show("Error opening serial port!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Використовуємо System::String^ для надсилання та отримання
	
	sendMessage(hSerial, textBoxSend->Text);
	textBoxReceive->Text = readMessage(hSerial);
	CloseHandle(hSerial);
}
};
}
