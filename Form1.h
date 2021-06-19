#pragma once  
 #include<conio.h> //For_getch()_function  
 #include<math.h>  
 double ans, a, b;  
 int flag=0;  
 using namespace std;  
 namespace Calculator {  
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
     private: System::Windows::Forms::TextBox^ txtb;  
     private: System::Windows::Forms::Button^ button1;  
     private: System::Windows::Forms::Button^ button2;  
     private: System::Windows::Forms::Button^ button3;  
     private: System::Windows::Forms::Button^ button4;  
     private: System::Windows::Forms::Button^ button5;  
     private: System::Windows::Forms::Button^ button6;  
     private: System::Windows::Forms::Button^ button7;  
     private: System::Windows::Forms::Label^ label1;  
     private: System::Windows::Forms::MenuStrip^ menuStrip1;  
     private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;  
     private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;  
     protected:  
     protected:  
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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));  
            this->txtb = (gcnew System::Windows::Forms::TextBox());  
            this->button1 = (gcnew System::Windows::Forms::Button());  
            this->button2 = (gcnew System::Windows::Forms::Button());  
            this->button3 = (gcnew System::Windows::Forms::Button());  
            this->button4 = (gcnew System::Windows::Forms::Button());  
            this->button5 = (gcnew System::Windows::Forms::Button());  
            this->button6 = (gcnew System::Windows::Forms::Button());  
            this->button7 = (gcnew System::Windows::Forms::Button());  
            this->label1 = (gcnew System::Windows::Forms::Label());  
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());  
            this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());  
            this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());  
            this->menuStrip1->SuspendLayout();  
            this->SuspendLayout();  
            //  
            // txtb  
            //  
            this->txtb->BackColor = System::Drawing::Color::White;  
            this->txtb->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;  
            this->txtb->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,  
               static_cast<System::Byte>(0)));
this->txtb->ForeColor = System::Drawing::Color::Black;  
            this->txtb->Location = System::Drawing::Point(32, 44);  
            this->txtb->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);  
            this->txtb->Name = L"txtb";  
            this->txtb->Size = System::Drawing::Size(300, 48);  
            this->txtb->TabIndex = 0;  
            this->txtb->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;  
            this->txtb->WordWrap = false;  
            this->txtb->TextChanged += gcnew System::EventHandler(this, &Form1::txtb_TextChanged);  
            //  
            // button1  
            //  
            this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,  
               static_cast<System::Byte>(0)));  
            this->button1->Location = System::Drawing::Point(32, 108);  
            this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);  
            this->button1->Name = L"button1";  
            this->button1->Size = System::Drawing::Size(98, 49);  
            this->button1->TabIndex = 1;  
            this->button1->Text = L"+";  
            this->button1->UseVisualStyleBackColor = true;  
            this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);  
            //  
            // button2  
            //  
            this->button2->Font = (gcnew System::Drawing::Font(L"Letterman-Solid", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,  
               static_cast<System::Byte>(0)));  
            this->button2->Location = System::Drawing::Point(234, 108);  
            this->button2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);  
            this->button2->Name = L"button2";  
            this->button2->Size = System::Drawing::Size(98, 49);  
            this->button2->TabIndex = 2;  
            this->button2->Text = L"=";  
            this->button2->UseVisualStyleBackColor = true;  
            this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);  
            //  
            // button3  
            //  
            this->button3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,  
               static_cast<System::Byte>(0)));  
            this->button3->Location = System::Drawing::Point(32, 160);  
            this->button3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);  
            this->button3->Name = L"button3";  
            this->button3->Size = System::Drawing::Size(98, 49);  
            this->button3->TabIndex = 3;  
            this->button3->Text = L"-";  
            this->button3->UseVisualStyleBackColor = true;  
            this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);  
            //  
            // button4  
            //  
            this->button4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,  
               static_cast<System::Byte>(0)));  
            this->button4->Location = System::Drawing::Point(32, 212);  
            this->button4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);  
            this->button4->Name = L"button4";  
            this->button4->Size = System::Drawing::Size(98, 49);  
            this->button4->TabIndex = 4;  
            this->button4->Text = L"x";  
            this->button4->UseVisualStyleBackColor = true;  
            this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);  
            //  
            // button5
//  
            this->button5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,  
               static_cast<System::Byte>(0)));  
            this->button5->Location = System::Drawing::Point(32, 264);  
            this->button5->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);  
            this->button5->Name = L"button5";  
            this->button5->Size = System::Drawing::Size(98, 49);  
            this->button5->TabIndex = 5;  
            this->button5->Text = L"/";  
            this->button5->UseVisualStyleBackColor = true;  
            this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);  
            //  
            // button6  
            //  
            this->button6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,  
               static_cast<System::Byte>(0)));  
            this->button6->Location = System::Drawing::Point(234, 161);  
            this->button6->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);  
            this->button6->Name = L"button6";  
            this->button6->Size = System::Drawing::Size(98, 49);  
            this->button6->TabIndex = 6;  
            this->button6->Text = L"ROOT";  
            this->button6->UseVisualStyleBackColor = true;  
            this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);  
            //  
            // button7  
            //  
            this->button7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,  
               static_cast<System::Byte>(0)));  
            this->button7->Location = System::Drawing::Point(234, 212);  
            this->button7->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);  
            this->button7->Name = L"button7";  
            this->button7->Size = System::Drawing::Size(98, 49);  
            this->button7->TabIndex = 7;  
            this->button7->Text = L"SQUARE";  
            this->button7->UseVisualStyleBackColor = true;  
            this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);  
            //  
            // label1  
            //  
            this->label1->AutoSize = true;  
            this->label1->BackColor = System::Drawing::SystemColors::HighlightText;  
            this->label1->Font = (gcnew System::Drawing::Font(L"KabobExtrabold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,  
               static_cast<System::Byte>(0)));  
            this->label1->Location = System::Drawing::Point(123, 3);  
            this->label1->Name = L"label1";  
            this->label1->Size = System::Drawing::Size(135, 18);  
            this->label1->TabIndex = 8;  
            this->label1->Text = L"Simple Calculator";  
            this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);  
            //  
            // menuStrip1  
            //  
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^ >(1) {this->menuToolStripMenuItem});  
            this->menuStrip1->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::Flow;  
            this->menuStrip1->Location = System::Drawing::Point(0, 0);  
            this->menuStrip1->Name = L"menuStrip1";  
            this->menuStrip1->Size = System::Drawing::Size(360, 23);  
            this->menuStrip1->TabIndex = 10;  
            this->menuStrip1->Text = L"menuStrip1";  
            this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::menuStrip1_ItemClicked);
//  
            // menuToolStripMenuItem  
            //  
            this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^ >(1) {this->exitToolStripMenuItem});  
            this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";  
            this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 19);  
            this->menuToolStripMenuItem->Text = L"Menu";  
            this->menuToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::menuToolStripMenuItem_Click);  
            //  
            // exitToolStripMenuItem  
            //  
            this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";  
            this->exitToolStripMenuItem->Size = System::Drawing::Size(92, 22);  
            this->exitToolStripMenuItem->Text = L"Exit";  
            this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);  
            //  
            // Form1  
            //  
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);  
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;  
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^ >(resources->GetObject(L"$this.BackgroundImage")));  
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;  
            this->ClientSize = System::Drawing::Size(360, 324);  
            this->Controls->Add(this->label1);  
            this->Controls->Add(this->button7);  
            this->Controls->Add(this->button6);  
            this->Controls->Add(this->button5);  
            this->Controls->Add(this->button4);  
            this->Controls->Add(this->button3);  
            this->Controls->Add(this->button2);  
            this->Controls->Add(this->button1);  
            this->Controls->Add(this->txtb);  
            this->Controls->Add(this->menuStrip1);  
            this->DoubleBuffered = true;  
            this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,  
               static_cast<System::Byte>(0)));  
            this->ForeColor = System::Drawing::Color::Black;  
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;  
            this->MainMenuStrip = this->menuStrip1;  
            this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);  
            this->Name = L"Form1";  
            this->Text = L"Form1";  
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);  
            this->menuStrip1->ResumeLayout(false);  
            this->menuStrip1->PerformLayout();  
            this->ResumeLayout(false);  
            this->PerformLayout();  
        }  
 #pragma endregion  
     private: System::Void txtb_TextChanged(System::Object^ sender, System::EventArgs^ e) {  
               int temp;  
                      if(Int32::TryParse(txtb->Text, temp))  
                 a = float::Parse(txtb->Text);  
            }  
     private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {  
               flag=1;  
               b = double::Parse(txtb->Text);  
               ans=a+b;  
            }  
 private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {  
            flag=2;  
             b = float::Parse(txtb->Text);  
         }  
     private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {  
               if(a==0 && b==0)  
               {  
                   txtb->Text = "Enter Numbers";  
               }  
               if(flag==1)  
               {  
               ans=a+b;  
                   txtb->Text = Convert::ToString(ans);
}  
               else if(flag==2)  
               {  
                  ans=b-a;  
                  txtb->Text = Convert::ToString(ans);  
               }  
               else if(flag==3)  
               {  
                  ans=b*a;  
                  txtb->Text = Convert::ToString(ans);  
               }  
               else if(flag==4)  
               {  
                  if(a==0)  
                  {  
                      MessageBox::Show("Divided By Zero Error");  
                  }  
                  ans=b/a;  
                  txtb->Text = Convert::ToString(ans);  
               }  
            }  
 private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {  
            flag=3;  
             b = double::Parse(txtb->Text);  
         }  
 private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {  
            flag=4;  
            b = double::Parse(txtb->Text);  
         }  
 private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {  
            ans=sqrt(a);  
            txtb->Text = Convert::ToString(ans);  
         }  
 private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {  
         ans=a*a;  
            txtb->Text = Convert::ToString(ans);  
         }  
 private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {  
            MessageBox::Show("Created By :nn Muhammed Afsal.vn e-mail : Afsalashyana@gmail.com");  
         }  
 private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {  
            a=b=0;  
         }  
 private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {  
            Application::Exit();  
         }  
 private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {  
         }  
 private: System::Void menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {  
         }  
 private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {  
         }  
 };  
 }
