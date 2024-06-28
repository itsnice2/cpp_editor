#pragma once

#include "suche.h"
//#include "stdafx.h"
//#include <windows.h>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cpp_editor;

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
	private: System::Windows::Forms::MenuStrip^ mainmenue;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ dateiToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ speichernUnterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dateiOeffnenToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ beendenToolStripMenuItem;


	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ infoToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ speichernToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ status_num_characters;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;
	private: System::Windows::Forms::RichTextBox^ rtb_editor;
	private: System::Windows::Forms::ToolStripMenuItem^ extrasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenu_Zeilenumbruch;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem_Suche;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem_changeFont;
	private: System::Windows::Forms::FontDialog^ fontDialog;
	private: System::Windows::Forms::ToolStripMenuItem^ farbenÄndernToolStripMenuItem;




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
			this->mainmenue = (gcnew System::Windows::Forms::MenuStrip());
			this->dateiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->speichernToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->speichernUnterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dateiOeffnenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->beendenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->extrasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem_Suche = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenu_Zeilenumbruch = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem_changeFont = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->farbenÄndernToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->status_num_characters = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->rtb_editor = (gcnew System::Windows::Forms::RichTextBox());
			this->fontDialog = (gcnew System::Windows::Forms::FontDialog());
			this->mainmenue->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// mainmenue
			// 
			this->mainmenue->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->dateiToolStripMenuItem,
					this->extrasToolStripMenuItem, this->infoToolStripMenuItem
			});
			this->mainmenue->Location = System::Drawing::Point(0, 0);
			this->mainmenue->Name = L"mainmenue";
			this->mainmenue->Size = System::Drawing::Size(624, 24);
			this->mainmenue->TabIndex = 0;
			this->mainmenue->Text = L"Hauptmenü";
			// 
			// dateiToolStripMenuItem
			// 
			this->dateiToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->speichernToolStripMenuItem,
					this->speichernUnterToolStripMenuItem, this->dateiOeffnenToolStripMenuItem, this->toolStripSeparator1, this->beendenToolStripMenuItem
			});
			this->dateiToolStripMenuItem->Name = L"dateiToolStripMenuItem";
			this->dateiToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->dateiToolStripMenuItem->Text = L"&Datei";
			// 
			// speichernToolStripMenuItem
			// 
			this->speichernToolStripMenuItem->Name = L"speichernToolStripMenuItem";
			this->speichernToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->speichernToolStripMenuItem->Text = L"&Speichern";
			// 
			// speichernUnterToolStripMenuItem
			// 
			this->speichernUnterToolStripMenuItem->Name = L"speichernUnterToolStripMenuItem";
			this->speichernUnterToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->speichernUnterToolStripMenuItem->Text = L"Speichern &unter...";
			this->speichernUnterToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::speichernUnterToolStripMenuItem_Click);
			// 
			// dateiOeffnenToolStripMenuItem
			// 
			this->dateiOeffnenToolStripMenuItem->Name = L"dateiOeffnenToolStripMenuItem";
			this->dateiOeffnenToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->dateiOeffnenToolStripMenuItem->Text = L"&Datei öffnen";
			this->dateiOeffnenToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::dateiOeffnenToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(163, 6);
			// 
			// beendenToolStripMenuItem
			// 
			this->beendenToolStripMenuItem->Name = L"beendenToolStripMenuItem";
			this->beendenToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->beendenToolStripMenuItem->Text = L"&Beenden";
			this->beendenToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::beendenToolStripMenuItem_Click);
			// 
			// extrasToolStripMenuItem
			// 
			this->extrasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem_Suche,
					this->toolStripMenu_Zeilenumbruch, this->toolStripMenuItem_changeFont, this->farbenÄndernToolStripMenuItem
			});
			this->extrasToolStripMenuItem->Name = L"extrasToolStripMenuItem";
			this->extrasToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->extrasToolStripMenuItem->Text = L"Extras";
			// 
			// toolStripMenuItem_Suche
			// 
			this->toolStripMenuItem_Suche->Name = L"toolStripMenuItem_Suche";
			this->toolStripMenuItem_Suche->Size = System::Drawing::Size(181, 22);
			this->toolStripMenuItem_Suche->Text = L"&Suche";
			this->toolStripMenuItem_Suche->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem_Suche_Click);
			// 
			// toolStripMenu_Zeilenumbruch
			// 
			this->toolStripMenu_Zeilenumbruch->Name = L"toolStripMenu_Zeilenumbruch";
			this->toolStripMenu_Zeilenumbruch->Size = System::Drawing::Size(181, 22);
			this->toolStripMenu_Zeilenumbruch->Text = L"&Zeilenumbruch: Aus";
			this->toolStripMenu_Zeilenumbruch->Click += gcnew System::EventHandler(this, &Form1::toolStripMenu_Zeilenumbruch_Click);
			// 
			// toolStripMenuItem_changeFont
			// 
			this->toolStripMenuItem_changeFont->Name = L"toolStripMenuItem_changeFont";
			this->toolStripMenuItem_changeFont->Size = System::Drawing::Size(181, 22);
			this->toolStripMenuItem_changeFont->Text = L"Schrift&art ändern";
			this->toolStripMenuItem_changeFont->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem_changeFont_Click);
			// 
			// farbenÄndernToolStripMenuItem
			// 
			this->farbenÄndernToolStripMenuItem->Name = L"farbenÄndernToolStripMenuItem";
			this->farbenÄndernToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->farbenÄndernToolStripMenuItem->Text = L"&Farben ändern";
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			this->infoToolStripMenuItem->Size = System::Drawing::Size(40, 20);
			this->infoToolStripMenuItem->Text = L"&Info";
			this->infoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::infoToolStripMenuItem_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->status_num_characters });
			this->statusStrip1->Location = System::Drawing::Point(0, 419);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(624, 22);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// status_num_characters
			// 
			this->status_num_characters->Name = L"status_num_characters";
			this->status_num_characters->Size = System::Drawing::Size(61, 17);
			this->status_num_characters->Text = L"Zeichen: 0";
			// 
			// openFileDialog
			// 
			this->openFileDialog->FileName = L"openFileDialog1";
			// 
			// rtb_editor
			// 
			this->rtb_editor->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtb_editor->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtb_editor->Location = System::Drawing::Point(12, 37);
			this->rtb_editor->Name = L"rtb_editor";
			this->rtb_editor->Size = System::Drawing::Size(509, 328);
			this->rtb_editor->TabIndex = 3;
			this->rtb_editor->Text = L"";
			this->rtb_editor->WordWrap = false;
			this->rtb_editor->TextChanged += gcnew System::EventHandler(this, &Form1::rtb_editor_TextChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 441);
			this->Controls->Add(this->rtb_editor);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->mainmenue);
			this->MainMenuStrip = this->mainmenue;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Mini-Editor";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &Form1::Form1_SizeChanged);
			this->mainmenue->ResumeLayout(false);
			this->mainmenue->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void Form1_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	
	//txt_editor->Dock = DockStyle::Fill;
	rtb_editor->Dock = DockStyle::Fill;

}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	//txt_editor->Dock = DockStyle::Fill;
	rtb_editor->Dock = DockStyle::Fill;
	rtb_editor->WordWrap = false;
	//this->Text += " - neu.txt*";
	rtb_editor->Text = "\n  ToDo:\n  ---------\n\n  - Suche implementieren\n  - Schriftart ändern\n  - Farben ändern\n  - Speichern-Dialog\n  - Öffnen-Dialog als Stream statt Zeile für Zeile";
}

private: System::Void beendenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

private: System::Void speichernUnterToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//saveFileDialog->ShowDialog();
	
	// Displays a SaveFileDialog so the user can save the Image
	  // assigned to Button2.
	saveFileDialog->Filter ="TXT Text|*.txt|Alle Dateien|*.*";
	saveFileDialog->Title = "Textdatei speichern";
	saveFileDialog->ShowDialog();
	
	
	// If the file name is not an empty string, open it for saving.
	if (saveFileDialog->FileName != "")
	{
		
		//saveFileDialog->OpenFile();
		
		String^ fs = rtb_editor->Text;

		StreamWriter^ pwriter = gcnew StreamWriter(saveFileDialog->FileName);
		pwriter->Write(fs);
		pwriter->Close();
		this->Text = "Mini-Editor - " + saveFileDialog->FileName;

	}
	
}
private: System::Void dateiOeffnenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog->Filter = "TXT Text|*.txt|Alle Dateien|*.*";
	openFileDialog->Title = "Textdatei öffnen";
	openFileDialog->ShowDialog();

	if (openFileDialog->FileName != "")
	{

		//String^ textFile = openFileDialog->FileName;
		StreamReader^ reader = gcnew StreamReader(openFileDialog->FileName);
		String^ myFile = "";

		do
		{
			myFile += reader->ReadLine() + "\n";
		} while (reader->Peek() != -1);

		rtb_editor->Text = myFile;

	}
	
}
private: System::Void infoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Version 0.1\n(c) Eduard Andrejev\nhttps://github.com/itsnice2", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void rtb_editor_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	status_num_characters->Text = "Zeichen: " + rtb_editor->Text->Length;
}

private: System::Void toolStripMenuItem_Suche_Click(System::Object^ sender, System::EventArgs^ e) {
	cpp_editor::suche^ searchme = gcnew suche;
	searchme->Show();
}
private: System::Void toolStripMenu_Zeilenumbruch_Click(System::Object^ sender, System::EventArgs^ e) {
	if (toolStripMenu_Zeilenumbruch->Text == "&Zeilenumbruch: Aus")
	{
		rtb_editor->WordWrap = true;
		toolStripMenu_Zeilenumbruch->Text = "&Zeilenumbruch: Ein";
	}
	else
	{
		rtb_editor->WordWrap = false;
		toolStripMenu_Zeilenumbruch->Text = "&Zeilenumbruch: Aus";
	}
	
}
private: System::Void toolStripMenuItem_changeFont_Click(System::Object^ sender, System::EventArgs^ e) {
	fontDialog->ShowDialog();
	//rtb_editor->Font = fontDialog->
}
};
}
