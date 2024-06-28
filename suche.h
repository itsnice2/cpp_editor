#pragma once

namespace cpp_editor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für suche
	/// </summary>
	public ref class suche : public System::Windows::Forms::Form
	{
	public:
		suche(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~suche()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ chk_grossklein;
	private: System::Windows::Forms::CheckBox^ chk_exactTerm;
	private: System::Windows::Forms::Button^ btn_search;
	private: System::Windows::Forms::Button^ btn_exit;


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chk_grossklein = (gcnew System::Windows::Forms::CheckBox());
			this->chk_exactTerm = (gcnew System::Windows::Forms::CheckBox());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(66, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(394, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Suchen:";
			// 
			// chk_grossklein
			// 
			this->chk_grossklein->AutoSize = true;
			this->chk_grossklein->Location = System::Drawing::Point(66, 78);
			this->chk_grossklein->Name = L"chk_grossklein";
			this->chk_grossklein->Size = System::Drawing::Size(180, 17);
			this->chk_grossklein->TabIndex = 2;
			this->chk_grossklein->Text = L"Groß-/Kleinschreibung beachten";
			this->chk_grossklein->UseVisualStyleBackColor = true;
			// 
			// chk_exactTerm
			// 
			this->chk_exactTerm->AutoSize = true;
			this->chk_exactTerm->Location = System::Drawing::Point(276, 78);
			this->chk_exactTerm->Name = L"chk_exactTerm";
			this->chk_exactTerm->Size = System::Drawing::Size(162, 17);
			this->chk_exactTerm->TabIndex = 3;
			this->chk_exactTerm->Text = L"Exakte Zeichenfolge suchen";
			this->chk_exactTerm->UseVisualStyleBackColor = true;
			// 
			// btn_search
			// 
			this->btn_search->Location = System::Drawing::Point(66, 115);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(75, 23);
			this->btn_search->TabIndex = 4;
			this->btn_search->Text = L"&Suchen";
			this->btn_search->UseVisualStyleBackColor = true;
			this->btn_search->Click += gcnew System::EventHandler(this, &suche::btn_search_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btn_exit->Location = System::Drawing::Point(385, 115);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(75, 23);
			this->btn_exit->TabIndex = 5;
			this->btn_exit->Text = L"&Beenden";
			this->btn_exit->UseVisualStyleBackColor = true;
			this->btn_exit->Click += gcnew System::EventHandler(this, &suche::btn_exit_Click);
			// 
			// suche
			// 
			this->AcceptButton = this->btn_search;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btn_exit;
			this->ClientSize = System::Drawing::Size(518, 160);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->chk_exactTerm);
			this->Controls->Add(this->chk_grossklein);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"suche";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Suche";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &suche::suche_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btn_search_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ meineSuche = "";
	String^ meineEditor = "";

	meineSuche = textBox1->Text;
	//meineEditor = gcnew Form1::txt_editor->Text;
}

private: System::Void suche_Load(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Focus();
}
};
}
