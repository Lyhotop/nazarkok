#pragma once
#include "TestForm.h"
namespace client {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}





	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::PictureBox^ pictureBoxLogo;

	private: System::Windows::Forms::Label^ labelTitle;
	private: System::Windows::Forms::Button^ buttonTest;
	private: System::Windows::Forms::Button^ buttonAbout;


	private: System::Windows::Forms::Button^ buttonPlay;








	private: System::ComponentModel::IContainer^ components;
	protected:




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->pictureBoxLogo = (gcnew System::Windows::Forms::PictureBox());
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->buttonTest = (gcnew System::Windows::Forms::Button());
			this->buttonAbout = (gcnew System::Windows::Forms::Button());
			this->buttonPlay = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLogo))->BeginInit();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			this->buttonTest->FlatAppearance->MouseOverBackColor = Color::FromArgb(125, Color::Black);
			this->buttonAbout->FlatAppearance->MouseOverBackColor = Color::FromArgb(125, Color::Black);
			this->buttonPlay->FlatAppearance->MouseOverBackColor = Color::FromArgb(125, Color::Black);

			// 
			// pictureBoxLogo
			// 
			this->pictureBoxLogo->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBoxLogo->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxLogo.Image")));
			this->pictureBoxLogo->Location = System::Drawing::Point(12, 66);
			this->pictureBoxLogo->Name = L"pictureBoxLogo";
			this->pictureBoxLogo->Size = System::Drawing::Size(658, 215);
			this->pictureBoxLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxLogo->TabIndex = 1;
			this->pictureBoxLogo->TabStop = false;
			// 
			// labelTitle
			// 
			this->labelTitle->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelTitle->AutoSize = true;
			this->labelTitle->BackColor = System::Drawing::Color::Transparent;
			this->labelTitle->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(146)));
			this->labelTitle->Location = System::Drawing::Point(210, 304);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(253, 48);
			this->labelTitle->TabIndex = 2;
			this->labelTitle->Text = L"Tic Tac Toe";
			// 
			// buttonTest
			// 
			this->buttonTest->BackColor = System::Drawing::Color::Transparent;
			this->buttonTest->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonTest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonTest->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTest->ForeColor = System::Drawing::Color::White;
			this->buttonTest->Location = System::Drawing::Point(12, 384);
			this->buttonTest->Name = L"buttonTest";
			this->buttonTest->Size = System::Drawing::Size(165, 57);
			this->buttonTest->TabIndex = 3;
			this->buttonTest->Text = L"Test SW-HW";
			this->buttonTest->UseVisualStyleBackColor = false;
			this->buttonTest->Click += gcnew System::EventHandler(this, &Main::buttonTest_Click);
			// 
			// buttonAbout
			// 
			this->buttonAbout->BackColor = System::Drawing::Color::Transparent;
			this->buttonAbout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAbout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAbout->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAbout->ForeColor = System::Drawing::Color::White;
			this->buttonAbout->Location = System::Drawing::Point(505, 384);
			this->buttonAbout->Name = L"buttonAbout";
			this->buttonAbout->Size = System::Drawing::Size(165, 57);
			this->buttonAbout->TabIndex = 4;
			this->buttonAbout->Text = L"About";
			this->buttonAbout->UseVisualStyleBackColor = false;
			// 
			// buttonPlay
			// 
			this->buttonPlay->BackColor = System::Drawing::Color::Transparent;
			this->buttonPlay->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPlay->Enabled = false;
			this->buttonPlay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPlay->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPlay->ForeColor = System::Drawing::Color::White;
			this->buttonPlay->Location = System::Drawing::Point(183, 384);
			this->buttonPlay->Name = L"buttonPlay";
			this->buttonPlay->Size = System::Drawing::Size(316, 57);
			this->buttonPlay->TabIndex = 5;
			this->buttonPlay->Text = L"Play the game";
			this->buttonPlay->UseVisualStyleBackColor = false;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(682, 453);
			this->Controls->Add(this->buttonPlay);
			this->Controls->Add(this->buttonAbout);
			this->Controls->Add(this->buttonTest);
			this->Controls->Add(this->labelTitle);
			this->Controls->Add(this->pictureBoxLogo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"Main";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLogo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			this->buttonTest->FlatAppearance->MouseOverBackColor = Color::FromArgb(125, Color::Black);
			this->buttonAbout->FlatAppearance->MouseOverBackColor = Color::FromArgb(125, Color::Black);
			this->buttonPlay->FlatAppearance->MouseOverBackColor = Color::FromArgb(125, Color::Black);


		}
#pragma endregion
	private: System::Void buttonTest_Click(System::Object^ sender, System::EventArgs^ e) {
		TestForm^ form = gcnew TestForm();
		form->Show();
		this->Hide();
	}
};
}
