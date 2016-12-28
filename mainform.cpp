#include "mainform.h"

MainForm::MainForm(QWidget *parent) : QWidget(parent){
		this->setupUi();
}
MainForm::~MainForm(){
		delete label1;
		delete label2;
}
void MainForm::setupUi(){
		this->resize(300,200);
		this->move(300,300);
		this->setWindowTitle("Demonstrasi Tag HTML");

		label1 = new QLabel();
		label1->setText("<h1>Haloop <font color=red>Qt</font></h1>");
		label1->move(10,10);
		label1->setParent(this);

		QString str = tr("Tag ini dibuat denga tag HTML ") + tr("teks ini bisa dibuat <b>tebal</b>") + tr("<i>miring</i> dan <u>underline</u>");
		label2 = new QLabel();
		label2->setText(str);
		label2->setWordWrap(true);
		label2->move(10,50);
		label2->setParent(this);
}
