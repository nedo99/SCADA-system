#pragma once

#include "Elektrana.h"
#include "Hidroelektrana.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SCADA {

	/// <summary>
	/// Summary for parametriHE
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class parametriHE : public System::Windows::Forms::Form
	{
	private:Hidroelektrana ^h;
	public:
		
		ArrayList ^hidro;
		parametriHE(ArrayList ^l, String^ ime)
		{
			h=gcnew Hidroelektrana();
			hidro=gcnew ArrayList();
			hidro=l;
			for(int i=0;i<hidro->Count; i++)
			{
				Hidroelektrana ^a=gcnew Hidroelektrana();
				a=(Hidroelektrana^)(hidro[i]);
				if(a->getIme()==ime)
					h=a;
			}
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~parametriHE()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  maxref;
	protected: 

	private: System::Windows::Forms::TextBox^  minref;
	protected: 

	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  maxnivog;

	private: System::Windows::Forms::TextBox^  minnivog;

	private: System::Windows::Forms::TextBox^  maxstruja;

	private: System::Windows::Forms::TextBox^  minstruja;

	private: System::Windows::Forms::TextBox^  maxf;

	private: System::Windows::Forms::TextBox^  minf;

	private: System::Windows::Forms::TextBox^  maxnapon;

	private: System::Windows::Forms::TextBox^  minnapon;

	private: System::Windows::Forms::TextBox^  nivogornji;

	private: System::Windows::Forms::TextBox^  refnivo;

	private: System::Windows::Forms::TextBox^  napajanje;

	private: System::Windows::Forms::TextBox^  baterija;

	private: System::Windows::Forms::TextBox^  praznjenje;

	private: System::Windows::Forms::TextBox^  punjenje;

	private: System::Windows::Forms::TextBox^  napunjenost;

	private: System::Windows::Forms::TextBox^  naponbat;

	private: System::Windows::Forms::TextBox^  strujabat;

	private: System::Windows::Forms::TextBox^  freq;

	private: System::Windows::Forms::TextBox^  napon;

	private: System::Windows::Forms::TextBox^  q;

	private: System::Windows::Forms::TextBox^  p;

	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  nivodonji;

	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::TextBox^  maxsnaga;

	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::TextBox^  dpid;

private: System::Windows::Forms::TextBox^  ipid;

private: System::Windows::Forms::TextBox^  ppid;

	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(parametriHE::typeid));
			this->maxref = (gcnew System::Windows::Forms::TextBox());
			this->minref = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->maxnivog = (gcnew System::Windows::Forms::TextBox());
			this->minnivog = (gcnew System::Windows::Forms::TextBox());
			this->maxstruja = (gcnew System::Windows::Forms::TextBox());
			this->minstruja = (gcnew System::Windows::Forms::TextBox());
			this->maxf = (gcnew System::Windows::Forms::TextBox());
			this->minf = (gcnew System::Windows::Forms::TextBox());
			this->maxnapon = (gcnew System::Windows::Forms::TextBox());
			this->minnapon = (gcnew System::Windows::Forms::TextBox());
			this->nivogornji = (gcnew System::Windows::Forms::TextBox());
			this->refnivo = (gcnew System::Windows::Forms::TextBox());
			this->napajanje = (gcnew System::Windows::Forms::TextBox());
			this->baterija = (gcnew System::Windows::Forms::TextBox());
			this->praznjenje = (gcnew System::Windows::Forms::TextBox());
			this->punjenje = (gcnew System::Windows::Forms::TextBox());
			this->napunjenost = (gcnew System::Windows::Forms::TextBox());
			this->naponbat = (gcnew System::Windows::Forms::TextBox());
			this->strujabat = (gcnew System::Windows::Forms::TextBox());
			this->freq = (gcnew System::Windows::Forms::TextBox());
			this->napon = (gcnew System::Windows::Forms::TextBox());
			this->q = (gcnew System::Windows::Forms::TextBox());
			this->p = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nivodonji = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->maxsnaga = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dpid = (gcnew System::Windows::Forms::TextBox());
			this->ipid = (gcnew System::Windows::Forms::TextBox());
			this->ppid = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// maxref
			// 
			this->maxref->Location = System::Drawing::Point(661, 414);
			this->maxref->Margin = System::Windows::Forms::Padding(4);
			this->maxref->Name = L"maxref";
			this->maxref->Size = System::Drawing::Size(132, 23);
			this->maxref->TabIndex = 141;
			// 
			// minref
			// 
			this->minref->Location = System::Drawing::Point(661, 374);
			this->minref->Margin = System::Windows::Forms::Padding(4);
			this->minref->Name = L"minref";
			this->minref->Size = System::Drawing::Size(132, 23);
			this->minref->TabIndex = 140;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(414, 417);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(183, 16);
			this->label17->TabIndex = 139;
			this->label17->Text = L"Maksimalan referentni nivo";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(414, 377);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(172, 16);
			this->label18->TabIndex = 138;
			this->label18->Text = L"Minimalan referentni nivo";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DodgerBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(417, 589);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(240, 30);
			this->button1->TabIndex = 137;
			this->button1->Text = L"Sačuvaj";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &parametriHE::button1_Click);
			// 
			// maxnivog
			// 
			this->maxnivog->Location = System::Drawing::Point(661, 335);
			this->maxnivog->Margin = System::Windows::Forms::Padding(4);
			this->maxnivog->Name = L"maxnivog";
			this->maxnivog->Size = System::Drawing::Size(132, 23);
			this->maxnivog->TabIndex = 136;
			// 
			// minnivog
			// 
			this->minnivog->Location = System::Drawing::Point(661, 295);
			this->minnivog->Margin = System::Windows::Forms::Padding(4);
			this->minnivog->Name = L"minnivog";
			this->minnivog->Size = System::Drawing::Size(132, 23);
			this->minnivog->TabIndex = 135;
			// 
			// maxstruja
			// 
			this->maxstruja->Location = System::Drawing::Point(661, 250);
			this->maxstruja->Margin = System::Windows::Forms::Padding(4);
			this->maxstruja->Name = L"maxstruja";
			this->maxstruja->Size = System::Drawing::Size(132, 23);
			this->maxstruja->TabIndex = 134;
			// 
			// minstruja
			// 
			this->minstruja->Location = System::Drawing::Point(661, 208);
			this->minstruja->Margin = System::Windows::Forms::Padding(4);
			this->minstruja->Name = L"minstruja";
			this->minstruja->Size = System::Drawing::Size(132, 23);
			this->minstruja->TabIndex = 133;
			// 
			// maxf
			// 
			this->maxf->Location = System::Drawing::Point(661, 167);
			this->maxf->Margin = System::Windows::Forms::Padding(4);
			this->maxf->Name = L"maxf";
			this->maxf->Size = System::Drawing::Size(132, 23);
			this->maxf->TabIndex = 132;
			// 
			// minf
			// 
			this->minf->Location = System::Drawing::Point(661, 125);
			this->minf->Margin = System::Windows::Forms::Padding(4);
			this->minf->Name = L"minf";
			this->minf->Size = System::Drawing::Size(132, 23);
			this->minf->TabIndex = 131;
			// 
			// maxnapon
			// 
			this->maxnapon->Location = System::Drawing::Point(661, 85);
			this->maxnapon->Margin = System::Windows::Forms::Padding(4);
			this->maxnapon->Name = L"maxnapon";
			this->maxnapon->Size = System::Drawing::Size(132, 23);
			this->maxnapon->TabIndex = 130;
			// 
			// minnapon
			// 
			this->minnapon->Location = System::Drawing::Point(661, 47);
			this->minnapon->Margin = System::Windows::Forms::Padding(4);
			this->minnapon->Name = L"minnapon";
			this->minnapon->Size = System::Drawing::Size(132, 23);
			this->minnapon->TabIndex = 129;
			// 
			// nivogornji
			// 
			this->nivogornji->Location = System::Drawing::Point(215, 495);
			this->nivogornji->Margin = System::Windows::Forms::Padding(4);
			this->nivogornji->Name = L"nivogornji";
			this->nivogornji->Size = System::Drawing::Size(132, 23);
			this->nivogornji->TabIndex = 128;
			// 
			// refnivo
			// 
			this->refnivo->Location = System::Drawing::Point(215, 459);
			this->refnivo->Margin = System::Windows::Forms::Padding(4);
			this->refnivo->Name = L"refnivo";
			this->refnivo->Size = System::Drawing::Size(132, 23);
			this->refnivo->TabIndex = 127;
			// 
			// napajanje
			// 
			this->napajanje->Location = System::Drawing::Point(215, 417);
			this->napajanje->Margin = System::Windows::Forms::Padding(4);
			this->napajanje->Name = L"napajanje";
			this->napajanje->Size = System::Drawing::Size(132, 23);
			this->napajanje->TabIndex = 126;
			// 
			// baterija
			// 
			this->baterija->Location = System::Drawing::Point(215, 376);
			this->baterija->Margin = System::Windows::Forms::Padding(4);
			this->baterija->Name = L"baterija";
			this->baterija->Size = System::Drawing::Size(132, 23);
			this->baterija->TabIndex = 125;
			// 
			// praznjenje
			// 
			this->praznjenje->Location = System::Drawing::Point(215, 335);
			this->praznjenje->Margin = System::Windows::Forms::Padding(4);
			this->praznjenje->Name = L"praznjenje";
			this->praznjenje->Size = System::Drawing::Size(132, 23);
			this->praznjenje->TabIndex = 124;
			// 
			// punjenje
			// 
			this->punjenje->Location = System::Drawing::Point(215, 295);
			this->punjenje->Margin = System::Windows::Forms::Padding(4);
			this->punjenje->Name = L"punjenje";
			this->punjenje->Size = System::Drawing::Size(132, 23);
			this->punjenje->TabIndex = 123;
			// 
			// napunjenost
			// 
			this->napunjenost->Location = System::Drawing::Point(215, 255);
			this->napunjenost->Margin = System::Windows::Forms::Padding(4);
			this->napunjenost->Name = L"napunjenost";
			this->napunjenost->Size = System::Drawing::Size(132, 23);
			this->napunjenost->TabIndex = 122;
			// 
			// naponbat
			// 
			this->naponbat->Location = System::Drawing::Point(215, 211);
			this->naponbat->Margin = System::Windows::Forms::Padding(4);
			this->naponbat->Name = L"naponbat";
			this->naponbat->Size = System::Drawing::Size(132, 23);
			this->naponbat->TabIndex = 121;
			// 
			// strujabat
			// 
			this->strujabat->Location = System::Drawing::Point(215, 169);
			this->strujabat->Margin = System::Windows::Forms::Padding(4);
			this->strujabat->Name = L"strujabat";
			this->strujabat->Size = System::Drawing::Size(132, 23);
			this->strujabat->TabIndex = 120;
			// 
			// freq
			// 
			this->freq->Location = System::Drawing::Point(215, 129);
			this->freq->Margin = System::Windows::Forms::Padding(4);
			this->freq->Name = L"freq";
			this->freq->Size = System::Drawing::Size(132, 23);
			this->freq->TabIndex = 119;
			// 
			// napon
			// 
			this->napon->Location = System::Drawing::Point(215, 87);
			this->napon->Margin = System::Windows::Forms::Padding(4);
			this->napon->Name = L"napon";
			this->napon->Size = System::Drawing::Size(132, 23);
			this->napon->TabIndex = 118;
			// 
			// q
			// 
			this->q->Location = System::Drawing::Point(215, 47);
			this->q->Margin = System::Windows::Forms::Padding(4);
			this->q->Name = L"q";
			this->q->Size = System::Drawing::Size(132, 23);
			this->q->TabIndex = 117;
			// 
			// p
			// 
			this->p->Location = System::Drawing::Point(215, 8);
			this->p->Margin = System::Windows::Forms::Padding(4);
			this->p->Name = L"p";
			this->p->Size = System::Drawing::Size(132, 23);
			this->p->TabIndex = 116;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(414, 338);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(243, 16);
			this->label19->TabIndex = 115;
			this->label19->Text = L"Maksimalan nivo gornjeg rezervoara";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(414, 298);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(232, 16);
			this->label20->TabIndex = 114;
			this->label20->Text = L"Minimalan nivo gornjeg rezervoara";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(414, 254);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(210, 16);
			this->label21->TabIndex = 113;
			this->label21->Text = L"Maksimalna struja akumulatora";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(414, 212);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(199, 16);
			this->label22->TabIndex = 112;
			this->label22->Text = L"Minimalna struja akumulatora";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(414, 171);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(159, 16);
			this->label23->TabIndex = 111;
			this->label23->Text = L"Maksimalna frekvencija";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(414, 130);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(148, 16);
			this->label9->TabIndex = 110;
			this->label9->Text = L"Minimalna frekvencija";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(414, 90);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(127, 16);
			this->label10->TabIndex = 109;
			this->label10->Text = L"Maksimalan napon";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(414, 51);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(116, 16);
			this->label11->TabIndex = 108;
			this->label11->Text = L"Minimalan napon";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(16, 499);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(165, 16);
			this->label12->TabIndex = 107;
			this->label12->Text = L"Nivo gornjeg rezervoara";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(16, 462);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(107, 16);
			this->label13->TabIndex = 106;
			this->label13->Text = L"Referentni nivo";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(16, 420);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(73, 16);
			this->label14->TabIndex = 105;
			this->label14->Text = L"Napajanje";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(16, 380);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(118, 16);
			this->label15->TabIndex = 104;
			this->label15->Text = L"Prekidač baterije";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(16, 338);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(136, 16);
			this->label16->TabIndex = 103;
			this->label16->Text = L"Pražnjenje prekidač";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(16, 299);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(124, 16);
			this->label8->TabIndex = 102;
			this->label8->Text = L"Punjenje prekidač";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 259);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(175, 16);
			this->label7->TabIndex = 101;
			this->label7->Text = L"Napunjenost akumulatora";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 215);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(134, 16);
			this->label6->TabIndex = 100;
			this->label6->Text = L"Napon akumulatora";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 173);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 16);
			this->label5->TabIndex = 99;
			this->label5->Text = L"Struja akumulatora";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 132);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 16);
			this->label4->TabIndex = 98;
			this->label4->Text = L"Frekvencija";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 91);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 16);
			this->label3->TabIndex = 97;
			this->label3->Text = L"Napon";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 51);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 16);
			this->label2->TabIndex = 96;
			this->label2->Text = L"Q";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 12);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 16);
			this->label1->TabIndex = 95;
			this->label1->Text = L"P";
			// 
			// nivodonji
			// 
			this->nivodonji->Location = System::Drawing::Point(215, 532);
			this->nivodonji->Margin = System::Windows::Forms::Padding(4);
			this->nivodonji->Name = L"nivodonji";
			this->nivodonji->Size = System::Drawing::Size(132, 23);
			this->nivodonji->TabIndex = 143;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(16, 536);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(160, 16);
			this->label24->TabIndex = 142;
			this->label24->Text = L"Nivo donjeg rezervoara";
			// 
			// maxsnaga
			// 
			this->maxsnaga->Location = System::Drawing::Point(661, 9);
			this->maxsnaga->Margin = System::Windows::Forms::Padding(4);
			this->maxsnaga->Name = L"maxsnaga";
			this->maxsnaga->Size = System::Drawing::Size(132, 23);
			this->maxsnaga->TabIndex = 145;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(414, 12);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(126, 16);
			this->label25->TabIndex = 144;
			this->label25->Text = L"Maksimalna snaga";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dpid);
			this->groupBox1->Controls->Add(this->ipid);
			this->groupBox1->Controls->Add(this->ppid);
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->label27);
			this->groupBox1->Controls->Add(this->label28);
			this->groupBox1->Location = System::Drawing::Point(417, 444);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(241, 122);
			this->groupBox1->TabIndex = 146;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"PID regulator";
			// 
			// dpid
			// 
			this->dpid->Location = System::Drawing::Point(96, 93);
			this->dpid->Name = L"dpid";
			this->dpid->Size = System::Drawing::Size(100, 23);
			this->dpid->TabIndex = 55;
			// 
			// ipid
			// 
			this->ipid->Location = System::Drawing::Point(96, 55);
			this->ipid->Name = L"ipid";
			this->ipid->Size = System::Drawing::Size(100, 23);
			this->ipid->TabIndex = 54;
			// 
			// ppid
			// 
			this->ppid->Location = System::Drawing::Point(96, 16);
			this->ppid->Name = L"ppid";
			this->ppid->Size = System::Drawing::Size(100, 23);
			this->ppid->TabIndex = 53;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(19, 23);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(16, 16);
			this->label26->TabIndex = 50;
			this->label26->Text = L"P";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(19, 58);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(13, 16);
			this->label27->TabIndex = 51;
			this->label27->Text = L"I";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(19, 103);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(17, 16);
			this->label28->TabIndex = 52;
			this->label28->Text = L"D";
			// 
			// parametriHE
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleGreen;
			this->ClientSize = System::Drawing::Size(819, 622);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->maxsnaga);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->nivodonji);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->maxref);
			this->Controls->Add(this->minref);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->maxnivog);
			this->Controls->Add(this->minnivog);
			this->Controls->Add(this->maxstruja);
			this->Controls->Add(this->minstruja);
			this->Controls->Add(this->maxf);
			this->Controls->Add(this->minf);
			this->Controls->Add(this->maxnapon);
			this->Controls->Add(this->minnapon);
			this->Controls->Add(this->nivogornji);
			this->Controls->Add(this->refnivo);
			this->Controls->Add(this->napajanje);
			this->Controls->Add(this->baterija);
			this->Controls->Add(this->praznjenje);
			this->Controls->Add(this->punjenje);
			this->Controls->Add(this->napunjenost);
			this->Controls->Add(this->naponbat);
			this->Controls->Add(this->strujabat);
			this->Controls->Add(this->freq);
			this->Controls->Add(this->napon);
			this->Controls->Add(this->q);
			this->Controls->Add(this->p);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"parametriHE";
			this->Text = L"parametriHE";
			this->Load += gcnew System::EventHandler(this, &parametriHE::parametriHE_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void parametriHE_Load(System::Object^  sender, System::EventArgs^  e) {
				 p->Text=Convert::ToString(h->getP());
				 q->Text=Convert::ToString(h->getQ());
				 napon->Text=Convert::ToString(h->getU());
				 freq->Text=Convert::ToString(h->getF());
				 strujabat->Text=Convert::ToString(h->getIbat());
				 naponbat->Text=Convert::ToString(h->getUBat());
				 napunjenost->Text=Convert::ToString(h->getNapBat());
				 punjenje->Text=Convert::ToString(h->getPunjnje());
				 praznjenje->Text=Convert::ToString(h->getPraznjenje());
				 baterija->Text=Convert::ToString(h->getBaterija());
				 napajanje->Text=Convert::ToString(h->getNapajanje());
				 refnivo->Text=Convert::ToString(h->getRefNivo());
				 nivogornji->Text=Convert::ToString(h->getNivoGornjeg());
				 nivodonji->Text=Convert::ToString(h->getNivoDonjeg());
				 maxsnaga->Text=Convert::ToString(h->getMaxSnaga());
				 minnapon->Text=Convert::ToString(h->getMinNapon());
				 maxnapon->Text=Convert::ToString(h->getMaxNapon());
				 minf->Text=Convert::ToString(h->getMinFreq());
				 maxf->Text=Convert::ToString(h->getMaxFreq());
				 minstruja->Text=Convert::ToString(h->getMinStruja());
				 maxstruja->Text=Convert::ToString(h->getMaxStruja());
				 minnivog->Text=Convert::ToString(h->getMinGornji());
				 maxnivog->Text=Convert::ToString(h->getMaxGornji());
				 ppid->Text=Convert::ToString(h->getPPid());
				 ipid->Text=Convert::ToString(h->getIPid());
				 dpid->Text=Convert::ToString(h->getDPid());
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 double snaga=Convert::ToDouble(maxsnaga->Text);
			 h->PostaviParametreHE(h->getIme(),Convert::ToDouble(refnivo->Text),Convert::ToDouble(nivogornji->Text),Convert::ToDouble(nivodonji->Text),Convert::ToDouble(maxnivog->Text),Convert::ToDouble(minnivog->Text),0,0,5,1,Convert::ToDouble(p->Text),Convert::ToDouble(q->Text),Convert::ToDouble(napon->Text),Convert::ToDouble(freq->Text),Convert::ToDouble(strujabat->Text),Convert::ToDouble(naponbat->Text),Convert::ToDouble(napunjenost->Text),Convert::ToDouble(minnapon->Text),Convert::ToDouble(maxnapon->Text),Convert::ToDouble(minf->Text),Convert::ToDouble(maxf->Text),Convert::ToDouble(minstruja->Text),Convert::ToDouble(maxstruja->Text),Convert::ToDouble(ppid->Text),Convert::ToDouble(ipid->Text),Convert::ToDouble(dpid->Text),snaga);
			 h->setMaxSnaga(snaga);
			 double minu=Convert::ToDouble(minnapon->Text);
			 double maxu=Convert::ToDouble(maxnapon->Text);
			 double mif=Convert::ToDouble(minf->Text);
			 double maf=Convert::ToDouble(maxf->Text);
			 double mini=Convert::ToDouble(minstruja->Text);
			 double maxi=Convert::ToDouble(maxstruja->Text);
			 double mag=Convert::ToDouble(maxnivog->Text);
			 double mig=Convert::ToDouble(minnivog->Text);
			 double p=Convert::ToDouble(ppid->Text);
			 double i=Convert::ToDouble(ipid->Text);
			 double d=Convert::ToDouble(dpid->Text);
			 if(Convert::ToDouble(napon->Text)>maxu || Convert::ToDouble(napon->Text)<minu || Convert::ToDouble(freq->Text)>maf || Convert::ToDouble(freq->Text)<mif || Convert::ToDouble(strujabat->Text)>maxi)
				 h->setUkljucena(false);
			 else
				 h->setUkljucena(true);
			 h->setPPid(p);
			 h->setIPid(i);
			 h->setDPid(d);
			 h->setMaxGornji(mag);
			 h->setMinGornji(mig);
			 h->setMinNapon(minu);
			 h->setMaxNapon(maxu);
			 h->setMaxF(maf);
			 h->setMinF(mif);
			 h->setMaxStruja(maxi);
			 h->setMinStruja(mini);
			 for(int i=0; i<hidro->Count; i++)
			 {
				 Hidroelektrana ^he;
				 he=gcnew Hidroelektrana();
				 he=(Hidroelektrana^)(hidro[i]);
				 if(he->getIme()==h->getIme())
				 {
					 hidro->RemoveAt(i);
					 hidro->Insert(i,h);
				 }
			 }
			 //PISANJE U DATOTEKU


					 FileStream^ fstrm = gcnew FileStream("hidroelektrane.txt", FileMode::OpenOrCreate,FileAccess::Write);
					BinaryWriter^ binw = gcnew BinaryWriter(fstrm);
					for(int i =0; i<hidro->Count; i++)
					{
						Hidroelektrana ^he;
						he=gcnew Hidroelektrana();
						he=(Hidroelektrana^)(hidro[i]);
						he->Write(binw);
					}
					fstrm->Flush();
					fstrm->Close();
					MessageBox::Show("Uspješno sačuvano!","Informacija",MessageBoxButtons::OK,MessageBoxIcon::Information);
		 }
};
}
