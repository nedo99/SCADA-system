#pragma once

#include "Elektrana.h"
#include "Hidroelektrana.h"
#include "Vjetroelektrana.h"
#include "Solarnaelektrana.h"
#include "hidroel.h"
#include "vjetro.h"
#include "solarna.h"
#include "Potrosac.h"



namespace SCADA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		ArrayList ^potrosaci;
		ArrayList ^ve;
		ArrayList ^he;
		double potrosnja_u,proizvodnja_u;
		
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ToolStripMenuItem^  elektraneToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  vjetroelektraneToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  solarnaElektranaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  hidroelektranaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::ToolTip^  toolTip2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;


	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox37;
	private: System::Windows::Forms::TextBox^  textBox38;
	private: System::Windows::Forms::TextBox^  textBox39;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::TextBox^  textBox40;
	private: System::Windows::Forms::Label^  label16;

	public: 
		ArrayList ^se;
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

	public: 
private: System::Windows::Forms::TabControl^  tabControl1;
private: System::Windows::Forms::TabPage^  tabPage1;
private: System::Windows::Forms::TextBox^  textBox19;
private: System::Windows::Forms::TextBox^  textBox20;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::TextBox^  textBox21;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::TextBox^  textBox22;
private: System::Windows::Forms::TextBox^  textBox23;
private: System::Windows::Forms::TextBox^  textBox24;
private: System::Windows::Forms::TextBox^  textBox25;
private: System::Windows::Forms::TextBox^  textBox26;
private: System::Windows::Forms::TextBox^  textBox27;
private: System::Windows::Forms::TextBox^  textBox28;
private: System::Windows::Forms::TextBox^  textBox29;
private: System::Windows::Forms::TextBox^  textBox30;
private: System::Windows::Forms::PictureBox^  pictureBox43;
private: System::Windows::Forms::PictureBox^  pictureBox57;

private: System::Windows::Forms::PictureBox^  pictureBox60;
private: System::Windows::Forms::PictureBox^  pictureBox61;
private: System::Windows::Forms::PictureBox^  pictureBox62;
private: System::Windows::Forms::PictureBox^  pictureBox63;
private: System::Windows::Forms::PictureBox^  pictureBox64;
private: System::Windows::Forms::PictureBox^  pictureBox65;
private: System::Windows::Forms::PictureBox^  pictureBox66;
private: System::Windows::Forms::PictureBox^  pictureBox67;
private: System::Windows::Forms::PictureBox^  pictureBox68;
private: System::Windows::Forms::PictureBox^  pictureBox69;
private: System::Windows::Forms::PictureBox^  pictureBox70;
private: System::Windows::Forms::PictureBox^  pictureBox71;
private: System::Windows::Forms::PictureBox^  pictureBox72;
private: System::Windows::Forms::PictureBox^  pictureBox73;
private: System::Windows::Forms::PictureBox^  pictureBox74;
private: System::Windows::Forms::PictureBox^  pictureBox75;
private: System::Windows::Forms::PictureBox^  pictureBox76;
private: System::Windows::Forms::TextBox^  textBox31;
private: System::Windows::Forms::TextBox^  textBox32;
private: System::Windows::Forms::TextBox^  textBox33;
private: System::Windows::Forms::TextBox^  textBox34;
private: System::Windows::Forms::TextBox^  textBox35;
private: System::Windows::Forms::TextBox^  textBox36;
private: System::Windows::Forms::PictureBox^  pictureBox77;
private: System::Windows::Forms::PictureBox^  pictureBox78;
private: System::Windows::Forms::PictureBox^  pictureBox79;
private: System::Windows::Forms::PictureBox^  pictureBox80;
private: System::Windows::Forms::PictureBox^  pictureBox81;
private: System::Windows::Forms::PictureBox^  pictureBox82;
private: System::Windows::Forms::PictureBox^  pictureBox83;
private: System::Windows::Forms::PictureBox^  pictureBox84;
private: System::Windows::Forms::PictureBox^  pictureBox85;
private: System::Windows::Forms::PictureBox^  pictureBox86;
private: System::Windows::Forms::PictureBox^  pictureBox87;
private: System::Windows::Forms::PictureBox^  pictureBox88;
private: System::Windows::Forms::PictureBox^  pictureBox89;
private: System::Windows::Forms::PictureBox^  pictureBox90;
private: System::Windows::Forms::PictureBox^  pictureBox91;
private: System::Windows::Forms::PictureBox^  pictureBox92;
private: System::Windows::Forms::PictureBox^  pictureBox93;
private: System::Windows::Forms::PictureBox^  pictureBox94;
private: System::Windows::Forms::PictureBox^  pictureBox95;
private: System::Windows::Forms::PictureBox^  pictureBox96;
private: System::Windows::Forms::PictureBox^  pictureBox97;
private: System::Windows::Forms::PictureBox^  pictureBox98;
private: System::Windows::Forms::PictureBox^  pictureBox99;
private: System::Windows::Forms::PictureBox^  pictureBox100;
private: System::Windows::Forms::PictureBox^  pictureBox101;
private: System::Windows::Forms::PictureBox^  pictureBox102;
private: System::Windows::Forms::PictureBox^  pictureBox103;
private: System::Windows::Forms::PictureBox^  pictureBox104;
private: System::Windows::Forms::PictureBox^  pictureBox105;
private: System::Windows::Forms::PictureBox^  pictureBox106;
private: System::Windows::Forms::PictureBox^  pictureBox107;
private: System::Windows::Forms::PictureBox^  pictureBox108;
private: System::Windows::Forms::PictureBox^  pictureBox109;
private: System::Windows::Forms::PictureBox^  pictureBox110;
private: System::Windows::Forms::PictureBox^  pictureBox111;
private: System::Windows::Forms::PictureBox^  pictureBox112;
private: System::Windows::Forms::TabPage^  tabPage2;
private: System::Windows::Forms::MenuStrip^  menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  profilToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  odjaviSeToolStripMenuItem;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::ComboBox^  comboBox1;
		 
		 

	

	protected: 








































































































































private: System::Windows::Forms::StatusStrip^  statusStrip1;
private: System::ComponentModel::IContainer^  components;
































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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox66 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox67 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox68 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox69 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox70 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox71 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox72 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox73 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox74 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox75 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox76 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox77 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox78 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox79 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox80 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox81 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox82 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox83 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox84 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox85 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox86 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox87 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox88 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox89 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox90 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox91 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox92 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox93 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox94 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox95 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox96 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox97 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox98 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox99 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox100 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox101 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox102 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox103 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox104 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox105 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox106 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox107 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox108 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox109 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox110 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox111 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox112 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->profilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->odjaviSeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->elektraneToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vjetroelektraneToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->solarnaElektranaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hidroelektranaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->statusStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox66))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox67))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox68))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox69))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox70))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox71))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox72))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox73))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox74))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox75))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox76))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox77))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox78))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox79))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox80))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox81))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox82))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox83))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox84))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox85))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox86))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox87))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox88))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox89))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox90))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox91))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox92))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox93))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox94))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox95))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox96))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox97))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox98))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox99))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox100))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox101))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox102))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox103))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox104))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox105))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox106))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox107))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox108))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox109))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox110))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox111))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox112))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 676);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Padding = System::Windows::Forms::Padding(1, 0, 19, 0);
			this->statusStrip1->Size = System::Drawing::Size(911, 22);
			this->statusStrip1->TabIndex = 87;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(118, 17);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 24);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(911, 652);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::FillToRight;
			this->tabControl1->TabIndex = 102;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage1->Controls->Add(this->textBox40);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->pictureBox5);
			this->tabPage1->Controls->Add(this->pictureBox4);
			this->tabPage1->Controls->Add(this->pictureBox3);
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox19);
			this->tabPage1->Controls->Add(this->textBox20);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->textBox21);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox22);
			this->tabPage1->Controls->Add(this->textBox23);
			this->tabPage1->Controls->Add(this->textBox24);
			this->tabPage1->Controls->Add(this->textBox25);
			this->tabPage1->Controls->Add(this->textBox26);
			this->tabPage1->Controls->Add(this->textBox27);
			this->tabPage1->Controls->Add(this->textBox28);
			this->tabPage1->Controls->Add(this->textBox29);
			this->tabPage1->Controls->Add(this->textBox30);
			this->tabPage1->Controls->Add(this->pictureBox43);
			this->tabPage1->Controls->Add(this->pictureBox57);
			this->tabPage1->Controls->Add(this->pictureBox60);
			this->tabPage1->Controls->Add(this->pictureBox61);
			this->tabPage1->Controls->Add(this->pictureBox62);
			this->tabPage1->Controls->Add(this->pictureBox63);
			this->tabPage1->Controls->Add(this->pictureBox64);
			this->tabPage1->Controls->Add(this->pictureBox65);
			this->tabPage1->Controls->Add(this->pictureBox66);
			this->tabPage1->Controls->Add(this->pictureBox67);
			this->tabPage1->Controls->Add(this->pictureBox68);
			this->tabPage1->Controls->Add(this->pictureBox69);
			this->tabPage1->Controls->Add(this->pictureBox70);
			this->tabPage1->Controls->Add(this->pictureBox71);
			this->tabPage1->Controls->Add(this->pictureBox72);
			this->tabPage1->Controls->Add(this->pictureBox73);
			this->tabPage1->Controls->Add(this->pictureBox74);
			this->tabPage1->Controls->Add(this->pictureBox75);
			this->tabPage1->Controls->Add(this->pictureBox76);
			this->tabPage1->Controls->Add(this->textBox31);
			this->tabPage1->Controls->Add(this->textBox32);
			this->tabPage1->Controls->Add(this->textBox33);
			this->tabPage1->Controls->Add(this->textBox34);
			this->tabPage1->Controls->Add(this->textBox35);
			this->tabPage1->Controls->Add(this->textBox36);
			this->tabPage1->Controls->Add(this->pictureBox77);
			this->tabPage1->Controls->Add(this->pictureBox78);
			this->tabPage1->Controls->Add(this->pictureBox79);
			this->tabPage1->Controls->Add(this->pictureBox80);
			this->tabPage1->Controls->Add(this->pictureBox81);
			this->tabPage1->Controls->Add(this->pictureBox82);
			this->tabPage1->Controls->Add(this->pictureBox83);
			this->tabPage1->Controls->Add(this->pictureBox84);
			this->tabPage1->Controls->Add(this->pictureBox85);
			this->tabPage1->Controls->Add(this->pictureBox86);
			this->tabPage1->Controls->Add(this->pictureBox87);
			this->tabPage1->Controls->Add(this->pictureBox88);
			this->tabPage1->Controls->Add(this->pictureBox89);
			this->tabPage1->Controls->Add(this->pictureBox90);
			this->tabPage1->Controls->Add(this->pictureBox91);
			this->tabPage1->Controls->Add(this->pictureBox92);
			this->tabPage1->Controls->Add(this->pictureBox93);
			this->tabPage1->Controls->Add(this->pictureBox94);
			this->tabPage1->Controls->Add(this->pictureBox95);
			this->tabPage1->Controls->Add(this->pictureBox96);
			this->tabPage1->Controls->Add(this->pictureBox97);
			this->tabPage1->Controls->Add(this->pictureBox98);
			this->tabPage1->Controls->Add(this->pictureBox99);
			this->tabPage1->Controls->Add(this->pictureBox100);
			this->tabPage1->Controls->Add(this->pictureBox101);
			this->tabPage1->Controls->Add(this->pictureBox102);
			this->tabPage1->Controls->Add(this->pictureBox103);
			this->tabPage1->Controls->Add(this->pictureBox104);
			this->tabPage1->Controls->Add(this->pictureBox105);
			this->tabPage1->Controls->Add(this->pictureBox106);
			this->tabPage1->Controls->Add(this->pictureBox107);
			this->tabPage1->Controls->Add(this->pictureBox108);
			this->tabPage1->Controls->Add(this->pictureBox109);
			this->tabPage1->Controls->Add(this->pictureBox110);
			this->tabPage1->Controls->Add(this->pictureBox111);
			this->tabPage1->Controls->Add(this->pictureBox112);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(903, 623);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Prikaz stanja";
			this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click);
			// 
			// textBox40
			// 
			this->textBox40->BackColor = System::Drawing::Color::Aquamarine;
			this->textBox40->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox40->Location = System::Drawing::Point(701, 581);
			this->textBox40->Name = L"textBox40";
			this->textBox40->ReadOnly = true;
			this->textBox40->Size = System::Drawing::Size(100, 23);
			this->textBox40->TabIndex = 191;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(640, 585);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(48, 16);
			this->label16->TabIndex = 190;
			this->label16->Text = L"Višak:";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(706, 422);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(25, 24);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox5->TabIndex = 187;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(597, 422);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(25, 24);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox4->TabIndex = 186;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(819, 422);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(25, 24);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox3->TabIndex = 185;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox2->Location = System::Drawing::Point(827, 414);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(5, 51);
			this->pictureBox2->TabIndex = 184;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox1->Location = System::Drawing::Point(715, 414);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(5, 51);
			this->pictureBox1->TabIndex = 183;
			this->pictureBox1->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::LightGray;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->textBox3->Location = System::Drawing::Point(785, 387);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(106, 27);
			this->textBox3->TabIndex = 182;
			this->textBox3->Text = L"Pumpa HE3";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::LightGray;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(668, 387);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(106, 27);
			this->textBox2->TabIndex = 181;
			this->textBox2->Text = L"Pumpa HE2";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox19->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox19->Enabled = false;
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->textBox19->Location = System::Drawing::Point(23, 371);
			this->textBox19->Margin = System::Windows::Forms::Padding(4);
			this->textBox19->Multiline = true;
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(213, 55);
			this->textBox19->TabIndex = 180;
			this->textBox19->Text = L"Gradska mreža\r\n230V, 50Hz";
			this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox20
			// 
			this->textBox20->BackColor = System::Drawing::Color::Aquamarine;
			this->textBox20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox20->Location = System::Drawing::Point(495, 582);
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(100, 23);
			this->textBox20->TabIndex = 179;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(354, 585);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 16);
			this->label3->TabIndex = 178;
			this->label3->Text = L"Ukupna potrošnja";
			// 
			// textBox21
			// 
			this->textBox21->BackColor = System::Drawing::Color::Aquamarine;
			this->textBox21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox21->Location = System::Drawing::Point(178, 582);
			this->textBox21->Name = L"textBox21";
			this->textBox21->ReadOnly = true;
			this->textBox21->Size = System::Drawing::Size(100, 23);
			this->textBox21->TabIndex = 177;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 585);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 16);
			this->label4->TabIndex = 176;
			this->label4->Text = L"Ukupna proizvodnja";
			// 
			// textBox22
			// 
			this->textBox22->BackColor = System::Drawing::Color::LightPink;
			this->textBox22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox22->Location = System::Drawing::Point(623, 226);
			this->textBox22->Margin = System::Windows::Forms::Padding(4);
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->Size = System::Drawing::Size(37, 23);
			this->textBox22->TabIndex = 175;
			// 
			// textBox23
			// 
			this->textBox23->BackColor = System::Drawing::Color::LightPink;
			this->textBox23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox23->Location = System::Drawing::Point(623, 121);
			this->textBox23->Margin = System::Windows::Forms::Padding(4);
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->Size = System::Drawing::Size(37, 23);
			this->textBox23->TabIndex = 174;
			// 
			// textBox24
			// 
			this->textBox24->BackColor = System::Drawing::Color::LightPink;
			this->textBox24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox24->Location = System::Drawing::Point(623, 17);
			this->textBox24->Margin = System::Windows::Forms::Padding(4);
			this->textBox24->Name = L"textBox24";
			this->textBox24->ReadOnly = true;
			this->textBox24->Size = System::Drawing::Size(37, 23);
			this->textBox24->TabIndex = 173;
			// 
			// textBox25
			// 
			this->textBox25->BackColor = System::Drawing::Color::LightPink;
			this->textBox25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox25->Location = System::Drawing::Point(311, 226);
			this->textBox25->Margin = System::Windows::Forms::Padding(4);
			this->textBox25->Name = L"textBox25";
			this->textBox25->ReadOnly = true;
			this->textBox25->Size = System::Drawing::Size(37, 23);
			this->textBox25->TabIndex = 172;
			// 
			// textBox26
			// 
			this->textBox26->BackColor = System::Drawing::Color::LightPink;
			this->textBox26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox26->Location = System::Drawing::Point(311, 118);
			this->textBox26->Margin = System::Windows::Forms::Padding(4);
			this->textBox26->Name = L"textBox26";
			this->textBox26->ReadOnly = true;
			this->textBox26->Size = System::Drawing::Size(37, 23);
			this->textBox26->TabIndex = 171;
			// 
			// textBox27
			// 
			this->textBox27->BackColor = System::Drawing::Color::LightPink;
			this->textBox27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox27->Location = System::Drawing::Point(307, 17);
			this->textBox27->Margin = System::Windows::Forms::Padding(4);
			this->textBox27->Name = L"textBox27";
			this->textBox27->ReadOnly = true;
			this->textBox27->Size = System::Drawing::Size(37, 23);
			this->textBox27->TabIndex = 170;
			// 
			// textBox28
			// 
			this->textBox28->BackColor = System::Drawing::Color::LightPink;
			this->textBox28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox28->Location = System::Drawing::Point(9, 226);
			this->textBox28->Margin = System::Windows::Forms::Padding(4);
			this->textBox28->Name = L"textBox28";
			this->textBox28->ReadOnly = true;
			this->textBox28->Size = System::Drawing::Size(37, 23);
			this->textBox28->TabIndex = 169;
			// 
			// textBox29
			// 
			this->textBox29->BackColor = System::Drawing::Color::LightPink;
			this->textBox29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox29->Location = System::Drawing::Point(9, 121);
			this->textBox29->Margin = System::Windows::Forms::Padding(4);
			this->textBox29->Name = L"textBox29";
			this->textBox29->ReadOnly = true;
			this->textBox29->Size = System::Drawing::Size(37, 23);
			this->textBox29->TabIndex = 168;
			// 
			// textBox30
			// 
			this->textBox30->BackColor = System::Drawing::Color::LightPink;
			this->textBox30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox30->Location = System::Drawing::Point(9, 17);
			this->textBox30->Margin = System::Windows::Forms::Padding(4);
			this->textBox30->Name = L"textBox30";
			this->textBox30->ReadOnly = true;
			this->textBox30->Size = System::Drawing::Size(37, 23);
			this->textBox30->TabIndex = 167;
			// 
			// pictureBox43
			// 
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(776, 494);
			this->pictureBox43->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(25, 24);
			this->pictureBox43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox43->TabIndex = 165;
			this->pictureBox43->TabStop = false;
			// 
			// pictureBox57
			// 
			this->pictureBox57->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox57.Image")));
			this->pictureBox57->Location = System::Drawing::Point(322, 494);
			this->pictureBox57->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(25, 24);
			this->pictureBox57->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox57->TabIndex = 161;
			this->pictureBox57->TabStop = false;
			// 
			// pictureBox60
			// 
			this->pictureBox60->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox60.Image")));
			this->pictureBox60->Location = System::Drawing::Point(550, 494);
			this->pictureBox60->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(25, 24);
			this->pictureBox60->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox60->TabIndex = 163;
			this->pictureBox60->TabStop = false;
			// 
			// pictureBox61
			// 
			this->pictureBox61->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox61.Image")));
			this->pictureBox61->Location = System::Drawing::Point(411, 422);
			this->pictureBox61->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(25, 24);
			this->pictureBox61->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox61->TabIndex = 162;
			this->pictureBox61->TabStop = false;
			// 
			// pictureBox62
			// 
			this->pictureBox62->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox62.Image")));
			this->pictureBox62->Location = System::Drawing::Point(106, 494);
			this->pictureBox62->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(25, 24);
			this->pictureBox62->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox62->TabIndex = 160;
			this->pictureBox62->TabStop = false;
			this->pictureBox62->Click += gcnew System::EventHandler(this, &Form1::pictureBox62_Click);
			// 
			// pictureBox63
			// 
			this->pictureBox63->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox63.Image")));
			this->pictureBox63->Location = System::Drawing::Point(107, 434);
			this->pictureBox63->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(25, 24);
			this->pictureBox63->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox63->TabIndex = 159;
			this->pictureBox63->TabStop = false;
			// 
			// pictureBox64
			// 
			this->pictureBox64->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox64->Location = System::Drawing::Point(115, 422);
			this->pictureBox64->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(5, 43);
			this->pictureBox64->TabIndex = 158;
			this->pictureBox64->TabStop = false;
			// 
			// pictureBox65
			// 
			this->pictureBox65->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox65->Location = System::Drawing::Point(420, 414);
			this->pictureBox65->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(5, 51);
			this->pictureBox65->TabIndex = 157;
			this->pictureBox65->TabStop = false;
			// 
			// pictureBox66
			// 
			this->pictureBox66->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox66->Location = System::Drawing::Point(606, 414);
			this->pictureBox66->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox66->Name = L"pictureBox66";
			this->pictureBox66->Size = System::Drawing::Size(5, 51);
			this->pictureBox66->TabIndex = 156;
			this->pictureBox66->TabStop = false;
			// 
			// pictureBox67
			// 
			this->pictureBox67->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox67->Location = System::Drawing::Point(785, 469);
			this->pictureBox67->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox67->Name = L"pictureBox67";
			this->pictureBox67->Size = System::Drawing::Size(5, 67);
			this->pictureBox67->TabIndex = 155;
			this->pictureBox67->TabStop = false;
			// 
			// pictureBox68
			// 
			this->pictureBox68->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox68->Location = System::Drawing::Point(559, 470);
			this->pictureBox68->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox68->Name = L"pictureBox68";
			this->pictureBox68->Size = System::Drawing::Size(5, 67);
			this->pictureBox68->TabIndex = 154;
			this->pictureBox68->TabStop = false;
			// 
			// pictureBox69
			// 
			this->pictureBox69->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox69->Location = System::Drawing::Point(331, 470);
			this->pictureBox69->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox69->Name = L"pictureBox69";
			this->pictureBox69->Size = System::Drawing::Size(5, 67);
			this->pictureBox69->TabIndex = 153;
			this->pictureBox69->TabStop = false;
			// 
			// pictureBox70
			// 
			this->pictureBox70->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox70->Location = System::Drawing::Point(115, 470);
			this->pictureBox70->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox70->Name = L"pictureBox70";
			this->pictureBox70->Size = System::Drawing::Size(5, 67);
			this->pictureBox70->TabIndex = 152;
			this->pictureBox70->TabStop = false;
			// 
			// pictureBox71
			// 
			this->pictureBox71->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox71->Location = System::Drawing::Point(420, 331);
			this->pictureBox71->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox71->Name = L"pictureBox71";
			this->pictureBox71->Size = System::Drawing::Size(5, 48);
			this->pictureBox71->TabIndex = 151;
			this->pictureBox71->TabStop = false;
			// 
			// pictureBox72
			// 
			this->pictureBox72->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox72->Location = System::Drawing::Point(882, 15);
			this->pictureBox72->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox72->Name = L"pictureBox72";
			this->pictureBox72->Size = System::Drawing::Size(5, 313);
			this->pictureBox72->TabIndex = 150;
			this->pictureBox72->TabStop = false;
			// 
			// pictureBox73
			// 
			this->pictureBox73->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox73->Location = System::Drawing::Point(571, 16);
			this->pictureBox73->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox73->Name = L"pictureBox73";
			this->pictureBox73->Size = System::Drawing::Size(5, 312);
			this->pictureBox73->TabIndex = 149;
			this->pictureBox73->TabStop = false;
			// 
			// pictureBox74
			// 
			this->pictureBox74->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox74->Location = System::Drawing::Point(267, 328);
			this->pictureBox74->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox74->Name = L"pictureBox74";
			this->pictureBox74->Size = System::Drawing::Size(620, 5);
			this->pictureBox74->TabIndex = 147;
			this->pictureBox74->TabStop = false;
			// 
			// pictureBox75
			// 
			this->pictureBox75->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox75->Location = System::Drawing::Point(267, 15);
			this->pictureBox75->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox75->Name = L"pictureBox75";
			this->pictureBox75->Size = System::Drawing::Size(5, 314);
			this->pictureBox75->TabIndex = 148;
			this->pictureBox75->TabStop = false;
			// 
			// pictureBox76
			// 
			this->pictureBox76->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox76->Location = System::Drawing::Point(115, 465);
			this->pictureBox76->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox76->Name = L"pictureBox76";
			this->pictureBox76->Size = System::Drawing::Size(717, 5);
			this->pictureBox76->TabIndex = 146;
			this->pictureBox76->TabStop = false;
			// 
			// textBox31
			// 
			this->textBox31->BackColor = System::Drawing::Color::LightGray;
			this->textBox31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox31->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox31->Enabled = false;
			this->textBox31->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->textBox31->Location = System::Drawing::Point(676, 536);
			this->textBox31->Margin = System::Windows::Forms::Padding(4);
			this->textBox31->Multiline = true;
			this->textBox31->Name = L"textBox31";
			this->textBox31->ReadOnly = true;
			this->textBox31->Size = System::Drawing::Size(213, 35);
			this->textBox31->TabIndex = 145;
			this->textBox31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox32
			// 
			this->textBox32->BackColor = System::Drawing::Color::LightGray;
			this->textBox32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox32->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox32->Enabled = false;
			this->textBox32->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->textBox32->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox32->Location = System::Drawing::Point(455, 536);
			this->textBox32->Margin = System::Windows::Forms::Padding(4);
			this->textBox32->Multiline = true;
			this->textBox32->Name = L"textBox32";
			this->textBox32->ReadOnly = true;
			this->textBox32->Size = System::Drawing::Size(213, 35);
			this->textBox32->TabIndex = 144;
			this->textBox32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox33
			// 
			this->textBox33->BackColor = System::Drawing::Color::LightGray;
			this->textBox33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox33->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox33->Enabled = false;
			this->textBox33->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->textBox33->Location = System::Drawing::Point(232, 536);
			this->textBox33->Margin = System::Windows::Forms::Padding(4);
			this->textBox33->Multiline = true;
			this->textBox33->Name = L"textBox33";
			this->textBox33->ReadOnly = true;
			this->textBox33->Size = System::Drawing::Size(213, 35);
			this->textBox33->TabIndex = 143;
			this->textBox33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox34
			// 
			this->textBox34->BackColor = System::Drawing::Color::LightGray;
			this->textBox34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox34->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox34->Enabled = false;
			this->textBox34->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->textBox34->Location = System::Drawing::Point(554, 387);
			this->textBox34->Margin = System::Windows::Forms::Padding(4);
			this->textBox34->Name = L"textBox34";
			this->textBox34->ReadOnly = true;
			this->textBox34->Size = System::Drawing::Size(106, 27);
			this->textBox34->TabIndex = 141;
			this->textBox34->Text = L"Pumpa HE1";
			this->textBox34->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox35
			// 
			this->textBox35->BackColor = System::Drawing::Color::Thistle;
			this->textBox35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox35->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox35->Enabled = false;
			this->textBox35->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->textBox35->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox35->Location = System::Drawing::Point(315, 379);
			this->textBox35->Margin = System::Windows::Forms::Padding(4);
			this->textBox35->Multiline = true;
			this->textBox35->Name = L"textBox35";
			this->textBox35->ReadOnly = true;
			this->textBox35->Size = System::Drawing::Size(213, 35);
			this->textBox35->TabIndex = 140;
			this->textBox35->Text = L"12V DC / 230V AC";
			this->textBox35->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox36
			// 
			this->textBox36->BackColor = System::Drawing::Color::LightGray;
			this->textBox36->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox36->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox36->Enabled = false;
			this->textBox36->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->textBox36->Location = System::Drawing::Point(7, 536);
			this->textBox36->Margin = System::Windows::Forms::Padding(4);
			this->textBox36->Multiline = true;
			this->textBox36->Name = L"textBox36";
			this->textBox36->ReadOnly = true;
			this->textBox36->Size = System::Drawing::Size(213, 35);
			this->textBox36->TabIndex = 142;
			this->textBox36->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox77
			// 
			this->pictureBox77->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox77.Image")));
			this->pictureBox77->Location = System::Drawing::Point(843, 266);
			this->pictureBox77->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox77->Name = L"pictureBox77";
			this->pictureBox77->Size = System::Drawing::Size(13, 12);
			this->pictureBox77->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox77->TabIndex = 139;
			this->pictureBox77->TabStop = false;
			// 
			// pictureBox78
			// 
			this->pictureBox78->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox78.Image")));
			this->pictureBox78->Location = System::Drawing::Point(864, 255);
			this->pictureBox78->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox78->Name = L"pictureBox78";
			this->pictureBox78->Size = System::Drawing::Size(13, 12);
			this->pictureBox78->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox78->TabIndex = 138;
			this->pictureBox78->TabStop = false;
			// 
			// pictureBox79
			// 
			this->pictureBox79->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox79.Image")));
			this->pictureBox79->Location = System::Drawing::Point(819, 255);
			this->pictureBox79->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox79->Name = L"pictureBox79";
			this->pictureBox79->Size = System::Drawing::Size(13, 12);
			this->pictureBox79->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox79->TabIndex = 137;
			this->pictureBox79->TabStop = false;
			// 
			// pictureBox80
			// 
			this->pictureBox80->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox80.Image")));
			this->pictureBox80->Location = System::Drawing::Point(843, 160);
			this->pictureBox80->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox80->Name = L"pictureBox80";
			this->pictureBox80->Size = System::Drawing::Size(13, 12);
			this->pictureBox80->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox80->TabIndex = 136;
			this->pictureBox80->TabStop = false;
			// 
			// pictureBox81
			// 
			this->pictureBox81->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox81.Image")));
			this->pictureBox81->Location = System::Drawing::Point(864, 151);
			this->pictureBox81->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox81->Name = L"pictureBox81";
			this->pictureBox81->Size = System::Drawing::Size(13, 12);
			this->pictureBox81->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox81->TabIndex = 135;
			this->pictureBox81->TabStop = false;
			// 
			// pictureBox82
			// 
			this->pictureBox82->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox82.Image")));
			this->pictureBox82->Location = System::Drawing::Point(819, 152);
			this->pictureBox82->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox82->Name = L"pictureBox82";
			this->pictureBox82->Size = System::Drawing::Size(13, 12);
			this->pictureBox82->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox82->TabIndex = 134;
			this->pictureBox82->TabStop = false;
			// 
			// pictureBox83
			// 
			this->pictureBox83->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox83.Image")));
			this->pictureBox83->Location = System::Drawing::Point(843, 49);
			this->pictureBox83->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox83->Name = L"pictureBox83";
			this->pictureBox83->Size = System::Drawing::Size(13, 12);
			this->pictureBox83->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox83->TabIndex = 133;
			this->pictureBox83->TabStop = false;
			// 
			// pictureBox84
			// 
			this->pictureBox84->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox84.Image")));
			this->pictureBox84->Location = System::Drawing::Point(864, 46);
			this->pictureBox84->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox84->Name = L"pictureBox84";
			this->pictureBox84->Size = System::Drawing::Size(13, 12);
			this->pictureBox84->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox84->TabIndex = 132;
			this->pictureBox84->TabStop = false;
			// 
			// pictureBox85
			// 
			this->pictureBox85->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox85.Image")));
			this->pictureBox85->Location = System::Drawing::Point(819, 46);
			this->pictureBox85->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox85->Name = L"pictureBox85";
			this->pictureBox85->Size = System::Drawing::Size(13, 12);
			this->pictureBox85->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox85->TabIndex = 131;
			this->pictureBox85->TabStop = false;
			// 
			// pictureBox86
			// 
			this->pictureBox86->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox86.Image")));
			this->pictureBox86->Location = System::Drawing::Point(532, 266);
			this->pictureBox86->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox86->Name = L"pictureBox86";
			this->pictureBox86->Size = System::Drawing::Size(13, 12);
			this->pictureBox86->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox86->TabIndex = 130;
			this->pictureBox86->TabStop = false;
			// 
			// pictureBox87
			// 
			this->pictureBox87->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox87.Image")));
			this->pictureBox87->Location = System::Drawing::Point(554, 255);
			this->pictureBox87->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox87->Name = L"pictureBox87";
			this->pictureBox87->Size = System::Drawing::Size(13, 12);
			this->pictureBox87->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox87->TabIndex = 129;
			this->pictureBox87->TabStop = false;
			// 
			// pictureBox88
			// 
			this->pictureBox88->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox88.Image")));
			this->pictureBox88->Location = System::Drawing::Point(508, 255);
			this->pictureBox88->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox88->Name = L"pictureBox88";
			this->pictureBox88->Size = System::Drawing::Size(13, 12);
			this->pictureBox88->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox88->TabIndex = 128;
			this->pictureBox88->TabStop = false;
			// 
			// pictureBox89
			// 
			this->pictureBox89->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox89.Image")));
			this->pictureBox89->Location = System::Drawing::Point(532, 162);
			this->pictureBox89->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox89->Name = L"pictureBox89";
			this->pictureBox89->Size = System::Drawing::Size(13, 12);
			this->pictureBox89->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox89->TabIndex = 127;
			this->pictureBox89->TabStop = false;
			// 
			// pictureBox90
			// 
			this->pictureBox90->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox90.Image")));
			this->pictureBox90->Location = System::Drawing::Point(553, 151);
			this->pictureBox90->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox90->Name = L"pictureBox90";
			this->pictureBox90->Size = System::Drawing::Size(13, 12);
			this->pictureBox90->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox90->TabIndex = 126;
			this->pictureBox90->TabStop = false;
			// 
			// pictureBox91
			// 
			this->pictureBox91->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox91.Image")));
			this->pictureBox91->Location = System::Drawing::Point(508, 151);
			this->pictureBox91->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox91->Name = L"pictureBox91";
			this->pictureBox91->Size = System::Drawing::Size(13, 12);
			this->pictureBox91->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox91->TabIndex = 125;
			this->pictureBox91->TabStop = false;
			// 
			// pictureBox92
			// 
			this->pictureBox92->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox92.Image")));
			this->pictureBox92->Location = System::Drawing::Point(532, 59);
			this->pictureBox92->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox92->Name = L"pictureBox92";
			this->pictureBox92->Size = System::Drawing::Size(13, 12);
			this->pictureBox92->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox92->TabIndex = 124;
			this->pictureBox92->TabStop = false;
			// 
			// pictureBox93
			// 
			this->pictureBox93->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox93.Image")));
			this->pictureBox93->Location = System::Drawing::Point(553, 49);
			this->pictureBox93->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox93->Name = L"pictureBox93";
			this->pictureBox93->Size = System::Drawing::Size(13, 12);
			this->pictureBox93->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox93->TabIndex = 123;
			this->pictureBox93->TabStop = false;
			// 
			// pictureBox94
			// 
			this->pictureBox94->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox94.Image")));
			this->pictureBox94->Location = System::Drawing::Point(508, 49);
			this->pictureBox94->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox94->Name = L"pictureBox94";
			this->pictureBox94->Size = System::Drawing::Size(13, 12);
			this->pictureBox94->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox94->TabIndex = 122;
			this->pictureBox94->TabStop = false;
			// 
			// pictureBox95
			// 
			this->pictureBox95->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox95.Image")));
			this->pictureBox95->Location = System::Drawing::Point(228, 280);
			this->pictureBox95->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox95->Name = L"pictureBox95";
			this->pictureBox95->Size = System::Drawing::Size(13, 12);
			this->pictureBox95->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox95->TabIndex = 121;
			this->pictureBox95->TabStop = false;
			// 
			// pictureBox96
			// 
			this->pictureBox96->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox96.Image")));
			this->pictureBox96->Location = System::Drawing::Point(248, 271);
			this->pictureBox96->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox96->Name = L"pictureBox96";
			this->pictureBox96->Size = System::Drawing::Size(13, 12);
			this->pictureBox96->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox96->TabIndex = 120;
			this->pictureBox96->TabStop = false;
			// 
			// pictureBox97
			// 
			this->pictureBox97->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox97.Image")));
			this->pictureBox97->Location = System::Drawing::Point(202, 271);
			this->pictureBox97->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox97->Name = L"pictureBox97";
			this->pictureBox97->Size = System::Drawing::Size(13, 12);
			this->pictureBox97->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox97->TabIndex = 119;
			this->pictureBox97->TabStop = false;
			// 
			// pictureBox98
			// 
			this->pictureBox98->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox98.Image")));
			this->pictureBox98->Location = System::Drawing::Point(228, 172);
			this->pictureBox98->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox98->Name = L"pictureBox98";
			this->pictureBox98->Size = System::Drawing::Size(13, 12);
			this->pictureBox98->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox98->TabIndex = 118;
			this->pictureBox98->TabStop = false;
			// 
			// pictureBox99
			// 
			this->pictureBox99->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox99.Image")));
			this->pictureBox99->Location = System::Drawing::Point(248, 166);
			this->pictureBox99->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox99->Name = L"pictureBox99";
			this->pictureBox99->Size = System::Drawing::Size(13, 12);
			this->pictureBox99->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox99->TabIndex = 117;
			this->pictureBox99->TabStop = false;
			// 
			// pictureBox100
			// 
			this->pictureBox100->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox100.Image")));
			this->pictureBox100->Location = System::Drawing::Point(202, 165);
			this->pictureBox100->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox100->Name = L"pictureBox100";
			this->pictureBox100->Size = System::Drawing::Size(13, 12);
			this->pictureBox100->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox100->TabIndex = 116;
			this->pictureBox100->TabStop = false;
			// 
			// pictureBox101
			// 
			this->pictureBox101->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox101.Image")));
			this->pictureBox101->Location = System::Drawing::Point(228, 70);
			this->pictureBox101->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox101->Name = L"pictureBox101";
			this->pictureBox101->Size = System::Drawing::Size(13, 12);
			this->pictureBox101->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox101->TabIndex = 115;
			this->pictureBox101->TabStop = false;
			// 
			// pictureBox102
			// 
			this->pictureBox102->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox102.Image")));
			this->pictureBox102->Location = System::Drawing::Point(248, 60);
			this->pictureBox102->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox102->Name = L"pictureBox102";
			this->pictureBox102->Size = System::Drawing::Size(13, 12);
			this->pictureBox102->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox102->TabIndex = 114;
			this->pictureBox102->TabStop = false;
			// 
			// pictureBox103
			// 
			this->pictureBox103->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox103.Image")));
			this->pictureBox103->Location = System::Drawing::Point(202, 60);
			this->pictureBox103->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox103->Name = L"pictureBox103";
			this->pictureBox103->Size = System::Drawing::Size(13, 12);
			this->pictureBox103->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox103->TabIndex = 113;
			this->pictureBox103->TabStop = false;
			// 
			// pictureBox104
			// 
			this->pictureBox104->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox104.Image")));
			this->pictureBox104->Location = System::Drawing::Point(668, 226);
			this->pictureBox104->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox104->Name = L"pictureBox104";
			this->pictureBox104->Size = System::Drawing::Size(215, 95);
			this->pictureBox104->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox104->TabIndex = 112;
			this->pictureBox104->TabStop = false;
			this->pictureBox104->MouseHover += gcnew System::EventHandler(this, &Form1::pictureBox104_MouseHover);
			// 
			// pictureBox105
			// 
			this->pictureBox105->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox105.Image")));
			this->pictureBox105->Location = System::Drawing::Point(668, 121);
			this->pictureBox105->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox105->Name = L"pictureBox105";
			this->pictureBox105->Size = System::Drawing::Size(215, 95);
			this->pictureBox105->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox105->TabIndex = 111;
			this->pictureBox105->TabStop = false;
			this->pictureBox105->MouseHover += gcnew System::EventHandler(this, &Form1::pictureBox105_MouseHover);
			// 
			// pictureBox106
			// 
			this->pictureBox106->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox106.Image")));
			this->pictureBox106->Location = System::Drawing::Point(668, 18);
			this->pictureBox106->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox106->Name = L"pictureBox106";
			this->pictureBox106->Size = System::Drawing::Size(215, 95);
			this->pictureBox106->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox106->TabIndex = 110;
			this->pictureBox106->TabStop = false;
			this->pictureBox106->MouseHover += gcnew System::EventHandler(this, &Form1::pictureBox106_MouseHover);
			// 
			// pictureBox107
			// 
			this->pictureBox107->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox107->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox107.Image")));
			this->pictureBox107->Location = System::Drawing::Point(357, 226);
			this->pictureBox107->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox107->Name = L"pictureBox107";
			this->pictureBox107->Size = System::Drawing::Size(215, 95);
			this->pictureBox107->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox107->TabIndex = 109;
			this->pictureBox107->TabStop = false;
			this->pictureBox107->MouseHover += gcnew System::EventHandler(this, &Form1::pictureBox107_MouseHover);
			// 
			// pictureBox108
			// 
			this->pictureBox108->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox108.Image")));
			this->pictureBox108->Location = System::Drawing::Point(357, 121);
			this->pictureBox108->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox108->Name = L"pictureBox108";
			this->pictureBox108->Size = System::Drawing::Size(215, 95);
			this->pictureBox108->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox108->TabIndex = 108;
			this->pictureBox108->TabStop = false;
			this->pictureBox108->MouseHover += gcnew System::EventHandler(this, &Form1::pictureBox108_MouseHover);
			// 
			// pictureBox109
			// 
			this->pictureBox109->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox109.Image")));
			this->pictureBox109->Location = System::Drawing::Point(357, 16);
			this->pictureBox109->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox109->Name = L"pictureBox109";
			this->pictureBox109->Size = System::Drawing::Size(215, 95);
			this->pictureBox109->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox109->TabIndex = 107;
			this->pictureBox109->TabStop = false;
			this->pictureBox109->MouseHover += gcnew System::EventHandler(this, &Form1::pictureBox109_MouseHover);
			// 
			// pictureBox110
			// 
			this->pictureBox110->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox110->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox110.Image")));
			this->pictureBox110->Location = System::Drawing::Point(53, 226);
			this->pictureBox110->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox110->Name = L"pictureBox110";
			this->pictureBox110->Size = System::Drawing::Size(215, 95);
			this->pictureBox110->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox110->TabIndex = 106;
			this->pictureBox110->TabStop = false;
			this->pictureBox110->MouseHover += gcnew System::EventHandler(this, &Form1::pictureBox110_MouseHover);
			// 
			// pictureBox111
			// 
			this->pictureBox111->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox111->ErrorImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox111.ErrorImage")));
			this->pictureBox111->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox111.Image")));
			this->pictureBox111->Location = System::Drawing::Point(53, 121);
			this->pictureBox111->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox111->Name = L"pictureBox111";
			this->pictureBox111->Size = System::Drawing::Size(215, 95);
			this->pictureBox111->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox111->TabIndex = 105;
			this->pictureBox111->TabStop = false;
			this->pictureBox111->MouseEnter += gcnew System::EventHandler(this, &Form1::pictureBox111_MouseEnter);
			// 
			// pictureBox112
			// 
			this->pictureBox112->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox112->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox112.Image")));
			this->pictureBox112->Location = System::Drawing::Point(53, 16);
			this->pictureBox112->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox112->Name = L"pictureBox112";
			this->pictureBox112->Size = System::Drawing::Size(215, 95);
			this->pictureBox112->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox112->TabIndex = 104;
			this->pictureBox112->TabStop = false;
			this->pictureBox112->MouseHover += gcnew System::EventHandler(this, &Form1::pictureBox112_MouseHover);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage2->Controls->Add(this->listView1);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->radioButton2);
			this->tabPage2->Controls->Add(this->radioButton1);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->comboBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(903, 623);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Potrošači";
			this->tabPage2->Click += gcnew System::EventHandler(this, &Form1::tabPage2_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3});
			this->listView1->Location = System::Drawing::Point(626, 79);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(254, 230);
			this->listView1->TabIndex = 13;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Potrošač";
			this->columnHeader1->Width = 79;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Potrošnja";
			this->columnHeader2->Width = 85;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Uključen";
			this->columnHeader3->Width = 84;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(259, 88);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(163, 18);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Podaci o potrošaču";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(167, 240);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Briši";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(262, 240);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Izmjeni podatke";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(411, 240);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Dodaj potrošača";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(383, 179);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(43, 20);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"NE";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(332, 179);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(44, 20);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"DA";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(259, 181);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 16);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Uključen:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(256, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Potrošnja";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Lista potrošača:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(332, 124);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 23);
			this->textBox1->TabIndex = 1;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(26, 98);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(154, 24);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"Izaberite potrošača";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage3->Controls->Add(this->textBox16);
			this->tabPage3->Controls->Add(this->textBox17);
			this->tabPage3->Controls->Add(this->textBox18);
			this->tabPage3->Controls->Add(this->textBox37);
			this->tabPage3->Controls->Add(this->textBox38);
			this->tabPage3->Controls->Add(this->textBox39);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->comboBox4);
			this->tabPage3->Controls->Add(this->textBox10);
			this->tabPage3->Controls->Add(this->textBox11);
			this->tabPage3->Controls->Add(this->textBox12);
			this->tabPage3->Controls->Add(this->textBox13);
			this->tabPage3->Controls->Add(this->textBox14);
			this->tabPage3->Controls->Add(this->textBox15);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->comboBox3);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->textBox9);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->textBox8);
			this->tabPage3->Controls->Add(this->textBox7);
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Controls->Add(this->textBox5);
			this->tabPage3->Controls->Add(this->textBox4);
			this->tabPage3->Controls->Add(this->comboBox2);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(903, 623);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Alarmi i zaštita";
			this->tabPage3->Click += gcnew System::EventHandler(this, &Form1::tabPage3_Click);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(774, 272);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(70, 23);
			this->textBox16->TabIndex = 29;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(681, 272);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(70, 23);
			this->textBox17->TabIndex = 28;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(557, 272);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(70, 23);
			this->textBox18->TabIndex = 27;
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(462, 272);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(70, 23);
			this->textBox37->TabIndex = 26;
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(318, 272);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(70, 23);
			this->textBox38->TabIndex = 25;
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(236, 272);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(70, 23);
			this->textBox39->TabIndex = 24;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(14, 253);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(102, 16);
			this->label15->TabIndex = 23;
			this->label15->Text = L"Hidroelektrane";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(8, 272);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(188, 24);
			this->comboBox4->TabIndex = 22;
			this->comboBox4->Text = L"Izaberite hidroelektranu";
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox4_SelectedIndexChanged);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(774, 180);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(70, 23);
			this->textBox10->TabIndex = 21;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(681, 180);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(70, 23);
			this->textBox11->TabIndex = 20;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(557, 180);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(70, 23);
			this->textBox12->TabIndex = 19;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(462, 180);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(70, 23);
			this->textBox13->TabIndex = 18;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(318, 180);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(70, 23);
			this->textBox14->TabIndex = 17;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(236, 180);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(70, 23);
			this->textBox15->TabIndex = 16;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(11, 160);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(123, 16);
			this->label14->TabIndex = 15;
			this->label14->Text = L"Solarne elektrane";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(8, 179);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(199, 24);
			this->comboBox3->TabIndex = 14;
			this->comboBox3->Text = L"Izaberite solarnu elektranu";
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox3_SelectedIndexChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label13->Location = System::Drawing::Point(771, 58);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(85, 13);
			this->label13->TabIndex = 13;
			this->label13->Text = L"Zemljospojna";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(774, 91);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(70, 23);
			this->textBox9->TabIndex = 12;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(8, 69);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(109, 16);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Vjetroelektrane";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label11->Location = System::Drawing::Point(678, 58);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(80, 13);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Prekostrujna";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(554, 58);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(91, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Nadfrekventna";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label9->Location = System::Drawing::Point(459, 58);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(90, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Podfrekventna";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(315, 58);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Prenaponska";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(233, 58);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(83, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Podnaponska";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(681, 91);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(70, 23);
			this->textBox8->TabIndex = 5;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(557, 91);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(70, 23);
			this->textBox7->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(462, 91);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(70, 23);
			this->textBox6->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(318, 91);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(70, 23);
			this->textBox5->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(236, 91);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(70, 23);
			this->textBox4->TabIndex = 1;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(8, 88);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(188, 24);
			this->comboBox2->TabIndex = 0;
			this->comboBox2->Text = L"Izaberite vjetroelektranu";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox2_SelectedIndexChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->fileToolStripMenuItem, 
				this->elektraneToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(911, 24);
			this->menuStrip1->TabIndex = 103;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->profilToolStripMenuItem, 
				this->odjaviSeToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(95, 20);
			this->fileToolStripMenuItem->Text = L"Administracija";
			this->fileToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::fileToolStripMenuItem_Click);
			// 
			// profilToolStripMenuItem
			// 
			this->profilToolStripMenuItem->Name = L"profilToolStripMenuItem";
			this->profilToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->profilToolStripMenuItem->Text = L"Profil";
			// 
			// odjaviSeToolStripMenuItem
			// 
			this->odjaviSeToolStripMenuItem->Name = L"odjaviSeToolStripMenuItem";
			this->odjaviSeToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->odjaviSeToolStripMenuItem->Text = L"Odjavi se";
			this->odjaviSeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::odjaviSeToolStripMenuItem_Click);
			// 
			// elektraneToolStripMenuItem
			// 
			this->elektraneToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->vjetroelektraneToolStripMenuItem, 
				this->solarnaElektranaToolStripMenuItem, this->hidroelektranaToolStripMenuItem});
			this->elektraneToolStripMenuItem->Name = L"elektraneToolStripMenuItem";
			this->elektraneToolStripMenuItem->Size = System::Drawing::Size(67, 20);
			this->elektraneToolStripMenuItem->Text = L"Elektrane";
			// 
			// vjetroelektraneToolStripMenuItem
			// 
			this->vjetroelektraneToolStripMenuItem->Name = L"vjetroelektraneToolStripMenuItem";
			this->vjetroelektraneToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->vjetroelektraneToolStripMenuItem->Text = L"Vjetroelektrane";
			this->vjetroelektraneToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::vjetroelektraneToolStripMenuItem_Click);
			// 
			// solarnaElektranaToolStripMenuItem
			// 
			this->solarnaElektranaToolStripMenuItem->Name = L"solarnaElektranaToolStripMenuItem";
			this->solarnaElektranaToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->solarnaElektranaToolStripMenuItem->Text = L"Solarne elektrane";
			this->solarnaElektranaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::solarnaElektranaToolStripMenuItem_Click);
			// 
			// hidroelektranaToolStripMenuItem
			// 
			this->hidroelektranaToolStripMenuItem->Name = L"hidroelektranaToolStripMenuItem";
			this->hidroelektranaToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->hidroelektranaToolStripMenuItem->Text = L"Hidroelektrane";
			this->hidroelektranaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::hidroelektranaToolStripMenuItem_Click);
			// 
			// toolTip1
			// 
			this->toolTip1->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &Form1::toolTip1_Popup);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(911, 698);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"SCADA Sistem";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox66))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox67))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox68))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox69))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox70))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox71))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox72))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox73))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox74))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox75))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox76))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox77))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox78))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox79))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox80))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox81))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox82))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox83))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox84))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox85))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox86))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox87))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox88))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox89))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox90))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox91))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox92))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox93))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox94))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox95))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox96))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox97))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox98))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox99))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox100))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox101))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox102))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox103))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox104))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox105))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox106))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox107))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox108))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox109))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox110))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox111))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox112))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
			 private:void UcitajIPostavi()
					 {
						 //DEKLARACIJA CITACA ZA POTROSACE
						 FileStream^ fstrm = gcnew FileStream("potrosaci.txt", FileMode::Open,FileAccess::Read);
			 BinaryReader^ binw = gcnew BinaryReader(fstrm);
			 binw->BaseStream->Seek(0,SeekOrigin::Begin);
			 //DEKLARACIJA CITACA ZA HE
			 FileStream^ fstrm1 = gcnew FileStream("hidroelektrane.txt", FileMode::Open,FileAccess::Read);
			 BinaryReader^ binw1 = gcnew BinaryReader(fstrm1);
			 binw1->BaseStream->Seek(0,SeekOrigin::Begin);
			 //DEKLARACIJA CITACA ZA SE	
			 FileStream^ fstrm2 = gcnew FileStream("solarneektrane.txt", FileMode::Open,FileAccess::Read);
			 BinaryReader^ binw2 = gcnew BinaryReader(fstrm2);
			 binw2->BaseStream->Seek(0,SeekOrigin::Begin);
			 //DEKLARACIJA CITACA ZA VE
			 FileStream^ fstrm3 = gcnew FileStream("vjetroelektrane.txt", FileMode::Open,FileAccess::Read);
			 BinaryReader^ binw3 = gcnew BinaryReader(fstrm3);
			 binw3->BaseStream->Seek(0,SeekOrigin::Begin);
			//DEKLARACIJA KLASA ZA SVAKU DATOTEKU
			 Potrosac ^p;
			 Hidroelektrana ^hidroelektrana;
			 SolarnaElektrana ^solarna;
			 Vjetroelektrana ^vjetro;
			 int b1,b2,b3,s1,s2,s3,v1,v2,v3;
			 b1=0;b2=0;b3=0;s1=0;s2=0;s3=0;v1=0;v2=0;v3=0;
			 try
			 {

				 //CITANJE DATOTEKE POTROSACA
				 while(binw->PeekChar()!=-1)
				 {
					 p=gcnew Potrosac();
					 p->Read(binw);
					 System::Windows::Forms::ListViewItem ^list=gcnew System::Windows::Forms::ListViewItem;
					 if(comboBox1->Items->Contains(p->getIme())==false)
					 {
						comboBox1->Items->Add(p->getIme());
						list=listView1->Items->Add(p->getIme());
						list->SubItems->Add(Convert::ToString(p->getPotrosnja()));
						list->SubItems->Add(Convert::ToString(p->getUkljucen()));
						
							potrosaci->Add(p);
						}
					 if(p->getIme()=="Potrošač1")
					 {
						 if(p->getUkljucen()==true)
						 {
							pictureBox62->Visible=false;
							textBox36->Text=p->getIme();
							textBox36->BackColor=System::Drawing::Color::LightGreen;
							pictureBox76->BackColor=System::Drawing::Color::LightGreen;
							pictureBox70->BackColor=System::Drawing::Color::LightGreen;
							}
						 else
						 {
							textBox36->Text=p->getIme();
							pictureBox76->BackColor=System::Drawing::Color::LightGray;
							pictureBox70->BackColor=System::Drawing::Color::LightGray;
							}
					 }
					 if(p->getIme()=="Potrošač2")
					 {
						 if(p->getUkljucen()==true)
						 {
							pictureBox57->Visible=false;
							textBox33->Text=p->getIme();
							textBox33->BackColor=System::Drawing::Color::LightGreen;
							
							pictureBox69->BackColor=System::Drawing::Color::LightGreen;
							}
						 else
						 {
							textBox33->Text=p->getIme();
							
							pictureBox69->BackColor=System::Drawing::Color::LightGray;
							}
					 }
					 if(p->getIme()=="Potrošač3")
					 {
						 if(p->getUkljucen()==true)
						 {
							pictureBox60->Visible=false;
							textBox32->Text=p->getIme();
							textBox32->BackColor=System::Drawing::Color::LightGreen;
							
							pictureBox68->BackColor=System::Drawing::Color::LightGreen;
							}
						 else
						 {
							textBox32->Text=p->getIme();
							
							pictureBox68->BackColor=System::Drawing::Color::LightGray;
							}
					 }
					 if(p->getIme()=="Potrošač4")
					 {
						 if(p->getUkljucen()==true)
						 {
							pictureBox43->Visible=false;
							textBox31->Text=p->getIme();
							textBox31->BackColor=System::Drawing::Color::LightGreen;
							
							pictureBox67->BackColor=System::Drawing::Color::LightGreen;
							}
						 else
						 {
							textBox31->Text=p->getIme();
							
							pictureBox67->BackColor=System::Drawing::Color::LightGray;
							}
					 }
				 }
				


				 //CITANJE DATOTEKE HIDROELEKTRANA
				 he->Clear();
				 comboBox4->Items->Clear();
				 while(binw1->PeekChar()!=-1)
				 {
					 hidroelektrana=gcnew Hidroelektrana();
					 hidroelektrana->Read(binw1);
					 hidroelektrana->setPunjenje(true);
					 hidroelektrana->setPražnjenje(false);
						he->Add(hidroelektrana);
						comboBox4->Items->Add(hidroelektrana->getIme());
					 if(hidroelektrana->getIme()=="HE1")
					 {
						 b1++;
						 textBox24->Text=hidroelektrana->getIme();
						 pictureBox106->Visible=true;
						 if(hidroelektrana->getUkljucena()==false)
						 {
							 pictureBox85->Visible=true;
							 pictureBox83->Visible=true;
							 pictureBox84->Visible=true;
						 }
						 else if(hidroelektrana->getPunjnje()==true)
						 {
							 pictureBox85->Visible=false;
							 pictureBox83->Visible=false;
							 pictureBox84->Visible=true;
						 }
						 else
						 {
							 if(hidroelektrana->getPraznjenje()==true)
							 {
								 pictureBox85->Visible=true;
								pictureBox83->Visible=false;
								pictureBox84->Visible=false;
							 }
							 else
							 {
								 pictureBox85->Visible=false;
								pictureBox83->Visible=true;
								pictureBox84->Visible=false;
							 }
						 }

					 }
					 
					 //PROVJERA HE2	
					 if(hidroelektrana->getIme()=="HE2")
					 {
						 b2++;
						 textBox23->Text=hidroelektrana->getIme();
						 pictureBox105->Visible=true;
						 if(hidroelektrana->getUkljucena()==false)
						 {
							 pictureBox82->Visible=true;
							 pictureBox80->Visible=true;
							 pictureBox81->Visible=true;

						 }
						 else if(hidroelektrana->getPunjnje()==true)
						 {
							 pictureBox82->Visible=false;
							 pictureBox80->Visible=false;
							 pictureBox81->Visible=true;
						 }
						 else
						 {
							 if(hidroelektrana->getPraznjenje()==true)
							 {
								 pictureBox82->Visible=true;
								pictureBox80->Visible=false;
								pictureBox81->Visible=false;
							 }
							 else
							 {
								 pictureBox82->Visible=false;
								pictureBox80->Visible=true;
								pictureBox81->Visible=false;
							 }
						 }

					 }
					 
					 //PROVJERA ZA HE3
					 if(hidroelektrana->getIme()=="HE3")
					 {
						 b3++;
						 textBox22->Text=hidroelektrana->getIme();
						 pictureBox104->Visible=true;
						 if(hidroelektrana->getUkljucena()==false)
						 {
							 pictureBox79->Visible=true;
							 pictureBox77->Visible=true;
							 pictureBox78->Visible=true;

						 }
						 else if(hidroelektrana->getPunjnje()==true)
						 {
							 pictureBox79->Visible=false;
							 pictureBox77->Visible=false;
							 pictureBox78->Visible=true;
						 }
						 else
						 {
							 if(hidroelektrana->getPraznjenje()==true)
							 {
								 pictureBox79->Visible=true;
								pictureBox77->Visible=false;
								pictureBox78->Visible=false;
							 }
							 else
							 {
								 pictureBox79->Visible=false;
								pictureBox77->Visible=true;
								pictureBox78->Visible=false;
							 }
						 }

					 }
				 }
				 //KRAJ UCITAVANJA ZA HE

					 //CITANJE SE
				 se->Clear();
				 comboBox3->Items->Clear();
					 while(binw2->PeekChar()!=-1)
					 {
						 solarna=gcnew SolarnaElektrana();
						 solarna->ReadSE(binw2);
						 if(solarna->getInsolacija()>0)
						 {
							solarna->setPunjenje(true);
							solarna->setPražnjenje(false);
							}
						 else
						 {
							 solarna->setPunjenje(false);
							 solarna->setPražnjenje(false);
						 }
							se->Add(solarna);
							comboBox3->Items->Add(solarna->getIme());
						 //SE1
						 if(solarna->getIme()=="SE1")
						 {
							 s1++;
							 textBox27->Text=solarna->getIme();
							 pictureBox109->Visible=true;
							 if(solarna->getUkljucena()==false)
							 {
								 pictureBox94->Visible=true;
								 pictureBox92->Visible=true;
								 pictureBox93->Visible=true;
							 }
							 else if(solarna->getPunjnje()==true)
							 {
								 pictureBox94->Visible=false;
								 pictureBox92->Visible=false;
								 pictureBox93->Visible=true;
							 }
							 else
							 {
								 if(solarna->getPraznjenje()==true)
								 {
									 pictureBox94->Visible=true;
									pictureBox92->Visible=false;
									pictureBox93->Visible=false;
								 }
								 else
								 {
									 pictureBox94->Visible=true;
									pictureBox92->Visible=true;
									pictureBox93->Visible=true;
								 }
							 }

						 }
						 
						 //PROVJERA SE2	
						 if(solarna->getIme()=="SE2")
						 {
							 s2++;
							 textBox26->Text=solarna->getIme();
							 pictureBox108->Visible=true;
							 if(solarna->getUkljucena()==false)
							 {
								 pictureBox91->Visible=true;
								 pictureBox89->Visible=true;
								 pictureBox90->Visible=true;
							 }
							 else if(solarna->getPunjnje()==true)
							 {
								 pictureBox91->Visible=false;
								 pictureBox89->Visible=false;
								 pictureBox90->Visible=true;
							 }
							 else
							 {
								 if(solarna->getPraznjenje()==true)
								 {
									 pictureBox91->Visible=true;
									pictureBox89->Visible=false;
									pictureBox90->Visible=false;
								 }
								 else
								 {
									 pictureBox91->Visible=true;
									pictureBox89->Visible=true;
									pictureBox90->Visible=true;
								 }
							 }

						 }
						 
						 //PROVJERA ZA SE3
						 if(solarna->getIme()=="SE3")
						 {
							 s3++;
							 textBox25->Text=solarna->getIme();
							 pictureBox107->Visible=true;
							 if(solarna->getUkljucena()==false)
							 {
								 pictureBox88->Visible=true;
								 pictureBox86->Visible=true;
								 pictureBox87->Visible=true;
							 }
							 else if(solarna->getPunjnje()==true)
							 {
								 pictureBox88->Visible=false;
								 pictureBox86->Visible=false;
								 pictureBox87->Visible=true;
							 }
							 else
							 {
								 if(solarna->getPraznjenje()==true)
								 {
									 pictureBox88->Visible=true;
									pictureBox86->Visible=false;
									pictureBox87->Visible=false;
								 }
								 else
								 {
									 pictureBox88->Visible=true;
									pictureBox86->Visible=true;
									pictureBox87->Visible=true;
								 }
							 }


						 }
					 }
					 //KRAJ CITANJA SE

					 //CITANJE VE
					 ve->Clear();
					 comboBox2->Items->Clear();
					 while(binw3->PeekChar()!=-1)
					 {
						 vjetro=gcnew Vjetroelektrana();
						 vjetro->ReadVE(binw3);
						 if(vjetro->getBrzinaVjetra()>0)
						 {
							vjetro->setPunjenje(true);
							vjetro->setPražnjenje(false);
							}
						 else
						 {
							 vjetro->setPunjenje(false);
							 vjetro->setPražnjenje(false);
						 }
						 ve->Add(vjetro);
						 comboBox2->Items->Add(vjetro->getIme());
						 //VE1
						 if(vjetro->getIme()=="VE1")
						 {
							 v1++;
							 textBox30->Text=vjetro->getIme();
							 pictureBox112->Visible=true;
							 if(vjetro->getUkljucena()==false)
							 {
								 pictureBox103->Visible=true;
								 pictureBox101->Visible=true;
								 pictureBox102->Visible=true;
							 }
							 else if(vjetro->getPunjnje()==true)
							 {
								 pictureBox103->Visible=false;
								 pictureBox101->Visible=false;
								 pictureBox102->Visible=true;
							 }
							 else
							 {
								 if(vjetro->getPraznjenje()==true)
								 {
									 pictureBox103->Visible=true;
									pictureBox101->Visible=false;
									pictureBox102->Visible=false;
								 }
								 else
								 {
									 pictureBox103->Visible=true;
									pictureBox101->Visible=true;
									pictureBox102->Visible=true;
								 }
							 }

						 }
						 
						 //PROVJERA VE2	
						 if(vjetro->getIme()=="VE2")
						 {
							 v2++;
							 textBox29->Text=vjetro->getIme();
							 pictureBox111->Visible=true;
							 if(vjetro->getUkljucena()==false)
							 {
								 pictureBox100->Visible=true;
								 pictureBox98->Visible=true;
								 pictureBox99->Visible=true;
							 }
							 else if(vjetro->getPunjnje()==true)
							 {
								 pictureBox100->Visible=false;
								 pictureBox98->Visible=false;
								 pictureBox99->Visible=true;
							 }
							 else
							 {
								 if(vjetro->getPraznjenje()==true)
								 {
									 pictureBox100->Visible=true;
									pictureBox98->Visible=false;
									pictureBox99->Visible=false;
								 }
								 else
								 {
									 pictureBox100->Visible=true;
									pictureBox98->Visible=true;
									pictureBox99->Visible=true;
								 }
							 }

						 }
						 
						 //PROVJERA ZA VE3
						 if(vjetro->getIme()=="VE3")
						 {
							 v3++;
							 textBox28->Text=vjetro->getIme();
							 pictureBox110->Visible=true;
							 if(vjetro->getUkljucena()==false)
							 {
								 pictureBox97->Visible=true;
								 pictureBox95->Visible=true;
								 pictureBox96->Visible=true;
							 }
							 else if(vjetro->getPunjnje()==true)
							 {
								 pictureBox97->Visible=false;
								 pictureBox95->Visible=false;
								 pictureBox96->Visible=true;
							 }
							 else
							 {
								 if(vjetro->getPraznjenje()==true)
								 {
									 pictureBox97->Visible=true;
									pictureBox95->Visible=false;
									pictureBox96->Visible=false;
								 }
								 else
								 {
									 pictureBox97->Visible=true;
									pictureBox95->Visible=true;
									pictureBox96->Visible=true;
								 }
							 }


						 }
					 }
					 

				 
			 }
			 
			 catch ( EndOfStreamException^ e ) 
			{
				MessageBox::Show(e->Message,"Greska",MessageBoxButtons::OK);
			 }
			 finally
			 {
				binw->Close();
				binw1->Close();
				fstrm->Close();
				fstrm1->Close();
				binw2->Close();
				binw3->Close();
				fstrm2->Close();
				fstrm3->Close();
				}
			 //POSTAVLJANJE SLIKA NA NEVIDLJIVO AKO ELEKTRANA NIJE DODANA JOS
			 //b1 za HE
			 if(b1==0)
			 {
				 pictureBox106->Visible=false;
						  pictureBox85->Visible=false;
							 pictureBox83->Visible=false;
							 pictureBox84->Visible=false;
			 }
			 if(b2==0)
			 {
				 pictureBox105->Visible=false;
						  pictureBox82->Visible=false;
							 pictureBox80->Visible=false;
							 pictureBox81->Visible=false;
			 }
			 if(b3==0)
			 {
				 pictureBox104->Visible=false;
						  pictureBox79->Visible=false;
							 pictureBox77->Visible=false;
							 pictureBox78->Visible=false;
			 }
			 //s za SE
			 if(s1==0)
			 {
				 pictureBox109->Visible=false;
						  pictureBox94->Visible=false;
							 pictureBox92->Visible=false;
							 pictureBox93->Visible=false;
			 }
			 if(s2==0)
			 {
				 pictureBox108->Visible=false;
						  pictureBox91->Visible=false;
							 pictureBox89->Visible=false;
							 pictureBox90->Visible=false;
			 }
			 if(s3==0)
			 {
				 pictureBox107->Visible=false;
						  pictureBox88->Visible=false;
							 pictureBox86->Visible=false;
							 pictureBox87->Visible=false;
			 }
			 //v za VE
			 if(v1==0)
			 {
				 pictureBox112->Visible=false;
						  pictureBox103->Visible=false;
							 pictureBox101->Visible=false;
							 pictureBox102->Visible=false;
			 }
			 if(v2==0)
			 {
				 pictureBox111->Visible=false;
						  pictureBox100->Visible=false;
							 pictureBox98->Visible=false;
							 pictureBox99->Visible=false;
			 }
			 if(v3==0)
			 {
				 pictureBox110->Visible=false;
						  pictureBox97->Visible=false;
							 pictureBox95->Visible=false;
							 pictureBox96->Visible=false;
			 }
					 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 potrosaci=gcnew ArrayList();
			 ve=gcnew ArrayList();
			 he=gcnew ArrayList();
			 se=gcnew ArrayList();
			 UcitajIPostavi();
			 Potrosnja();
			 PostaviSistem();
			 

		 }
		 private: void PostaviSistem()
				  {
					  int br;
							  for(int i=0; i<ve->Count; i++)
			 {
				 br=0;
				 Vjetroelektrana ^v=gcnew Vjetroelektrana();
				 v=(Vjetroelektrana^)(ve[i]);
				 
					 if(v->getU()>v->getMaxNapon())
					 {
						 br++;
					 }
					 
					 if(v->getU()<v->getMinNapon())
					 {
						 
						 br++;

					 }
					 
					 if(v->getF()>v->getMaxFreq())
					 {
						 
						 br++;
					 }
					
					 if(v->getF()<v->getMinFreq())
					 {
						 
						 br++;
					 }
					 
					 if(v->getIbat()>v->getMaxStruja())
					 {
						 
						 br++;
					 }
					 
					
					 
					 if(br>0)
						 v->setUkljucena(false);
					 else
						 v->setUkljucena(true);
				 
			 }
							   
			 for(int i=0; i<se->Count; i++)
			 {
				 br=0;
				 SolarnaElektrana ^v=gcnew SolarnaElektrana();
				 v=(SolarnaElektrana^)(se[i]);
				 
					 if(v->getU()>v->getMaxNapon())
					 {
						 br++;
					 }
					 
					 if(v->getU()<v->getMinNapon())
					 {
						 
						 br++;

					 }
					 
					 if(v->getF()>v->getMaxFreq())
					 {
						 
						 br++;
					 }
					 
					 if(v->getF()<v->getMinFreq())
					 {
						
						 br++;
					 }
					
					 if(v->getIbat()>v->getMaxStruja())
					 {
						 
						 br++;
					 }
					
					
					
					 if(br>0)
						 v->setUkljucena(false);
					 else
						 v->setUkljucena(true);
				 
			 }
			 
			 for(int i=0; i<he->Count; i++)
			 {
				 br=0;
				 Hidroelektrana ^v=gcnew Hidroelektrana();
				 v=(Hidroelektrana^)(he[i]);
				 
					 if(v->getU()>v->getMaxNapon())
					 {
						 
						 br++;
					 }
					
					 if(v->getU()<v->getMinNapon())
					 {
						 
						 br++;

					 }
					 
					 if(v->getF()>v->getMaxFreq())
					 {
						 
						 br++;
					 }
					
					 if(v->getF()<v->getMinFreq())
					 {
						 
						 br++;
					 }
					 
					 if(v->getIbat()>v->getMaxStruja())
					 {
						 
						 br++;
					 }
					 
					 
					 if(br>0)
						 v->setUkljucena(false);
					 else
						 v->setUkljucena(true);
				 
			 }
					  double ukupno=getUkupnuProizvodnju();
					  double ve_ukupno=getVE();
					  double vese=getVESE();
					  int nesto=0;
					  
					  if(ukupno>=Convert::ToDouble(textBox20->Text) && Convert::ToDouble(textBox20->Text)!=0)
					  {
						  nesto++;
					  }
					  if(nesto>0)
					  {
						  pictureBox63->Visible=false;
						  textBox19->BackColor=System::Drawing::Color::LightGreen;
						  pictureBox61->Visible=false;
						  textBox35->BackColor=System::Drawing::Color::LightGreen;
						  pictureBox71->BackColor=System::Drawing::Color::LightGreen;
						  pictureBox74->BackColor=System::Drawing::Color::LightGreen;
						  pictureBox65->BackColor=System::Drawing::Color::LightGreen;
						  pictureBox64->BackColor=System::Drawing::Color::LightGreen;
						  toolStripStatusLabel1->Text="Napajanje potrošača se vrši iz sistema elektrana. Višak energije ide u gradsku mrežu.";
					  }
					  else if(Convert::ToDouble(textBox20->Text)==0 || (he->Count==0 && se->Count==0 && ve->Count==0))
					  {
						  pictureBox63->Visible=true;
						  textBox19->BackColor=System::Drawing::Color::PowderBlue;
						  pictureBox61->Visible=true;
						  
						  textBox35->BackColor=System::Drawing::Color::LightGray;
						  pictureBox71->BackColor=System::Drawing::Color::LightGray;
						  pictureBox74->BackColor=System::Drawing::Color::LightGray;
						  pictureBox65->BackColor=System::Drawing::Color::LightGray;
						  pictureBox64->BackColor=System::Drawing::Color::LightGray;
						  pictureBox75->BackColor=System::Drawing::Color::LightGray;
						  pictureBox73->BackColor=System::Drawing::Color::LightGray;
						  pictureBox72->BackColor=System::Drawing::Color::LightGray;
						  toolStripStatusLabel1->Text="Nema elektrana ili potrošača. ";
					  }
					  else
					  {
						  pictureBox63->Visible=false;
						  textBox19->BackColor=System::Drawing::Color::LightGreen;
						  pictureBox61->Visible=false;
						  textBox35->BackColor=System::Drawing::Color::LightGreen;
						  pictureBox71->BackColor=System::Drawing::Color::LightGreen;
						  pictureBox74->BackColor=System::Drawing::Color::LightGreen;
						  pictureBox65->BackColor=System::Drawing::Color::LightGreen;
						  pictureBox64->BackColor=System::Drawing::Color::LightGreen;
						  pictureBox75->BackColor=System::Drawing::Color::LightGray;
						  pictureBox73->BackColor=System::Drawing::Color::LightGray;
						  pictureBox72->BackColor=System::Drawing::Color::LightGray;
						  toolStripStatusLabel1->Text="Napajanje se vrši i iz gradske mreže.";
					  }
					  
						  //PRVA PETLJA IDE PO LISTI VJETROELEKTRANA I AKO TU NEMA DOVOLJNO SNAGE PRELAZI NA SE PA NA HE
							  double pr=0;
							  int dovoljno=0;
							  for(int i=0; i<ve->Count; i++)
							  {
								  Vjetroelektrana ^v;
								  v=gcnew Vjetroelektrana();
								  v=(Vjetroelektrana ^)(ve[i]);
								  if(v->getIme()=="VE1" && v->getUkljucena()==false)
								  {
									  pictureBox103->Visible=true;
									 pictureBox101->Visible=true;
									 pictureBox102->Visible=true;
									 pictureBox75->BackColor=System::Drawing::Color::LightGray;
								  }
								  else if(v->getIme()=="VE1" && v->MozeLiPunjenje()==true && v->getBrzinaVjetra()>0)
								  {
									  pictureBox103->Visible=false;
									 pictureBox101->Visible=false;
									 pictureBox102->Visible=true;
									 pictureBox75->BackColor=System::Drawing::Color::LightGray;
									 v->setPunjenje(true);
									 v->setPražnjenje(false);

								  }
								  else if(v->getIme()=="VE1" && Convert::ToDouble(textBox20->Text)>0 && (v->getP()+pr)>=Convert::ToDouble(textBox20->Text))
								  {
									  pr=pr+v->getP();
									  pictureBox103->Visible=true;
										pictureBox101->Visible=false;
										pictureBox102->Visible=false;
										v->setPražnjenje(true);
										v->setPunjenje(false);
										dovoljno++;
										pictureBox75->BackColor=System::Drawing::Color::LightGreen;
										break;
										
								  }
								  else if(v->getIme()=="VE1" && v->getP()>0 && (v->getP()+pr)<Convert::ToDouble(textBox20->Text))
								  {
									  pr=pr+v->getP();
									  pictureBox103->Visible=true;
										pictureBox101->Visible=false;
										pictureBox102->Visible=false;
										v->setPražnjenje(true);
										v->setPunjenje(false);
										pictureBox75->BackColor=System::Drawing::Color::LightGreen;
								  }
								  //VE2
								  if(v->getIme()=="VE2" && v->getUkljucena()==false)
								  {
									  pictureBox100->Visible=true;
									 pictureBox98->Visible=true;
									 pictureBox99->Visible=true;
									 pictureBox75->BackColor=System::Drawing::Color::LightGray;

								  }
								  else if(v->getIme()=="VE2" && v->MozeLiPunjenje()==true && v->getBrzinaVjetra()>0)
								  {
									  pictureBox100->Visible=false;
									 pictureBox98->Visible=false;
									 pictureBox99->Visible=true;
									 v->setPunjenje(true);
									 v->setPražnjenje(false);
									 pictureBox75->BackColor=System::Drawing::Color::LightGray;

								  }
								  else if(v->getIme()=="VE2" && Convert::ToDouble(textBox20->Text)>0 && (v->getP()+pr)>=Convert::ToDouble(textBox20->Text))
								  {
									  pr=pr+v->getP();
									  pictureBox100->Visible=true;
									 pictureBox98->Visible=false;
									 pictureBox99->Visible=false;
										v->setPražnjenje(true);
										v->setPunjenje(false);
										dovoljno++;
										pictureBox75->BackColor=System::Drawing::Color::LightGreen;
										break;
										
								  }
								  else if(v->getIme()=="VE2" && v->getP()>0 && (v->getP()+pr)<Convert::ToDouble(textBox20->Text))
								  {
									  pr=pr+v->getP();
									   pictureBox100->Visible=true;
									 pictureBox98->Visible=false;
									 pictureBox99->Visible=false;
										v->setPražnjenje(true);
										v->setPunjenje(false);
										pictureBox75->BackColor=System::Drawing::Color::LightGreen;
								  }
								  //VE3
								  if(v->getIme()=="VE3" && v->getUkljucena()==false)
								  {
									  pictureBox97->Visible=true;
									 pictureBox95->Visible=true;
									 pictureBox96->Visible=true;
									 pictureBox75->BackColor=System::Drawing::Color::LightGray;
								  }
								  else if(v->getIme()=="VE3" && v->MozeLiPunjenje()==true && v->getBrzinaVjetra()>0)
								  {
									  pictureBox97->Visible=false;
									 pictureBox95->Visible=false;
									 pictureBox96->Visible=true;
									 v->setPunjenje(true);
									 v->setPražnjenje(false);
									 pictureBox75->BackColor=System::Drawing::Color::LightGray;

								  }
								  else if(v->getIme()=="VE3" && Convert::ToDouble(textBox20->Text)>0 && (v->getP()+pr)>=Convert::ToDouble(textBox20->Text))
								  {
									  pr=pr+v->getP();
									  pictureBox97->Visible=true;
									 pictureBox95->Visible=false;
									 pictureBox96->Visible=false;
										v->setPražnjenje(true);
										v->setPunjenje(false);
										dovoljno++;
										pictureBox75->BackColor=System::Drawing::Color::LightGreen;
										break;
										
								  }
								  else if(v->getIme()=="VE3" && v->getP()>0 && (v->getP()+pr)<Convert::ToDouble(textBox20->Text))
								  {
									  pr=pr+v->getP();
									   pictureBox97->Visible=true;
									 pictureBox95->Visible=false;
									 pictureBox96->Visible=false;
										v->setPražnjenje(true);
										v->setPunjenje(false);
										pictureBox75->BackColor=System::Drawing::Color::LightGreen;
								  }


							  }
							  //PROVJERA JE LI BILO DOVOLJNO SNAGE IZ VE. AKO NE PRELAZI SE NA SE PA NA HE
							  if(dovoljno==0)
							  {
								  int dovoljno1=0;
								  for(int i=0; i<se->Count; i++)
								  {
									  SolarnaElektrana ^s;
									  s=gcnew SolarnaElektrana();
									  s=(SolarnaElektrana ^)(se[i]);
									  if(s->getIme()=="SE1" && s->getUkljucena()==false)
									  {
										  pictureBox94->Visible=true;
										 pictureBox92->Visible=true;
										 pictureBox93->Visible=true;
										 pictureBox73->BackColor=System::Drawing::Color::LightGray;
									  }
									  else if(s->getIme()=="SE1" && s->MozeLiPunjenje()==true && s->getInsolacija()>0)
									  {
										  pictureBox94->Visible=false;
										 pictureBox92->Visible=false;
										 pictureBox93->Visible=true;
										 s->setPunjenje(true);
										 s->setPražnjenje(false);
										 pictureBox73->BackColor=System::Drawing::Color::LightGray;

									  }
									  else if(s->getIme()=="SE1" && Convert::ToDouble(textBox20->Text)>0 && (s->getP()+pr)>=Convert::ToDouble(textBox20->Text))
									  {
										  pr=pr+s->getP();
										  pictureBox94->Visible=true;
										 pictureBox92->Visible=false;
										 pictureBox93->Visible=false;
											s->setPražnjenje(true);
											s->setPunjenje(false);
											dovoljno1++;
											pictureBox73->BackColor=System::Drawing::Color::LightGreen;
											break;
											
									  }
									  else if(s->getIme()=="SE1" && s->getP()>0 && (s->getP()+pr)<Convert::ToDouble(textBox20->Text))
									  {
										  pr=pr+s->getP();
										  pictureBox94->Visible=true;
										 pictureBox92->Visible=false;
										 pictureBox93->Visible=false;
											s->setPražnjenje(true);
											s->setPunjenje(false);
											pictureBox73->BackColor=System::Drawing::Color::LightGreen;
									  }
									  //SE2
									  if(s->getIme()=="SE2" && s->getUkljucena()==false)
									  {
										  pictureBox91->Visible=true;
										 pictureBox89->Visible=true;
										 pictureBox90->Visible=true;
										 pictureBox73->BackColor=System::Drawing::Color::LightGray;
									  }
									  else if(s->getIme()=="SE2" && s->MozeLiPunjenje()==true && s->getInsolacija()>0)
									  {
										  pictureBox91->Visible=false;
										 pictureBox89->Visible=false;
										 pictureBox90->Visible=true;
										 s->setPunjenje(true);
										 s->setPražnjenje(false);
										 pictureBox73->BackColor=System::Drawing::Color::LightGray;

									  }
									  else if(s->getIme()=="SE2" && Convert::ToDouble(textBox20->Text)>0 && (s->getP()+pr)>=Convert::ToDouble(textBox20->Text))
									  {
										  pr=pr+s->getP();
										  pictureBox91->Visible=true;
										 pictureBox89->Visible=false;
										 pictureBox90->Visible=false;
											s->setPražnjenje(true);
											s->setPunjenje(false);
											dovoljno1++;
											pictureBox73->BackColor=System::Drawing::Color::LightGreen;
											break;
									  }
									  else if(s->getIme()=="SE2" && s->getP()>0 && (s->getP()+pr)<Convert::ToDouble(textBox20->Text))
									  {
										  pr=pr+s->getP();
										   pictureBox91->Visible=true;
										   pictureBox89->Visible=false;
										   pictureBox90->Visible=false;
											s->setPražnjenje(true);
											s->setPunjenje(false);
											pictureBox73->BackColor=System::Drawing::Color::LightGreen;
									  }
									  //SE3
									  if(s->getIme()=="SE3" && s->getUkljucena()==false)
									  {
										  pictureBox88->Visible=true;
										 pictureBox86->Visible=true;
										 pictureBox87->Visible=true;
										 pictureBox73->BackColor=System::Drawing::Color::LightGray;
									  }
									  else if(s->getIme()=="SE3" && s->MozeLiPunjenje()==true && s->getInsolacija()>0)
									  {
										  pictureBox88->Visible=false;
										 pictureBox86->Visible=false;
										 pictureBox87->Visible=true;
										 s->setPunjenje(true);
										 s->setPražnjenje(false);
										 pictureBox73->BackColor=System::Drawing::Color::LightGray;

									  }
									  else if(s->getIme()=="SE3" && Convert::ToDouble(textBox20->Text)>0 && (s->getP()+pr)>=Convert::ToDouble(textBox20->Text))
									  {
										  pr=pr+s->getP();
										  pictureBox88->Visible=true;
										 pictureBox86->Visible=false;
										 pictureBox87->Visible=false;
											s->setPražnjenje(true);
											s->setPunjenje(false);
											dovoljno1++;
											pictureBox73->BackColor=System::Drawing::Color::LightGreen;
											break;
									  }
									  else if(s->getIme()=="SE3" && s->getP()>0 && (s->getP()+pr)<Convert::ToDouble(textBox20->Text))
									  {
										  pr=pr+s->getP();
										   pictureBox88->Visible=true;
										 pictureBox86->Visible=false;
										 pictureBox87->Visible=false;
											s->setPražnjenje(true);
											s->setPunjenje(false);
											pictureBox73->BackColor=System::Drawing::Color::LightGreen;
									  }
									  
								  }
								  //PROVJERA DA LI JE BILO DOVOLJNO SNAGE IZ SE. AKO NE ONDA IDE HE	
								  if(dovoljno1==0)
								  {									  
									  for(int i=0; i<he->Count; i++)
									  {
										  Hidroelektrana ^hid=gcnew Hidroelektrana();
										  hid=(Hidroelektrana^)(he[i]);
										  if(hid->getIme()=="HE1" && hid->getUkljucena()==false)
										  {
											  pictureBox85->Visible=true;
											 pictureBox83->Visible=true;
											 pictureBox84->Visible=true;
											 pictureBox72->BackColor=System::Drawing::Color::LightGray;
										  }
										  else if(hid->getIme()=="HE1" && hid->MozeLiPunjenje()==true)
										  {
											  pictureBox85->Visible=false;
											 pictureBox83->Visible=false;
											 pictureBox84->Visible=true;
											 pictureBox72->BackColor=System::Drawing::Color::LightGray;
											 hid->setPunjenje(true);
											 hid->setPražnjenje(false);

										  }
										  else if(hid->getIme()=="HE1" && Convert::ToDouble(textBox20->Text)>0 && (hid->getP()+pr)>=Convert::ToDouble(textBox20->Text))
										  {
											  pr=pr+hid->getP();
											  pictureBox85->Visible=true;
											 pictureBox83->Visible=false;
											 pictureBox84->Visible=false;
												hid->setPražnjenje(true);
												hid->setPunjenje(false);
												pictureBox72->BackColor=System::Drawing::Color::LightGreen;
												break;
										  }
										  else if(hid->getIme()=="HE1" && hid->getP()>0 && (hid->getP()+pr)<Convert::ToDouble(textBox20->Text))
										  {
											  pr=pr+hid->getP();
											  pictureBox85->Visible=true;
											 pictureBox83->Visible=false;
											 pictureBox84->Visible=false;
												hid->setPražnjenje(true);
												hid->setPunjenje(false);
												pictureBox72->BackColor=System::Drawing::Color::LightGreen;
										  }
										  //HE2
										  if(hid->getIme()=="HE2" && hid->getUkljucena()==false)
										  {
											  pictureBox82->Visible=true;
											 pictureBox80->Visible=true;
											 pictureBox81->Visible=true;
											 pictureBox72->BackColor=System::Drawing::Color::LightGray;
										  }
										  else if(hid->getIme()=="HE2" && hid->MozeLiPunjenje()==true)
										  {
											  pictureBox82->Visible=false;
											 pictureBox80->Visible=false;
											 pictureBox81->Visible=true;
											 hid->setPunjenje(true);
											 hid->setPražnjenje(false);
											 pictureBox72->BackColor=System::Drawing::Color::LightGray;

										  }
										  else if(hid->getIme()=="HE2" && Convert::ToDouble(textBox20->Text)>0 && (hid->getP()+pr)>=Convert::ToDouble(textBox20->Text))
										  {
											  pr=pr+hid->getP();
											  pictureBox82->Visible=true;
											 pictureBox80->Visible=false;
											 pictureBox81->Visible=false;
												hid->setPražnjenje(true);
												hid->setPunjenje(false);
												pictureBox72->BackColor=System::Drawing::Color::LightGreen;
												break;
										  }
										  else if(hid->getIme()=="HE2" && hid->getP()>0 && (hid->getP()+pr)<=Convert::ToDouble(textBox20->Text))
										  {
											  pr=pr+hid->getP();
											   pictureBox82->Visible=true;
											 pictureBox80->Visible=false;
											 pictureBox81->Visible=false;
												hid->setPražnjenje(true);
												hid->setPunjenje(false);
												pictureBox72->BackColor=System::Drawing::Color::LightGreen;
										  }
										  //HE3
										  if(hid->getIme()=="HE3" && hid->getUkljucena()==false)
										  {
											  pictureBox79->Visible=true;
											 pictureBox77->Visible=true;
											 pictureBox78->Visible=true;
											 pictureBox72->BackColor=System::Drawing::Color::LightGray;
										  }
										  else if(hid->getIme()=="HE3" && hid->MozeLiPunjenje()==true)
										  {
											  pictureBox79->Visible=false;
											 pictureBox77->Visible=false;
											 pictureBox78->Visible=true;
											 hid->setPunjenje(true);
											 hid->setPražnjenje(false);
											 pictureBox72->BackColor=System::Drawing::Color::LightGray;

										  }
										  else if(hid->getIme()=="HE3" && Convert::ToDouble(textBox20->Text)>0 && (hid->getP()+pr)>=Convert::ToDouble(textBox20->Text))
										  {
											  pr=pr+hid->getP();
											  pictureBox79->Visible=true;
											 pictureBox77->Visible=false;
											 pictureBox78->Visible=false;
												hid->setPražnjenje(true);
												hid->setPunjenje(false);
												pictureBox72->BackColor=System::Drawing::Color::LightGreen;
												break;
										  }
										  else if(hid->getIme()=="HE3" && hid->getP()>0 && (hid->getP()+pr)<Convert::ToDouble(textBox20->Text))
										  {
											  pr=pr+hid->getP();
											   pictureBox79->Visible=true;
											 pictureBox77->Visible=false;
											 pictureBox78->Visible=false;
												hid->setPražnjenje(true);
												hid->setPunjenje(false);
												pictureBox72->BackColor=System::Drawing::Color::LightGreen;
										  }

									  }
								  }
							  }
							  textBox21->Text=Convert::ToString(pr);
							  Potrosnja();
							  textBox40->Text=Convert::ToString(pr-Convert::ToDouble(textBox20->Text));
							  
						 
					  
					  
				  }
		 private: double getVE()
				  {
					  double proizvodnja=0;
					  for(int i=0; i<ve->Count; i++)
					  {
						  Vjetroelektrana ^v;
						  v=gcnew Vjetroelektrana();
						  v=(Vjetroelektrana ^)(ve[i]);
						  proizvodnja=proizvodnja+v->getP();

					  }
					  return proizvodnja;

				  }
				  private: double getVESE()
						   {
							   double proizvodnja=0;
							  for(int i=0; i<ve->Count; i++)
							  {
								  Vjetroelektrana ^v;
								  v=gcnew Vjetroelektrana();
								  v=(Vjetroelektrana ^)(ve[i]);
								  proizvodnja=proizvodnja+v->getP();

							  }
							  for(int i=0;i<se->Count; i++)
							  {
								  SolarnaElektrana ^s;
								  s=gcnew SolarnaElektrana();
								  s=(SolarnaElektrana ^)(se[i]);
								  proizvodnja=proizvodnja+s->getP();

							  }
							  return proizvodnja;

						   }
		 private: double getUkupnuProizvodnju()
				  {
					  double proizvodnja_uk=0;
					  for(int i=0; i<he->Count; i++)
					 {
						Hidroelektrana ^hid=gcnew Hidroelektrana();
						hid=(Hidroelektrana^)(he[i]);
						if(hid->MozeLiPunjenje()==false)
							proizvodnja_uk=proizvodnja_uk+hid->getP();
					 }
					  for(int i=0; i<se->Count; i++)
					 {
						SolarnaElektrana ^s;
						 s=gcnew SolarnaElektrana();
						 s=(SolarnaElektrana ^)(se[i]);
						 if(s->MozeLiPunjenje()==false)
							proizvodnja_uk=proizvodnja_uk+s->getP();
					 }
					  for(int i=0; i<ve->Count; i++)
					 {
						Vjetroelektrana ^v;
						 v=gcnew Vjetroelektrana();
						 v=(Vjetroelektrana ^)(ve[i]);
						 if(v->MozeLiPunjenje()==false)
							proizvodnja_uk=proizvodnja_uk+v->getP();
					 }
					 
					 return proizvodnja_uk;
					 
				  }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
		 
private: System::Void vjetroToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void otvoriToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 

		 }
private: System::Void menuStrip2_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
private: System::Void toolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void textBox17_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox48_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox36_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox35_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox34_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void fileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 Potrosac ^p;
			 p=gcnew Potrosac();
			 for(int i=0; i<potrosaci->Count; i++)
			 {
				 p=(Potrosac^)(potrosaci[i]);
				 if(p->getIme()==comboBox1->SelectedItem->ToString())
				 {
					 textBox1->Text=Convert::ToString(p->getPotrosnja());
					 toolStripStatusLabel1->Text=p->getIme()+" ima potrošnju "+Convert::ToString(p->getPotrosnja())+" i u stanju je "+Convert::ToString(p->getUkljucen());
					 if(p->getUkljucen()==true)
						radioButton1->Checked=true;
					 else 
						 radioButton2->Checked=true;
				 }
			 }
			 

			 
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox1->Text=="" || (radioButton1->Checked==false && radioButton2->Checked==false))
				 MessageBox::Show("Niste unijeli potrošnju!","Greška",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 else
			 {
				 if(potrosaci->Count>3)
					 MessageBox::Show("Prekoračen broj potrošača!","Greška",MessageBoxButtons::OK,MessageBoxIcon::Error);
				 else
				 {
					 double potrosnja;
					 bool ukljucen;
					 potrosnja=Convert::ToDouble(textBox1->Text);
					 if(radioButton1->Checked==true)
						 ukljucen=true;
					 else
						 ukljucen=false;
					 Potrosac ^p;
					 p=gcnew Potrosac();
					 int p1,p2,p3,p4;
					 p1=0;p2=0;p3=0;p4=0;
					 String ^ime;
					 for(int i=0; i<potrosaci->Count; i++)
					 {
						 Potrosac ^pot=gcnew Potrosac();
						 pot=(Potrosac^)(potrosaci[i]);
						 if(pot->getIme()=="Potrošač1")
							 p1++;
						 if(pot->getIme()=="Potrošač2")
							 p2++;
						 if(pot->getIme()=="Potrošač3")
							 p3++;
						 if(pot->getIme()=="Potrošač4")
							 p4++;
					 }
					 if(p1==0)
						 ime="Potrošač1";
					 else if(p2==0)
						 ime="Potrošač2";
					 else if(p3==0)
						 ime="Potrošač3";
					 else if(p4==0)
						 ime="Potrošač4";
					 
					 p->setIme(ime);
					 p->setPotrosnja(potrosnja);
					 p->setUkljucen(ukljucen);
					 potrosaci->Add(p);
					 comboBox1->Items->Add(ime);
					 System::Windows::Forms::ListViewItem ^list=gcnew System::Windows::Forms::ListViewItem;
					 list=listView1->Items->Add(ime);
					 list->SubItems->Add(Convert::ToString(potrosnja));
					 list->SubItems->Add(Convert::ToString(ukljucen));
					 if(ime=="Potrošač1")
					 {
						 if(ukljucen==true)
						 {
							pictureBox62->Visible=false;
							textBox36->Text=ime;
							textBox36->BackColor=System::Drawing::Color::LightGreen;
							pictureBox70->BackColor=System::Drawing::Color::LightGreen;
							}
						 else
							textBox36->Text=ime;
					 }
					 if(ime=="Potrošač2")
					 {
						 if(ukljucen==true)
						 {
							pictureBox57->Visible=false;
							textBox33->Text=ime;
							textBox33->BackColor=System::Drawing::Color::LightGreen;
							pictureBox69->BackColor=System::Drawing::Color::LightGreen;
							}
						 else
							textBox33->Text=ime;
					 }
					 if(ime=="Potrošač3")
					 {
						 if(ukljucen==true)
						 {
							pictureBox60->Visible=false;
							textBox32->Text=ime;
							textBox32->BackColor=System::Drawing::Color::LightGreen;
							pictureBox68->BackColor=System::Drawing::Color::LightGreen;
							}
						 else
							textBox32->Text=ime;
					 }
					 if(ime=="Potrošač4")
					 {
						 if(ukljucen==true)
						 {
							pictureBox43->Visible=false;
							textBox31->Text=ime;
							textBox31->BackColor=System::Drawing::Color::LightGreen;
							pictureBox67->BackColor=System::Drawing::Color::LightGreen;
							}
						 else
							textBox31->Text=ime;
					 }
					 MessageBox::Show("Potrošač uspješno dodat.","Informacija",MessageBoxButtons::OK,MessageBoxIcon::Information);
					 Potrosnja();
					 PostaviSistem();
					 textBox1->Text="";
					 radioButton1->Checked=false;
					 radioButton2->Checked=false;
					 //PISANJE U DATOTEKU


					 FileStream^ fstrm = gcnew FileStream("potrosaci.txt", FileMode::OpenOrCreate,FileAccess::Write);
					BinaryWriter^ binw = gcnew BinaryWriter(fstrm);
					for(int i =0; i<potrosaci->Count; i++)
					{
						p=gcnew Potrosac();
						p=(Potrosac^)(potrosaci[i]);
						p->Write(binw);
					}
					fstrm->Flush();
					fstrm->Close();
					 
				 }

			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::DialogResult r;
			 r=MessageBox::Show("Da li stvarno želite izmjeniti podatke?","Pitanje",MessageBoxButtons::YesNo,MessageBoxIcon::Question);
			 if(r==System::Windows::Forms::DialogResult::Yes)
			 {
				 if(textBox1->Text=="")
					MessageBox::Show("Niste unijeli potrošnju!","Greška",MessageBoxButtons::OK,MessageBoxIcon::Error);
				 else
				 {
					 String ^ime;
					 ime=comboBox1->SelectedItem->ToString();
					 Potrosac ^p;
					 p=gcnew Potrosac();
					 for(int i=0;i<potrosaci->Count; i++)
					 {
						 p=(Potrosac^)(potrosaci[i]);
						 if(ime==p->getIme())
						 {
							 p->setPotrosnja(Convert::ToDouble(textBox1->Text));
							 p->setUkljucen(radioButton1->Checked);
							 bool ukljucen=radioButton1->Checked;
							 
							 if(ime=="Potrošač1")
							 {
								 if(ukljucen==true)
								 {
									pictureBox62->Visible=false;
									textBox36->BackColor=System::Drawing::Color::LightGreen;
									pictureBox70->BackColor=System::Drawing::Color::LightGreen;
									}
								 else
								 {
									 pictureBox62->Visible=true;
									 textBox36->BackColor=System::Drawing::Color::LightGray;
									 pictureBox70->BackColor=System::Drawing::Color::LightGray;
								 }
							 }
							 if(ime=="Potrošač2")
							 {
								 if(ukljucen==true)
								 {
									pictureBox57->Visible=false;
									textBox33->BackColor=System::Drawing::Color::LightGreen;
									pictureBox69->BackColor=System::Drawing::Color::LightGreen;
									}
								 else
								 {
									 pictureBox57->Visible=true;
									 textBox33->BackColor=System::Drawing::Color::LightGray;
									 pictureBox69->BackColor=System::Drawing::Color::LightGray;
								 }
							 }
							 if(ime=="Potrošač3")
							 {
								 if(ukljucen==true)
								 {
									pictureBox60->Visible=false;
									textBox32->BackColor=System::Drawing::Color::LightGreen;
									pictureBox68->BackColor=System::Drawing::Color::LightGreen;
									}
								 else
								 {
									 pictureBox60->Visible=true;
									 textBox32->BackColor=System::Drawing::Color::LightGray;
									 pictureBox68->BackColor=System::Drawing::Color::LightGray;
								 }
							 }
							 if(ime=="Potrošač4")
							 {
								 if(ukljucen==true)
								 {
									pictureBox43->Visible=false;
									textBox31->BackColor=System::Drawing::Color::LightGreen;
									pictureBox67->BackColor=System::Drawing::Color::LightGreen;
									}
								 else
								 {
									 pictureBox43->Visible=true;
									 textBox31->BackColor=System::Drawing::Color::LightGray;
									 pictureBox67->BackColor=System::Drawing::Color::LightGray;
								 }
							 }
							 
						 }
					 }
					 
					 Potrosnja();
					 PostaviSistem();
					 toolStripStatusLabel1->Text="Uspješno izmjenjeno";
					 listView1->Items->Clear();
					 System::Windows::Forms::ListViewItem ^list=gcnew System::Windows::Forms::ListViewItem;
					 //PISANJE U DATOTEKU


					 FileStream^ fstrm = gcnew FileStream("potrosaci.txt", FileMode::OpenOrCreate,FileAccess::Write);
					BinaryWriter^ binw = gcnew BinaryWriter(fstrm);
					for(int i =0; i<potrosaci->Count; i++)
					{
						p=gcnew Potrosac();
						p=(Potrosac^)(potrosaci[i]);
						list=listView1->Items->Add(p->getIme());
						list->SubItems->Add(Convert::ToString(p->getPotrosnja()));
						list->SubItems->Add(Convert::ToString(p->getUkljucen()));
						p->Write(binw);
					}
					fstrm->Flush();
					fstrm->Close();
				 }

			 }
		 }
private: System::Void pictureBox62_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::DialogResult r;
			 r=MessageBox::Show("Da li stvarno želite izbrisati potrošača?","Pitanje",MessageBoxButtons::YesNo,MessageBoxIcon::Question);
			 if(r==System::Windows::Forms::DialogResult::Yes)
			 {
				 String ^ime;
				 ime=comboBox1->SelectedItem->ToString();
				 for(int i=0; i<potrosaci->Count; i++)
				 {
					 Potrosac ^p=gcnew Potrosac();
					 p=(Potrosac^)(potrosaci[i]);
					 if(p->getIme()==ime)
					 {
						 potrosaci->RemoveAt(i);
						 comboBox1->Items->Remove(comboBox1->SelectedItem);
						 comboBox1->Text="";
						 textBox1->Text="";
						 radioButton1->Checked=false;
						 radioButton2->Checked=false;
						 if(ime=="Potrošač1")
						 {
							 textBox36->Text="";
							 textBox36->BackColor=System::Drawing::Color::LightGray;
							 pictureBox70->BackColor=System::Drawing::Color::LightGray;
							 pictureBox62->Visible=true;
							 
						 }
						 if(ime=="Potrošač2")
						 {
							 textBox33->Text="";
							 textBox33->BackColor=System::Drawing::Color::LightGray;
							 pictureBox69->BackColor=System::Drawing::Color::LightGray;
							 pictureBox57->Visible=true;
						 }
						 if(ime=="Potrošač3")
						 {
							 textBox32->Text="";
							 textBox32->BackColor=System::Drawing::Color::LightGray;
							 pictureBox68->BackColor=System::Drawing::Color::LightGray;
							 pictureBox60->Visible=true;
						 }
						 if(ime=="Potrošač4")
						 {
							 textBox31->Text="";
							 textBox31->BackColor=System::Drawing::Color::LightGray;
							 pictureBox67->BackColor=System::Drawing::Color::LightGray;
							 pictureBox43->Visible=true;
						 }
					 }
				 }
				 
				 Potrosnja();
				 PostaviSistem();
				 toolStripStatusLabel1->Text="Uspješno izbirisano";
				 listView1->Items->Clear();
				 System::Windows::Forms::ListViewItem ^list=gcnew System::Windows::Forms::ListViewItem;
				 //PISANJE U DATOTEKU


					 FileStream^ fstrm = gcnew FileStream("potrosaci.txt", FileMode::Create,FileAccess::Write);
					BinaryWriter^ binw = gcnew BinaryWriter(fstrm);
					for(int i =0; i<potrosaci->Count; i++)
					{
						Potrosac ^p;
						p=gcnew Potrosac();
						p=(Potrosac^)(potrosaci[i]);
						list=listView1->Items->Add(p->getIme());
						list->SubItems->Add(Convert::ToString(p->getPotrosnja()));
						list->SubItems->Add(Convert::ToString(p->getUkljucen()));
						p->Write(binw);
					}
					fstrm->Flush();
					fstrm->Close();
			 }
		 }
		 private: void Potrosnja()
				  {
					  potrosnja_u=0;
					  int brojac=0;
					  for(int i=0; i<potrosaci->Count; i++)
					 {
						Potrosac ^p=gcnew Potrosac();
						p=(Potrosac^)(potrosaci[i]);
						if(p->getUkljucen()==true)
						{
							potrosnja_u=potrosnja_u+p->getPotrosnja();
							brojac++;
						}
					 }
					  for(int i=0; i<he->Count; i++)
					  {
						  Hidroelektrana ^h=gcnew Hidroelektrana();
						  h=(Hidroelektrana^)(he[i]);
						  if((h->MozeLiPunjenje()==true || h->getPunjnje()==true) && h->getIme()=="HE1" && h->getUkljucena()==true)
						  {
							  brojac++;
							  potrosnja_u=potrosnja_u+h->getSnagaPumpe();
							  textBox34->BackColor=System::Drawing::Color::LightGreen;
							  pictureBox66->BackColor=System::Drawing::Color::LightGreen;
							  pictureBox4->Visible=false;

						  }
						  else if(h->MozeLiPunjenje()==false && h->getIme()=="HE1")
						  {
							  textBox34->BackColor=System::Drawing::Color::LightGray;
							  pictureBox66->BackColor=System::Drawing::Color::LightGray;
							  pictureBox4->Visible=true;

						  }
						  if((h->MozeLiPunjenje()==true || h->getPunjnje()==true) && h->getIme()=="HE2" && h->getUkljucena()==true)
						  {
							  brojac++;
							  potrosnja_u=potrosnja_u+h->getSnagaPumpe();
							  textBox2->BackColor=System::Drawing::Color::LightGreen;
							  pictureBox1->BackColor=System::Drawing::Color::LightGreen;
							  pictureBox5->Visible=false;

						  }
						  else if(h->MozeLiPunjenje()==false && h->getIme()=="HE2")
						  {
							  textBox2->BackColor=System::Drawing::Color::LightGray;
							  pictureBox1->BackColor=System::Drawing::Color::LightGray;
							  pictureBox5->Visible=true;

						  }
						  if((h->MozeLiPunjenje()==true || h->getPunjnje()==true) && h->getIme()=="HE3" && h->getUkljucena()==true)
						  {
							  brojac++;
							  potrosnja_u=potrosnja_u+h->getSnagaPumpe();
							  textBox3->BackColor=System::Drawing::Color::LightGreen;
							  pictureBox2->BackColor=System::Drawing::Color::LightGreen;
							  pictureBox3->Visible=false;

						  }
						  else if(h->MozeLiPunjenje()==false && h->getIme()=="HE3")
						  {
							  textBox3->BackColor=System::Drawing::Color::LightGray;
							  pictureBox2->BackColor=System::Drawing::Color::LightGray;
							  pictureBox3->Visible=true;

						  }
					  }
					  if(brojac==0)
						  pictureBox76->BackColor=System::Drawing::Color::LightGray;
					  else
						  pictureBox76->BackColor=System::Drawing::Color::LightGreen;
					  if(he->Count==0)
					  {
						  textBox34->BackColor=System::Drawing::Color::LightGray;
							  pictureBox66->BackColor=System::Drawing::Color::LightGray;
							  pictureBox4->Visible=true;
							  textBox2->BackColor=System::Drawing::Color::LightGray;
							  pictureBox1->BackColor=System::Drawing::Color::LightGray;
							  pictureBox5->Visible=true;
							  textBox3->BackColor=System::Drawing::Color::LightGray;
							  pictureBox2->BackColor=System::Drawing::Color::LightGray;
							  pictureBox3->Visible=true;

						  
					  }
					 textBox20->Text=Convert::ToString(potrosnja_u);

				  }
		 
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
			 UcitajIPostavi();
			 potrosnja_u=0;
			 proizvodnja_u=0;
			 Potrosnja();
			 double a=getUkupnuProizvodnju();
			 PostaviSistem();
			 
		 }
private: System::Void hidroelektranaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 FileStream^ fstrm = gcnew FileStream("hidroelektrane.txt", FileMode::Create,FileAccess::Write);
						BinaryWriter^ binw = gcnew BinaryWriter(fstrm);
						for(int i =0; i<he->Count; i++)
						{
							Hidroelektrana ^h;
							h=gcnew Hidroelektrana();
							h=(Hidroelektrana^)(he[i]);
							h->Write(binw);
						}
						fstrm->Flush();
						fstrm->Close();
		hidroel ^hel;
		hel=gcnew hidroel();
		hel->Show();

		 }
private: System::Void solarnaElektranaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 FileStream^ fstrm = gcnew FileStream("solarneektrane.txt", FileMode::Create,FileAccess::Write);
					BinaryWriter^ binw = gcnew BinaryWriter(fstrm);
					for(int i =0; i<se->Count; i++)
					{
						SolarnaElektrana ^s;
						s=gcnew SolarnaElektrana();
						s=(SolarnaElektrana ^)(se[i]);
						s->WriteSE(binw);
					}
					fstrm->Flush();
					fstrm->Close();
			 solarna ^s=gcnew solarna();
			 s->Show();
		 }
private: System::Void vjetroelektraneToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 FileStream^ fstrm = gcnew FileStream("vjetroelektrane.txt", FileMode::Create,FileAccess::Write);
						BinaryWriter^ binw = gcnew BinaryWriter(fstrm);
						for(int i =0; i<ve->Count; i++)
						{
							Vjetroelektrana ^v;
							 v=gcnew Vjetroelektrana();
							 v=(Vjetroelektrana ^)(ve[i]);
							v->WriteVE(binw);
						}
						fstrm->Flush();
						fstrm->Close();
			 vjetro ^v=gcnew vjetro();
			 v->Show();
		 }
		 
private: System::Void odjaviSeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::DialogResult r;
			 r=MessageBox::Show("Da li stvarno želite se odjaviti?","Pitanje",MessageBoxButtons::YesNo,MessageBoxIcon::Question);
			 if(r==System::Windows::Forms::DialogResult::Yes)
				 Close();
		 }
private: System::Void toolTip1_Popup(System::Object^  sender, System::Windows::Forms::PopupEventArgs^  e) {
			 
			 
			 
			 
		 }
private: System::Void pictureBox112_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 
			 String ^ve1;
			 for(int i=0; i<ve->Count; i++)
			 {
				 Vjetroelektrana ^v=gcnew Vjetroelektrana();
				 v=(Vjetroelektrana^)(ve[i]);
				 if(v->getIme()=="VE1")
					 ve1="Snaga elektrane je "+Convert::ToString(v->getP())+", maximalna snaga je "+Convert::ToString(v->getMaxSnaga())+", brzina vjetra je "+Convert::ToString(v->getBrzinaVjetra());
			 }
			 toolTip1->ToolTipTitle="VE1";
			 toolTip1->SetToolTip(pictureBox112,ve1);
			 
			 
		 }
private: System::Void pictureBox111_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 String ^ve2;
			 for(int i=0; i<ve->Count; i++)
			 {
				 Vjetroelektrana ^v=gcnew Vjetroelektrana();
				 v=(Vjetroelektrana^)(ve[i]);
				 if(v->getIme()=="VE2")
					 ve2="Snaga elektrane je "+Convert::ToString(v->getP())+", maximalna snaga je "+Convert::ToString(v->getMaxSnaga())+", brzina vjetra je "+Convert::ToString(v->getBrzinaVjetra());
			 }
			 toolTip2->ToolTipTitle="VE2";
			 toolTip2->SetToolTip(pictureBox111,ve2);
		 }
private: System::Void pictureBox110_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 String ^ve3;
			 for(int i=0; i<ve->Count; i++)
			 {
				 Vjetroelektrana ^v=gcnew Vjetroelektrana();
				 v=(Vjetroelektrana^)(ve[i]);
				 if(v->getIme()=="VE3")
					 ve3="Snaga elektrane je "+Convert::ToString(v->getP())+", maximalna snaga je "+Convert::ToString(v->getMaxSnaga())+", brzina vjetra je "+Convert::ToString(v->getBrzinaVjetra());
			 }
			 toolTip1->ToolTipTitle="VE3";
			 toolTip1->SetToolTip(pictureBox110,ve3);
		 }
private: System::Void pictureBox109_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 String ^se1;
			 for(int i=0; i<se->Count; i++)
			 {
				 SolarnaElektrana ^v=gcnew SolarnaElektrana();
				 v=(SolarnaElektrana^)(se[i]);
				 if(v->getIme()=="SE1")
					 se1="Snaga elektrane je "+Convert::ToString(v->getP())+", maximalna snaga je "+Convert::ToString(v->getMaxSnaga())+", insolacija je "+Convert::ToString(v->getInsolacija());
			 }
			 toolTip1->ToolTipTitle="SE1";
			 toolTip1->SetToolTip(pictureBox109,se1);
		 }
private: System::Void pictureBox108_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 String ^se2;
			 for(int i=0; i<se->Count; i++)
			 {
				 SolarnaElektrana ^v=gcnew SolarnaElektrana();
				 v=(SolarnaElektrana^)(se[i]);
				 if(v->getIme()=="SE2")
					 se2="Snaga elektrane je "+Convert::ToString(v->getP())+", maximalna snaga je "+Convert::ToString(v->getMaxSnaga())+", insolacija je "+Convert::ToString(v->getInsolacija());
			 }
			 toolTip1->ToolTipTitle="SE2";
			 toolTip1->SetToolTip(pictureBox108,se2);
		 }
private: System::Void pictureBox107_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 String ^se3;
			 for(int i=0; i<se->Count; i++)
			 {
				 SolarnaElektrana ^v=gcnew SolarnaElektrana();
				 v=(SolarnaElektrana^)(se[i]);
				 if(v->getIme()=="SE3")
					 se3="Snaga elektrane je "+Convert::ToString(v->getP())+", maximalna snaga je "+Convert::ToString(v->getMaxSnaga())+", insolacija je "+Convert::ToString(v->getInsolacija());
			 }
			 toolTip1->ToolTipTitle="SE3";
			 toolTip1->SetToolTip(pictureBox107,se3);
		 }
private: System::Void pictureBox106_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 String ^he1;
			 for(int i=0; i<he->Count; i++)
			 {
				 Hidroelektrana ^v=gcnew Hidroelektrana();
				 v=(Hidroelektrana^)(he[i]);
				 if(v->getIme()=="HE1")
					 he1="Snaga elektrane je "+Convert::ToString(v->getP())+", a maximalna snaga je "+Convert::ToString(v->getMaxSnaga());
			 }
			 toolTip1->ToolTipTitle="HE1";
			 toolTip1->SetToolTip(pictureBox106,he1);
		 }
private: System::Void pictureBox105_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 String ^he2;
			 for(int i=0; i<he->Count; i++)
			 {
				 Hidroelektrana ^v=gcnew Hidroelektrana();
				 v=(Hidroelektrana^)(he[i]);
				 if(v->getIme()=="HE2")
					 he2="Snaga elektrane je "+Convert::ToString(v->getP())+", a maximalna snaga je "+Convert::ToString(v->getMaxSnaga());
			 }
			 toolTip1->ToolTipTitle="HE2";
			 toolTip1->SetToolTip(pictureBox105,he2);
		 }
private: System::Void pictureBox104_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 String ^he3;
			 for(int i=0; i<he->Count; i++)
			 {
				 Hidroelektrana ^v=gcnew Hidroelektrana();
				 v=(Hidroelektrana^)(he[i]);
				 if(v->getIme()=="HE3")
					 he3="Snaga elektrane je "+Convert::ToString(v->getP())+", a maximalna snaga je "+Convert::ToString(v->getMaxSnaga());
			 }
			 toolTip1->ToolTipTitle="HE3";
			 toolTip1->SetToolTip(pictureBox104,he3);
		 }

private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel1->Text="Postavke potrošača.";
		 }
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^ime=comboBox2->SelectedItem->ToString();
			 int br=0;
			 for(int i=0; i<ve->Count; i++)
			 {
				 Vjetroelektrana ^v=gcnew Vjetroelektrana();
				 v=(Vjetroelektrana^)(ve[i]);
				 if(ime==v->getIme())
				 {
					 if(v->getU()>v->getMaxNapon())
					 {
						 textBox5->BackColor=System::Drawing::Color::Red;
						 textBox5->Text="ON";
						 br++;
					 }
					 else
					 {
						 textBox5->BackColor=System::Drawing::Color::LightGreen;
						 textBox5->Text="OFF";
						 
					 }
					 if(v->getU()<v->getMinNapon())
					 {
						 textBox4->BackColor=System::Drawing::Color::Red;
						 textBox4->Text="ON";
						 br++;

					 }
					 else
					 {
						 textBox4->BackColor=System::Drawing::Color::LightGreen;
						 textBox4->Text="OFF";
						 
					 }
					 if(v->getF()>v->getMaxFreq())
					 {
						 textBox7->BackColor=System::Drawing::Color::Red;
						 textBox7->Text="ON";
						 br++;
					 }
					 else
					 {
						 textBox7->BackColor=System::Drawing::Color::LightGreen;
						 textBox7->Text="OFF";
						 
					 }
					 if(v->getF()<v->getMinFreq())
					 {
						 textBox6->BackColor=System::Drawing::Color::Red;
						 textBox6->Text="ON";
						 br++;
					 }
					 else
					 {
						 textBox6->BackColor=System::Drawing::Color::LightGreen;
						 textBox6->Text="OFF";
						 
					 }
					 if(v->getIbat()>v->getMaxStruja())
					 {
						 textBox8->BackColor=System::Drawing::Color::Red;
						 textBox8->Text="ON";
						 br++;
					 }
					 else
					 {
						 textBox8->BackColor=System::Drawing::Color::LightGreen;
						 textBox8->Text="OFF";
						 
					 }
					 textBox9->BackColor=System::Drawing::Color::LightGreen;
					 textBox9->Text="OFF";
					 
					 if(br>0)
						 v->setUkljucena(false);
					 else
						 v->setUkljucena(true);
				 }
			 }
			 FileStream^ fstrm = gcnew FileStream("vjetroelektrane.txt", FileMode::Create,FileAccess::Write);
						BinaryWriter^ binw = gcnew BinaryWriter(fstrm);
						for(int i =0; i<ve->Count; i++)
						{
							Vjetroelektrana ^v;
							 v=gcnew Vjetroelektrana();
							 v=(Vjetroelektrana ^)(ve[i]);
							v->WriteVE(binw);
						}
						fstrm->Flush();
						fstrm->Close();
		 }
private: System::Void tabPage3_Click(System::Object^  sender, System::EventArgs^  e) {
UcitajIPostavi();
PostaviSistem();
		 }
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^ime=comboBox3->SelectedItem->ToString();
			 int br=0;
			 for(int i=0; i<se->Count; i++)
			 {
				 SolarnaElektrana ^v=gcnew SolarnaElektrana();
				 v=(SolarnaElektrana^)(se[i]);
				 if(ime==v->getIme())
				 {
					 if(v->getU()>v->getMaxNapon())
					 {
						 textBox14->BackColor=System::Drawing::Color::Red;
						 textBox14->Text="ON";
						 br++;
					 }
					 else
					 {
						 textBox14->BackColor=System::Drawing::Color::LightGreen;
						 textBox14->Text="OFF";
						 
					 }
					 if(v->getU()<v->getMinNapon())
					 {
						 textBox15->BackColor=System::Drawing::Color::Red;
						 textBox15->Text="ON";
						 br++;

					 }
					 else
					 {
						 textBox15->BackColor=System::Drawing::Color::LightGreen;
						 textBox15->Text="OFF";
						 
					 }
					 if(v->getF()>v->getMaxFreq())
					 {
						 textBox12->BackColor=System::Drawing::Color::Red;
						 textBox12->Text="ON";
						 br++;
					 }
					 else
					 {
						 textBox12->BackColor=System::Drawing::Color::LightGreen;
						 textBox12->Text="OFF";
						 
					 }
					 if(v->getF()<v->getMinFreq())
					 {
						 textBox13->BackColor=System::Drawing::Color::Red;
						 textBox13->Text="ON";
						 br++;
					 }
					 else
					 {
						 textBox13->BackColor=System::Drawing::Color::LightGreen;
						 textBox13->Text="OFF";
						 
					 }
					 if(v->getIbat()>v->getMaxStruja())
					 {
						 textBox11->BackColor=System::Drawing::Color::Red;
						 textBox11->Text="ON";
						 br++;
					 }
					 else
					 {
						 textBox11->BackColor=System::Drawing::Color::LightGreen;
						 textBox11->Text="OFF";
						 
					 }
					 textBox10->BackColor=System::Drawing::Color::LightGreen;
						 textBox10->Text="OFF";
					
					 if(br>0)
						 v->setUkljucena(false);
					 else
						 v->setUkljucena(true);
				 }
			 }
			 FileStream^ fstrm = gcnew FileStream("solarneektrane.txt", FileMode::Create,FileAccess::Write);
					BinaryWriter^ binw = gcnew BinaryWriter(fstrm);
					for(int i =0; i<se->Count; i++)
					{
						SolarnaElektrana ^s;
						s=gcnew SolarnaElektrana();
						s=(SolarnaElektrana ^)(se[i]);
						s->WriteSE(binw);
					}
					fstrm->Flush();
					fstrm->Close();
		 }
private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^ime=comboBox4->SelectedItem->ToString();
			 int br=0;
			 for(int i=0; i<he->Count; i++)
			 {
				 Hidroelektrana ^v=gcnew Hidroelektrana();
				 v=(Hidroelektrana^)(he[i]);
				 if(ime==v->getIme())
				 {
					 if(v->getU()>v->getMaxNapon())
					 {
						 textBox38->BackColor=System::Drawing::Color::Red;
						 textBox38->Text="ON";
						 br++;
					 }
					 else
					 {
						 textBox38->BackColor=System::Drawing::Color::LightGreen;
						 textBox38->Text="OFF";
						 
					 }
					 if(v->getU()<v->getMinNapon())
					 {
						 textBox39->BackColor=System::Drawing::Color::Red;
						 textBox39->Text="ON";
						 br++;

					 }
					 else
					 {
						 textBox39->BackColor=System::Drawing::Color::LightGreen;
						 textBox39->Text="OFF";
						 
					 }
					 if(v->getF()>v->getMaxFreq())
					 {
						 textBox18->BackColor=System::Drawing::Color::Red;
						 textBox18->Text="ON";
						 br++;
					 }
					 else
					 {
						 textBox18->BackColor=System::Drawing::Color::LightGreen;
						 textBox18->Text="OFF";
						 
					 }
					 if(v->getF()<v->getMinFreq())
					 {
						 textBox37->BackColor=System::Drawing::Color::Red;
						 textBox37->Text="ON";
						 br++;
					 }
					 else
					 {
						 textBox37->BackColor=System::Drawing::Color::LightGreen;
						 textBox37->Text="OFF";
						 
					 }
					 if(v->getIbat()>v->getMaxStruja())
					 {
						 textBox17->BackColor=System::Drawing::Color::Red;
						 textBox17->Text="ON";
						 br++;
					 }
					 else
					 {
						 textBox17->BackColor=System::Drawing::Color::LightGreen;
						 textBox17->Text="OFF";
						 
					 }
					 textBox16->BackColor=System::Drawing::Color::LightGreen;
						 textBox16->Text="OFF";
					 
					 if(br>0)
						 v->setUkljucena(false);
					 else
						 v->setUkljucena(true);
				 }
			 }
			 FileStream^ fstrm = gcnew FileStream("hidroelektrane.txt", FileMode::Create,FileAccess::Write);
						BinaryWriter^ binw = gcnew BinaryWriter(fstrm);
						for(int i =0; i<he->Count; i++)
						{
							Hidroelektrana ^h;
							h=gcnew Hidroelektrana();
							h=(Hidroelektrana^)(he[i]);
							h->Write(binw);
						}
						fstrm->Flush();
						fstrm->Close();

		 }
};
}

