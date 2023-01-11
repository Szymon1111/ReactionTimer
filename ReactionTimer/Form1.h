#pragma once
#include <chrono> 
#include "Stopwatch.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace std::chrono;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{

	public:
		Form1(void)
		{
			InitializeComponent();
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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TableLayoutPanel^ buttonsLayout;
	private: System::Windows::Forms::Label^ currentTimeLabel;

	public: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::ListBox^ timesList;
	private: System::Windows::Forms::Label^ timesListTitle;
	private: System::Windows::Forms::Label^ bestTimeTitle;
	private: System::Windows::Forms::Label^ bestTimeLabel;
	private: System::Windows::Forms::Label^ avgTimeTitle;
	private: System::Windows::Forms::Label^ avgTimeLabel;
	private: System::Windows::Forms::Button^ startStopButton;





	public:
	private:

	private: System::ComponentModel::IContainer^ components;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->buttonsLayout = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->currentTimeLabel = (gcnew System::Windows::Forms::Label());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->timesList = (gcnew System::Windows::Forms::ListBox());
			this->timesListTitle = (gcnew System::Windows::Forms::Label());
			this->bestTimeTitle = (gcnew System::Windows::Forms::Label());
			this->bestTimeLabel = (gcnew System::Windows::Forms::Label());
			this->avgTimeTitle = (gcnew System::Windows::Forms::Label());
			this->avgTimeLabel = (gcnew System::Windows::Forms::Label());
			this->startStopButton = (gcnew System::Windows::Forms::Button());
			this->buttonsLayout->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::Color::Snow;
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(299, 100);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::Color::Snow;
			this->button2->Location = System::Drawing::Point(308, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(300, 100);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->ForeColor = System::Drawing::Color::Snow;
			this->button3->Location = System::Drawing::Point(616, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(300, 100);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->ForeColor = System::Drawing::Color::Snow;
			this->button4->Location = System::Drawing::Point(3, 109);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(299, 100);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->ForeColor = System::Drawing::Color::Snow;
			this->button5->Location = System::Drawing::Point(308, 109);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(300, 100);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->ForeColor = System::Drawing::Color::Snow;
			this->button6->Location = System::Drawing::Point(616, 109);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(300, 100);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// buttonsLayout
			// 
			this->buttonsLayout->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->buttonsLayout->AutoScroll = true;
			this->buttonsLayout->AutoSize = true;
			this->buttonsLayout->ColumnCount = 3;
			this->buttonsLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.18411F)));
			this->buttonsLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.40794F)));
			this->buttonsLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.40794F)));
			this->buttonsLayout->Controls->Add(this->button1, 0, 0);
			this->buttonsLayout->Controls->Add(this->button6, 2, 1);
			this->buttonsLayout->Controls->Add(this->button2, 1, 0);
			this->buttonsLayout->Controls->Add(this->button5, 1, 1);
			this->buttonsLayout->Controls->Add(this->button3, 2, 0);
			this->buttonsLayout->Controls->Add(this->button4, 0, 1);
			this->buttonsLayout->Location = System::Drawing::Point(160, 464);
			this->buttonsLayout->Name = L"buttonsLayout";
			this->buttonsLayout->RowCount = 2;
			this->buttonsLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 38.68613F)));
			this->buttonsLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 61.31387F)));
			this->buttonsLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->buttonsLayout->Size = System::Drawing::Size(922, 274);
			this->buttonsLayout->TabIndex = 6;
			// 
			// currentTimeLabel
			// 
			this->currentTimeLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->currentTimeLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->currentTimeLabel->ForeColor = System::Drawing::Color::White;
			this->currentTimeLabel->Location = System::Drawing::Point(371, 117);
			this->currentTimeLabel->Name = L"currentTimeLabel";
			this->currentTimeLabel->Size = System::Drawing::Size(711, 330);
			this->currentTimeLabel->TabIndex = 7;
			this->currentTimeLabel->Text = L"---";
			this->currentTimeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timer
			// 
			this->timer->Interval = 1;
			this->timer->Tick += gcnew System::EventHandler(this, &Form1::timer_Tick);
			// 
			// timesList
			// 
			this->timesList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->timesList->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->timesList->ColumnWidth = 100;
			this->timesList->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->timesList->ForeColor = System::Drawing::Color::White;
			this->timesList->FormattingEnabled = true;
			this->timesList->ItemHeight = 26;
			this->timesList->Location = System::Drawing::Point(163, 57);
			this->timesList->Name = L"timesList";
			this->timesList->Size = System::Drawing::Size(192, 390);
			this->timesList->TabIndex = 8;
			// 
			// timesListTitle
			// 
			this->timesListTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->timesListTitle->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->timesListTitle->ForeColor = System::Drawing::Color::White;
			this->timesListTitle->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->timesListTitle->Location = System::Drawing::Point(163, 9);
			this->timesListTitle->Name = L"timesListTitle";
			this->timesListTitle->Size = System::Drawing::Size(192, 34);
			this->timesListTitle->TabIndex = 9;
			this->timesListTitle->Text = L"Czasy";
			this->timesListTitle->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// bestTimeTitle
			// 
			this->bestTimeTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bestTimeTitle->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bestTimeTitle->ForeColor = System::Drawing::Color::White;
			this->bestTimeTitle->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bestTimeTitle->Location = System::Drawing::Point(361, 9);
			this->bestTimeTitle->Name = L"bestTimeTitle";
			this->bestTimeTitle->Size = System::Drawing::Size(192, 34);
			this->bestTimeTitle->TabIndex = 10;
			this->bestTimeTitle->Text = L"Najlepszy czas";
			this->bestTimeTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bestTimeLabel
			// 
			this->bestTimeLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bestTimeLabel->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bestTimeLabel->ForeColor = System::Drawing::Color::White;
			this->bestTimeLabel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bestTimeLabel->Location = System::Drawing::Point(361, 57);
			this->bestTimeLabel->Name = L"bestTimeLabel";
			this->bestTimeLabel->Size = System::Drawing::Size(192, 60);
			this->bestTimeLabel->TabIndex = 11;
			this->bestTimeLabel->Text = L"---";
			this->bestTimeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// avgTimeTitle
			// 
			this->avgTimeTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->avgTimeTitle->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->avgTimeTitle->ForeColor = System::Drawing::Color::White;
			this->avgTimeTitle->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->avgTimeTitle->Location = System::Drawing::Point(561, 9);
			this->avgTimeTitle->Name = L"avgTimeTitle";
			this->avgTimeTitle->Size = System::Drawing::Size(192, 34);
			this->avgTimeTitle->TabIndex = 12;
			this->avgTimeTitle->Text = L"Œredni czas";
			this->avgTimeTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// avgTimeLabel
			// 
			this->avgTimeLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->avgTimeLabel->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->avgTimeLabel->ForeColor = System::Drawing::Color::White;
			this->avgTimeLabel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->avgTimeLabel->Location = System::Drawing::Point(559, 57);
			this->avgTimeLabel->Name = L"avgTimeLabel";
			this->avgTimeLabel->Size = System::Drawing::Size(192, 60);
			this->avgTimeLabel->TabIndex = 13;
			this->avgTimeLabel->Text = L"---";
			this->avgTimeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// startStopButton
			// 
			this->startStopButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->startStopButton->FlatAppearance->BorderSize = 0;
			this->startStopButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->startStopButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->startStopButton->ForeColor = System::Drawing::Color::Snow;
			this->startStopButton->Location = System::Drawing::Point(776, 17);
			this->startStopButton->Name = L"startStopButton";
			this->startStopButton->Size = System::Drawing::Size(300, 100);
			this->startStopButton->TabIndex = 14;
			this->startStopButton->Text = L"Start";
			this->startStopButton->UseVisualStyleBackColor = false;
			this->startStopButton->Click += gcnew System::EventHandler(this, &Form1::startStopButton_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(83)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->startStopButton);
			this->Controls->Add(this->avgTimeLabel);
			this->Controls->Add(this->avgTimeTitle);
			this->Controls->Add(this->bestTimeLabel);
			this->Controls->Add(this->bestTimeTitle);
			this->Controls->Add(this->timesListTitle);
			this->Controls->Add(this->timesList);
			this->Controls->Add(this->currentTimeLabel);
			this->Controls->Add(this->buttonsLayout);
			this->Name = L"Form1";
			this->Text = L"Pomiar czasu rekacji";
			this->buttonsLayout->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}




#pragma endregion
	private:

		int activateInTicks = 100;
		int activeButton = 0;

		int currentTimeValue = 0;
		int avgTimeValue = 0;
		int bestTimeValue = 0;

		System::Random^ random = gcnew System::Random();

		steady_clock::time_point* startTime = new steady_clock::time_point();

		Stopwatch* stopwatch = new Stopwatch();

		void reset() {

			this->button1->BackColor = System::Drawing::Color::FromArgb(138, 138, 138);
			this->button2->BackColor = System::Drawing::Color::FromArgb(138, 138, 138);
			this->button3->BackColor = System::Drawing::Color::FromArgb(138, 138, 138);
			this->button4->BackColor = System::Drawing::Color::FromArgb(138, 138, 138);
			this->button5->BackColor = System::Drawing::Color::FromArgb(138, 138, 138);
			this->button6->BackColor = System::Drawing::Color::FromArgb(138, 138, 138);

			activateInTicks = random->Next(100, 200);

		}

		void onButtonClick(int buttonId) {

			if (activeButton == buttonId) {

				stopwatch->stop();
				currentTimeValue = stopwatch->duration();

				if (bestTimeValue > currentTimeValue || bestTimeValue == 0)
					bestTimeValue = currentTimeValue;

				this->bestTimeLabel->Text = bestTimeValue.ToString();

				
				this->currentTimeLabel->Text = currentTimeValue.ToString() + "ms";
				this->timesList->Items->Insert(0, currentTimeValue);

				avgTimeValue = 0;

				for each (int time in this->timesList->Items)
				{
					avgTimeValue += time;
				}
				
				avgTimeValue /= this->timesList->Items->Count;
				this->avgTimeLabel->Text = avgTimeValue.ToString();

				reset();

			}
		}

		//G³ówna pêtla, funkcja wywo³ywana na ka¿dy tick zegara
		System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {


			if (this->activateInTicks == 0) {

				activeButton = random->Next(1, 6);

				switch (activeButton) {
				case 1: this->button1->BackColor = System::Drawing::Color::FromArgb(0, 255, 0); break;
				case 2: this->button2->BackColor = System::Drawing::Color::FromArgb(0, 255, 0); break;
				case 3: this->button3->BackColor = System::Drawing::Color::FromArgb(0, 255, 0); break;
				case 4: this->button4->BackColor = System::Drawing::Color::FromArgb(0, 255, 0); break;
				case 5: this->button5->BackColor = System::Drawing::Color::FromArgb(0, 255, 0); break;
				case 6: this->button6->BackColor = System::Drawing::Color::FromArgb(0, 255, 0); break;
				}

				stopwatch->start();

			}


			this->activateInTicks--;

		}

		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			onButtonClick(1);
		}

		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			onButtonClick(2);
		}

		System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			onButtonClick(3);
		}

		System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			onButtonClick(4);
		}

		System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
			onButtonClick(5);
		}

		System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			onButtonClick(6);
		}

		System::Void startStopButton_Click(System::Object^ sender, System::EventArgs^ e) {

			this->timer->Enabled = !this->timer->Enabled;

			if (this->timer->Enabled)
				this->startStopButton->Text = "Stop";
			else {
				this->startStopButton->Text = "Start";
				activateInTicks = 500;
			}
				
		}
};
}
