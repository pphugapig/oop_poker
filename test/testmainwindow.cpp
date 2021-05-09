#include "testmainwindow.h"
#include "ui_testmainwindow.h"
#include <QPushButton>
#include <QMessageBox>
#include <QMenuBar>
#include <QToolBar>

testMainWindow::testMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::testMainWindow)
{

    // test for button
//    QPushButton *btn1 = new QPushButton;
//    btn1->show();
//    btn1->move(300, 300);
//    btn1->setText("close");
//    btn1->setParent(this);
//    btn1->resize(100, 100);
    ui->setupUi(this);
//    this->resize(1000, 500);
    this->setWindowTitle("testwindow");
    this->setWindowIcon(QIcon("F:/Qt/img/poker.png"));
//    QObject::connect(btn1, &QPushButton::clicked, this, &QWidget::close);


    // test for menu and tool bars
    this->resize(1000, 800);

    // create a menu bar
    QMenuBar *menu = menuBar();
    // put the menu bar into the window
    setMenuBar(menu);

    // add terms to the menu bar
    QMenu *filemenu = menu->addMenu("File");
    QMenu *editmenu = menu->addMenu("Edit");
    QMenu *buildmenu = menu->addMenu("Build");

    // add sub-terms to the menu terms
    filemenu->addAction("New");
    filemenu->addSeparator();
    filemenu->addAction("Create");

    editmenu->addAction("Undo");
    editmenu->addSeparator();
    editmenu->addAction("Redo");

    buildmenu->addAction("Build All");

    // test for tool bar
    QToolBar *tool = new QToolBar("Tool", this);
    this->addToolBar(Qt::LeftToolBarArea, tool);

    tool->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);
//    tool->setMovable(false);
    tool->setFloatable(false);
    tool->addAction("Home");
    tool->addSeparator();
    tool->addAction("Editor");
}

testMainWindow::~testMainWindow()
{
    delete ui;
}

// msg
void testMainWindow::on_pushButton_clicked()
{
    QMessageBox msg;
    msg.setText("test");
    msg.setDefaultButton(QMessageBox::Cancel);
    msg.exec();
}

// close
void testMainWindow::on_pushButton_2_clicked()
{
    this->close();
}
