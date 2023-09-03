#pragma once

namespace video_player {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Panel^ titleBar;
	private: System::Windows::Forms::PageSetupDialog^ pageSetupDialog1;
	private: System::Windows::Forms::PageSetupDialog^ pageSetupDialog2;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->titleBar = (gcnew System::Windows::Forms::Panel());
			this->pageSetupDialog1 = (gcnew System::Windows::Forms::PageSetupDialog());
			this->pageSetupDialog2 = (gcnew System::Windows::Forms::PageSetupDialog());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->titleBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button1);
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Name = L"panel1";
			// 
			// button9
			// 
			resources->ApplyResources(this->button9, L"button9");
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->ForeColor = System::Drawing::Color::DarkGray;
			this->button9->Name = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Black;
			resources->ApplyResources(this->button7, L"button7");
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Name = L"button7";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Black;
			resources->ApplyResources(this->button6, L"button6");
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->ForeColor = System::Drawing::Color::Transparent;
			this->button6->Name = L"button6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Black;
			resources->ApplyResources(this->button8, L"button8");
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Name = L"button8";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			resources->ApplyResources(this->button5, L"button5");
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->ForeColor = System::Drawing::Color::DarkGray;
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			resources->ApplyResources(this->button4, L"button4");
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->ForeColor = System::Drawing::Color::DarkGray;
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			resources->ApplyResources(this->button3, L"button3");
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->ForeColor = System::Drawing::Color::DarkGray;
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->ForeColor = System::Drawing::Color::DarkGray;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button6);
			resources->ApplyResources(this->panel2, L"panel2");
			this->panel2->Name = L"panel2";
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->ForeColor = System::Drawing::Color::Transparent;
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// titleBar
			// 
			this->titleBar->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->titleBar->Controls->Add(this->button2);
			resources->ApplyResources(this->titleBar, L"titleBar");
			this->titleBar->Name = L"titleBar";
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->Controls->Add(this->titleBar);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->TransparencyKey = System::Drawing::Color::IndianRed;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->titleBar->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Close();
	}
		   bool playpause = false;
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (playpause) {
			 
		}
	}
		   bool draging;
		   Point offset;
	private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		draging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}
	private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (draging) {
			Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
			Location = Point(currentScreenPosition.X - offset.X,currentScreenPosition.Y - offset.Y);
		}
	}
	private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		draging = false;
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
