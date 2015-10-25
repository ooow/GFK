#pragma once


namespace GFK {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для Form1
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Collections::Generic::List<quest> question;
	private: System::ComponentModel::IContainer^  components;
			 /// <summary>
			 /// Требуется переменная конструктора.
			 /// </summary>


			 float left, right, top, bottom;
			 int Ty, Tx;
			 int qx, qy;
			 bool stop;
			 bool stopB;
			 bool stopF;
			 bool stopA;
			 bool stopU;
			 int u;

			 System::String^ anserr;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::NotifyIcon^  GFK;


	private: System::Windows::Forms::PictureBox^  pictureBox1;



#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Обязательный метод для поддержки конструктора - не изменяйте
			 /// содержимое данного метода при помощи редактора кода.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->components = (gcnew System::ComponentModel::Container());
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
				 this->textBox2 = (gcnew System::Windows::Forms::TextBox());
				 this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->GFK = (gcnew System::Windows::Forms::NotifyIcon(this->components));
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // textBox2
				 // 
				 this->textBox2->AccessibleDescription = L"Введите ответ";
				 this->textBox2->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
				 this->textBox2->Location = System::Drawing::Point(861, 229);
				 this->textBox2->Name = L"textBox2";
				 this->textBox2->Size = System::Drawing::Size(135, 20);
				 this->textBox2->TabIndex = 1;
				 // 
				 // pictureBox1
				 // 
				 this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
				 this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
				 this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
				 this->pictureBox1->Location = System::Drawing::Point(3, 3);
				 this->pictureBox1->Name = L"pictureBox1";
				 this->pictureBox1->Size = System::Drawing::Size(50, 50);
				 this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
				 this->pictureBox1->TabIndex = 3;
				 this->pictureBox1->TabStop = false;
				 // 
				 // button1
				 // 
				 this->button1->Location = System::Drawing::Point(891, 267);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(75, 23);
				 this->button1->TabIndex = 4;
				 this->button1->Text = L"Ответить";
				 this->button1->UseVisualStyleBackColor = true;
				 this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
				 // 
				 // GFK
				 // 
				 this->GFK->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"GFK.Icon")));
				 this->GFK->Text = L"notifyIcon1";
				 this->GFK->Visible = true;
				 // 
				 // Form1
				 // 
				 this->AcceptButton = this->button1;
				 this->AccessibleDescription = L"";
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
				 this->ClientSize = System::Drawing::Size(1014, 647);
				 this->Controls->Add(this->button1);
				 this->Controls->Add(this->pictureBox1);
				 this->Controls->Add(this->textBox2);
				 this->DoubleBuffered = true;
				 this->ForeColor = System::Drawing::SystemColors::WindowText;
				 this->HelpButton = true;
				 this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
				 this->KeyPreview = true;
				 this->MinimumSize = System::Drawing::Size(1024, 680);
				 this->Name = L"Form1";
				 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				 this->Text = L"GFK";
				 this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
				 this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
				 this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: void DrawCircle(Graphics^ g, Pen^ pen) {
				 int mas[8][4] = {
					 {0, 0, 75, 75}, 
					 {75, 0, 75, 75},
					 {150, 0, 75, 75},
					 {225, 0, 75, 75},
					 {300, 0, 75, 75}, 
					 {375, 0, 75, 75}, 
					 {450, 0, 75, 75},
					 {525, 0, 75, 75}};
					 int dy = 0;
					 for (int j = 0; j < 8; j++){
						 for (int i = 0; i < 8; i++) {
							 g->DrawEllipse(pen,  
								 (float)(mas[i][0]+top), 
								 (float)(mas[i][1]+top + dy), 
								 (float)(mas[i][2]), 
								 (float)(mas[i][3]));

						 }
						 dy = dy + 75;
					 }
			 }
	private: bool mina(int xx, int yy){
				 int f = 0;
				 for (int i=0; i<25 ;i++)
					 if ((xx - 13 == mn[i][0]) &&( yy - 14 == mn[i][1]))
						 f++;
				 if (f > 0)
					 return true;
				 else
					 return false;
			 }
	private: void minrand(){
				 int circle[62][4] = {
					 {85,10,75,75},
					 {160,10,75,75},{235,10,75,75},
					 {310,10,75,75},{385,10,75,75},
					 {460,10,75,75},{535,10,75,75},
					 {10,85,75,75},{85,85,75,75},
					 {160,85,75,75},{235,85,75,75},
					 {310,85,75,75},{385,85,75,75},
					 {460,85,75,75},{535,85,75,75},
					 {10,160,75,75},{85,160,75,75},
					 {160,160,75,75},{235,160,75,75},
					 {310,160,75,75},{385,160,75,75},
					 {460,160,75,75},{535,160,75,75},
					 {10,235,75,75},{85,235,75,75},
					 {160,235,75,75},{235,235,75,75},
					 {310,235,75,75},{385,235,75,75},
					 {460,235,75,75},{535,235,75,75},
					 {10,310,75,75},{85,310,75,75},
					 {160,310,75,75},{235,310,75,75},
					 {310,310,75,75},{385,310,75,75},
					 {460,310,75,75},{535,310,75,75},
					 {10,385,75,75},{85,385,75,75},
					 {160,385,75,75},{235,385,75,75},
					 {310,385,75,75},{385,385,75,75},
					 {460,385,75,75},{535,385,75,75},
					 {10,460,75,75},{85,460,75,75},
					 {160,460,75,75},{235,460,75,75},
					 {310,460,75,75},{385,460,75,75},
					 {460,460,75,75},{535,460,75,75},
					 {10,535,75,75},{85,535,75,75},
					 {160,535,75,75},{235,535,75,75},
					 {310,535,75,75},{385,535,75,75},
					 {460,535,75,75}};

					 int w;
					 srand(time(0));
					 for (int i = 0; i < 25; i++)
					 {
						 w = 1 + rand() % 61;
						 mn[i][0] = circle[w][0];
						 mn[i][1] = circle[w][1];
						 mn[i][2] = circle[w][2];
						 mn[i][3] = circle[w][3];

					 }
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 stopF = true;
				 stopB = true;
				 stopA = false;
				 left = 10;
				 right = 398;
				 top = 10;
				 bottom = 30;
				 for (int i = 0; i < 17; i++)
					 used[i] = false;
				 u = rand() % 17;

				 minrand();
				 quest l;
				 l.text = "(x^n)' = ";
				 l.anser = "n*x^(n-1)";
				 question.Add(l);
				 l.text = "(a^n)' = ";
				 l.anser = "a^n*ln(a)";
				 question.Add(l);
				 l.text = "(e^n)' =";
				 l.anser = "e^n";
				 question.Add(l);
				 l.text = "(log_a(x))' =";
				 l.anser = "1/(x*ln(a))";
				 question.Add(l);
				 l.text = "(ln(x))' =";
				 l.anser = "1/x";
				 question.Add(l);
				 l.text = "(sin(x))' =";
				 l.anser = "cos(x)";
				 question.Add(l);
				 l.text = "(cos(x))' = ";
				 l.anser = "-sin(x)";
				 question.Add(l);
				 l.text = "(sqrt(x))' = ";
				 l.anser = "1/(2*sqrt(x))";
				 question.Add(l);
				 l.text = "(tg(x))' =";
				 l.anser = "1/cos^2(x)";
				 question.Add(l);
				 l.text = "(ctg(x))' =";
				 l.anser = "-1/sin^2(x)";
				 question.Add(l);
				 l.text = "(arcsin(x))' =";
				 l.anser = "1/sqrt(1-x^2)";
				 question.Add(l);
				 l.text = "(arccos(x))' =";
				 l.anser = "-1/sqrt(1-x^2)";
				 question.Add(l);
				 l.text = "(arctg(x))' = ";
				 l.anser = "1/(1+x^2)";
				 question.Add(l);
				 l.text = "(arcctg(x))' =";
				 l.anser = "-1/(1+x^2))";
				 question.Add(l);
				 l.text = "(sh(x))' =";
				 l.anser = "ch(x)";
				 question.Add(l);
				 l.text = "(ch(x))' =";
				 l.anser = "sh(x)";
				 question.Add(l);
				 l.text = "(th(x))' =";
				 l.anser = "1/ch^2(x)";
				 question.Add(l);
			 }
	private: System::Void Form1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				 Graphics^ g = e->Graphics;
				 Rectangle rect = Form::ClientRectangle;

				 Pen^ brownP = gcnew Pen(Color::Brown);   
				 brownP->Width = 3;

				 Pen^ yellowP = gcnew Pen(Color::Yellow);   
				 yellowP->Width = 4;

				 Pen^ redP = gcnew Pen(Color::Red);   
				 redP->Width = 8;

				 Pen^ greenP = gcnew Pen(Color::Lime);   
				 greenP->Width = 8;

				 SolidBrush^ redB = gcnew SolidBrush(Color::Red);
				 SolidBrush^ greenB = gcnew SolidBrush(Color::Blue);
				 SolidBrush^ limeB = gcnew SolidBrush(Color::Lime);
				 SolidBrush^ aquaG = gcnew SolidBrush(Color::Black);

				 System::Drawing::Font^ drawFont = gcnew System::Drawing::Font( "Arial", 10);
				 System::Drawing::Font^ drawFinish = gcnew System::Drawing::Font( "Arial", 15);
				 System::Drawing::Font^ drawWin = gcnew System::Drawing::Font( "Arial", 35);
				 System::Drawing::Font^ drawU = gcnew System::Drawing::Font( "Arial", 15);

				 g->DrawString("© Tirkiya Goga ", drawFont, aquaG, 10, 630);
				 g->DrawString("Правила записи ответа:\nзаписывайте ответ без пробелов\nучитывайте правописание скобок\nx - переменная\na - константа\ne - основание натурального логарифма\n", drawFont, redB, 620, 10);

				 DrawCircle(g, brownP);
				 if ( stopF )
				 {
					 Q.x = 23;
					 Q.y = 24;
					 Q.x += Tx;
					 Q.y += Ty;

					 if (mina(Q.x, Q.y))
					 {	
						 if (stopB)
						 {
							 textBox2->Enabled = true;
							 this->pictureBox1->Location = System::Drawing::Point(Q.x, Q.y);
							 g->DrawEllipse(redP, Q.x-14, Q.y-15, 75, 75);

							 if ( stopA )
							 {	
								 g->DrawString("Вы ошиблись, либо ввели неправильный формат ответа\nПравильный ответ: ", drawFont, greenB, 650, 110);
								 g->DrawString(question[u].text, drawFont, greenB, 670, 140);
								 g->DrawString(question[u].anser, drawFont, greenB, 750, 140);
								 for ( int i=0;i<25;i++)
									 g->DrawEllipse(yellowP,  
									 (float)(mn[i][0]), 
									 (float)(mn[i][1]), 
									 (float)(mn[i][2]), 
									 (float)(mn[i][3]));
							 }
							 else
							 {
								 if ( !used[u] )
								 {	 
									 g->DrawString("Чему равна производная от: ", drawFont, redB, 650, 110);
									 g->DrawString(question[u].text, drawFont, redB, 670, 130);
								 }
							 }
							 this->KeyPreview = false;
							 stop = false;
						 }
						 else
						 {	 
							 g->DrawEllipse(greenP, Q.x-14, Q.y-15, 75, 75);
							 this->KeyPreview = true;
							 textBox2->Enabled = false;
							 this->pictureBox1->Location = System::Drawing::Point(Q.x, Q.y);
							 stop = true;
						 }
					 }
					 else 
					 {	 
						 textBox2->Enabled = false;
						 this->pictureBox1->Location = System::Drawing::Point(Q.x, Q.y);
						 stop = true;
						 if ( (Q.x == 548) && (Q.y == 549)){
							 g->DrawString("Вы Выграли!", drawWin, limeB, 710, 50);
							 stopF = false;
						 }
					 }
				 }
				 else
				 {
					 g->DrawString("ПОБЕДА!", drawWin, limeB, 730, 50);
					 g->DrawString("Чтобы начать заново, нажмите клавишу Esc", drawFont, redB, 680, 150);
				 }
				 g->DrawString("FINISH", drawFinish, greenB, 537, 560);
				 g->DrawString("Управление:\n                      W - вверх\nA - влево       S - вниз       D - вправо", drawU, redB, 640, 560);

			 }
	private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 switch (e->KeyCode) {
				case Keys::W :
					if ( Ty > 10 && stop )
						Ty = Ty - 75;
					break;
				case Keys::S :
					if ( Ty != 525 && stop )
						Ty = Ty + 75;
					break;
				case Keys::A :
					if ( Tx > 10 && stop )
						Tx = Tx - 75;
					break;
				case Keys::D :
					if ( Tx != 525 && stop )
						Tx = Tx + 75;
					break;
				case Keys::Up :
					if ( Ty > 10 && stop )
						Ty = Ty - 75;
					break;
				case Keys::Down :
					if ( Ty != 525 && stop )
						Ty = Ty + 75;
					break;
				case Keys::Left :
					if ( Tx > 10 && stop )
						Tx = Tx - 75;
					break;
				case Keys::Right :
					if ( Tx != 525 && stop )
						Tx = Tx + 75;
					break;
				case Keys::Escape :
					Q.x = 10; Q.y = 10;
					Ty = 0; Tx = 0;
					minrand();
					stopF = true;
					stopA = false;
					stop = true;
					stopB = true;
					this->KeyPreview = true;
					for (int i = 0; i < 6; i++)
						used[i] = false;
					break;
				 }
				 u = rand() % 17;
				 this->Refresh();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 anserr = textBox2->Text;
				 if ( question[u].anser == anserr )
				 {	
					 stopB = false;
					 this->Refresh();
					 stop = true;
					 this->KeyPreview = true;
					 used[u] = true;
				 }
				 else 
				 {	
					 stopA = true;
					 this->Refresh();
					 this->KeyPreview = true;
					 Q.x = 10; Q.y = 10;
					 Ty = 0; Tx = 0;
					 minrand();
				 }
				 stopA = false;
				 stopB = true;
			 }
	};
}