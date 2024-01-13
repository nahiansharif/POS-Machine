#include "harriscafe.h"
#include "ui_harriscafe.h"
#include <QMessageBox>
#include <vector>
#include <string>
#include <QString>
#include <QPixmap>
#include <QPushButton>
using namespace std;


HarrisCafe::HarrisCafe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HarrisCafe)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/fardi/OneDrive/Documents/HarrisCafe_SoftwareEngineering/HarrisCafeImage.png");
    ui->welcomePics->setPixmap(pix.scaled(300,300,Qt::KeepAspectRatio));
    ui->stackedWidgetF->setCurrentIndex(0);
}

struct itemInfo
{
    string itemName;
    int itemQuantity;
    double itemPrice;
};

//global
vector<itemInfo> v;
double total = 0;

HarrisCafe::~HarrisCafe()
{
    delete ui;
}


//Navigations
void HarrisCafe::on_pushButton_startOrderToPage1_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(1);
    ui->stackedWidget_Coffee->setCurrentIndex(0);
}


void HarrisCafe::on_pushButton_coffeeMenuToTeaMenu_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(2);
    ui->stackedWidget_Tea->setCurrentIndex(0);
}


void HarrisCafe::on_pushButton_coffeeMenuToDessertMenu_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(3);
    ui->stackedWidget_Dessert->setCurrentIndex(0);
}


void HarrisCafe::on_pushButton_teaMenuToCoffeeMenu_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(1);
    ui->stackedWidget_Coffee->setCurrentIndex(0);
}


void HarrisCafe::on_pushButton_teaMenuToDessertMenu_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(3);
    ui->stackedWidget_Dessert->setCurrentIndex(0);
}


void HarrisCafe::on_pushButton_dessertMenuToCoffeeMenu_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(1);
    ui->stackedWidget_Coffee->setCurrentIndex(0);
}


void HarrisCafe::on_pushButton_dessertMenuToTeaMenu_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(2);
    ui->stackedWidget_Tea->setCurrentIndex(0);
}


void HarrisCafe::on_pushButton_backToWelcomeMenu_1_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(0);
    ui->modifyWidget->clear();
    ui->cartWidget->clear();
    v.clear();
    total = 0;
}

void HarrisCafe::on_pushButton_backToWelcomeMenu_2_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(0);
    ui->modifyWidget->clear();
    ui->cartWidget->clear();
    v.clear();
    total = 0;
}


void HarrisCafe::on_pushButton_backToWelcomeMenu_3_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(0);
    ui->modifyWidget->clear();
    ui->cartWidget->clear();
    v.clear();
    total = 0;
}


void HarrisCafe::on_pushButton_backToWelcomeMenu_4_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(0);
    ui->modifyWidget->clear();
    ui->cartWidget->clear();
    v.clear();
    total = 0;
}

////////////////////////////////////////////////////////////////////////
void HarrisCafe::on_pushButton_modifyToMenu_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(1);
    ui->stackedWidget_Coffee->setCurrentIndex(0);
    v.clear();
}


void HarrisCafe::on_pushButton_coffeeToModify_clicked()
{
//    ui->stackedWidget->setCurrentIndex(4);
//    string str;
//    for(unsigned long long int i = 0; i < v.size(); i++)
//    {
//        str = v[i].itemName + "\t\t" + to_string(v[i].itemPrice);
//        ui->modifyWidget->addItem(str.c_str());
//        total += v[i].itemPrice;
//    }

}


void HarrisCafe::on_pushButton_teaToModify_clicked()
{
//    ui->stackedWidget->setCurrentIndex(4);
}


void HarrisCafe::on_pushButton_dessertToModify_clicked()
{
//    ui->stackedWidget->setCurrentIndex(4);
}


void HarrisCafe::on_pushButton_backToWelcomeMenu_5_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(0);

    ui->cartWidget->clear();
    v.clear();
    total = 0;
}


void HarrisCafe::on_pushButton_viewCartToMenu_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(1);
    ui->stackedWidget_Coffee->setCurrentIndex(0);
    v.clear();
}


void HarrisCafe::on_pushButton_Terminate_clicked()
{
    QApplication::quit();
}


void HarrisCafe::on_pushButton_coffeeToCart_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(5);
    string str;
    for(unsigned long long int i = 0; i < v.size(); i++)
    {
        str = v[i].itemName + "\t\t" + to_string(v[i].itemPrice);
        ui->cartWidget->addItem(str.c_str());
        total += v[i].itemPrice;
    }
    str = to_string(total);
    ui->cartTotal->setText(str.c_str());
    ui->finalTotal->setText(str.c_str());
}


void HarrisCafe::on_pushButton_teaToCart_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(5);
    string str;
    for(unsigned long long int i = 0; i < v.size(); i++)
    {
        str = v[i].itemName + "\t\t" + to_string(v[i].itemPrice);
        ui->cartWidget->addItem(str.c_str());
        total += v[i].itemPrice;
    }
    str = to_string(total);
    ui->cartTotal->setText(str.c_str());
    ui->finalTotal->setText(str.c_str());
}


void HarrisCafe::on_pushButton_dessertToCart_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(5);
    string str;
    for(unsigned long long int i = 0; i < v.size(); i++)
    {
        str = v[i].itemName + "\t\t" + to_string(v[i].itemPrice);
        ui->cartWidget->addItem(str.c_str());
        total += v[i].itemPrice;
    }
    str = to_string(total);
    ui->cartTotal->setText(str.c_str());
    ui->finalTotal->setText(str.c_str());
}


void HarrisCafe::on_pushButton_modifyToCart_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(5);
    string str;
    for(unsigned long long int i = 0; i < v.size(); i++)
    {
        str = v[i].itemName + "\t\t" + to_string(v[i].itemPrice);
        ui->cartWidget->addItem(str.c_str());
        total += v[i].itemPrice;
    }
    str = to_string(total);
    ui->cartTotal->setText(str.c_str());
    ui->finalTotal->setText(str.c_str());
}


void HarrisCafe::on_pushButton_cartToLoyalty_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(6);
}



void HarrisCafe::on_pushButton_loyaltySignUp_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(7);
}


void HarrisCafe::on_pushButton_toPayment_1_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(8);
}


void HarrisCafe::on_pushButton_toPayment_2_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(8);
}


void HarrisCafe::on_pushButton_toPayment3_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(8);
}


void HarrisCafe::on_pushButton_debitToThanks_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(9);
}


void HarrisCafe::on_pushButton_creditToThanks_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(9);
}


void HarrisCafe::on_pushButton_completeOrder_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(0);

    ui->cartWidget->clear();
    v.clear();
    total = 0;
}


void HarrisCafe::on_pushButton_coffeeTo1_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(1);
}


void HarrisCafe::on_pushButton_coffeeTo2_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(2);
}


void HarrisCafe::on_pushButton_coffeeTo3_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(3);
}


void HarrisCafe::on_pushButton_coffeeTo4_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(4);
}


void HarrisCafe::on_pushButton_coffeeTo5_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(5);
}


void HarrisCafe::on_pushButton_coffee1to2_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(2);
}


void HarrisCafe::on_pushButton_coffee1to3_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(3);
}


void HarrisCafe::on_pushButton_coffee1to4_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(4);
}


void HarrisCafe::on_pushButton_coffee1to5_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(5);
}


void HarrisCafe::on_pushButton_coffee2to1_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(1);
}


void HarrisCafe::on_pushButton_coffee2to3_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(3);
}


void HarrisCafe::on_pushButton_coffee2to4_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(4);
}


void HarrisCafe::on_pushButton_coffee2to5_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(5);
}


void HarrisCafe::on_pushButton_coffee3to1_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(1);
}


void HarrisCafe::on_pushButton_coffee3to2_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(2);
}


void HarrisCafe::on_pushButton_coffee3to4_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(4);
}


void HarrisCafe::on_pushButton_coffee3to5_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(5);
}


void HarrisCafe::on_pushButton_coffee4to1_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(1);
}


void HarrisCafe::on_pushButton_coffee4to2_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(2);
}


void HarrisCafe::on_pushButton_coffee4to3_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(3);
}


void HarrisCafe::on_pushButton_coffee4to5_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(5);
}


void HarrisCafe::on_pushButton_coffee5to1_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(1);
}


void HarrisCafe::on_pushButton_coffee5to2_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(2);
}


void HarrisCafe::on_pushButton_coffee5to3_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(3);
}


void HarrisCafe::on_pushButton_coffee5to4_clicked()
{
    ui->stackedWidget_Coffee->setCurrentIndex(4);
}

void HarrisCafe::on_pushButton_teaTo1_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(1);
}


void HarrisCafe::on_pushButton_teaTo2_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(2);
}


void HarrisCafe::on_pushButton_teaTo3_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(3);
}


void HarrisCafe::on_pushButton_teaTo4_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(4);
}


void HarrisCafe::on_pushButton_teaTo5_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(5);
}


void HarrisCafe::on_pushButton_tea1to2_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(2);
}


void HarrisCafe::on_pushButton_tea1to3_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(3);
}


void HarrisCafe::on_pushButton_tea1to4_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(4);
}


void HarrisCafe::on_pushButton_tea1to5_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(5);
}


void HarrisCafe::on_pushButton_tea2to1_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(1);
}


void HarrisCafe::on_pushButton_tea2to3_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(3);
}


void HarrisCafe::on_pushButton_tea2to4_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(4);
}


void HarrisCafe::on_pushButton_tea2to5_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(5);
}


void HarrisCafe::on_pushButton_tea3to1_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(1);
}


void HarrisCafe::on_pushButton_tea3to2_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(2);
}


void HarrisCafe::on_pushButton_tea3to4_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(4);
}


void HarrisCafe::on_pushButton_tea3to5_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(5);
}


void HarrisCafe::on_pushButton_tea4to1_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(1);
}


void HarrisCafe::on_pushButton_tea4to2_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(2);
}


void HarrisCafe::on_pushButton_tea4to3_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(3);
}


void HarrisCafe::on_pushButton_tea4to5_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(5);
}


void HarrisCafe::on_pushButton_tea5to1_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(1);
}


void HarrisCafe::on_pushButton_tea5to2_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(2);
}


void HarrisCafe::on_pushButton_tea5to3_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(3);
}


void HarrisCafe::on_pushButton_tea5to4_clicked()
{
    ui->stackedWidget_Tea->setCurrentIndex(4);
}


void HarrisCafe::on_pushButton_dessertTo1_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(1);
}


void HarrisCafe::on_pushButton_dessertTo2_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(2);
}


void HarrisCafe::on_pushButton_dessertTo3_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(3);
}


void HarrisCafe::on_pushButton_dessertTo4_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(4);
}


void HarrisCafe::on_pushButton_dessertTo5_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(5);
}


void HarrisCafe::on_pushButton_dessert1to2_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(2);
}


void HarrisCafe::on_pushButton_dessert1to3_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(3);
}


void HarrisCafe::on_pushButton_dessert1to4_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(4);
}


void HarrisCafe::on_pushButton_dessert1to5_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(5);
}


void HarrisCafe::on_pushButton_dessert2to1_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(1);
}


void HarrisCafe::on_pushButton_dessert2to3_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(3);
}


void HarrisCafe::on_pushButton_dessert2to4_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(4);
}


void HarrisCafe::on_pushButton_dessert2to5_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(5);
}


void HarrisCafe::on_pushButton_dessert3to1_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(1);
}


void HarrisCafe::on_pushButton_dessert3to2_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(2);
}


void HarrisCafe::on_pushButton_dessert3to4_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(4);
}


void HarrisCafe::on_pushButton_dessert3to5_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(5);
}


void HarrisCafe::on_pushButton_dessert4to1_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(1);
}


void HarrisCafe::on_pushButton_dessert4to2_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(2);
}


void HarrisCafe::on_pushButton_dessert4to3_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(3);
}


void HarrisCafe::on_pushButton_dessert4to5_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(5);
}


void HarrisCafe::on_pushButton_dessert5to1_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(1);
}


void HarrisCafe::on_pushButton_dessert5to2_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(2);
}


void HarrisCafe::on_pushButton_dessert5to3_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(3);
}


void HarrisCafe::on_pushButton_dessert5to4_clicked()
{
    ui->stackedWidget_Dessert->setCurrentIndex(4);
}


//Name and Prices
void HarrisCafe::on_pushButton_coffee1oCart_clicked()
{
    itemInfo ip;
    ip.itemName = "Mocha Coffee";
    ip.itemPrice = 5.99;
    v.push_back(ip);
}


void HarrisCafe::on_pushButton_coffee2toCart_clicked()
{
    itemInfo ip;
    ip.itemName = "Chai Latte";
    ip.itemPrice = 5.99;

    v.push_back(ip);
}


void HarrisCafe::on_pushButton_coffee3ToCart_clicked()
{
    itemInfo ip;
    ip.itemName = "Matcha Latte";
    ip.itemPrice = 6.99;

    v.push_back(ip);
}


void HarrisCafe::on_pushButton_coffee4ToCart_clicked()
{
    itemInfo ip;
    ip.itemName = "Harris Latte";
    ip.itemPrice = 5.99;

    v.push_back(ip);
}


void HarrisCafe::on_pushButton_coffee5ToCart_clicked()
{
    itemInfo ip;
    ip.itemName = "Irish Cream Latte";
    ip.itemPrice = 6.50;

    v.push_back(ip);
}


void HarrisCafe::on_pushButton_tea1ToCart_clicked()
{
    itemInfo ip;
    ip.itemName = "Jasmine Green Tea";
    ip.itemPrice = 5.99;

    v.push_back(ip);
}


void HarrisCafe::on_pushButton_tea2ToCart_clicked()
{
    itemInfo ip;
    ip.itemName = "Hibiscus Tea";
    ip.itemPrice = 5.99;

    v.push_back(ip);
}


void HarrisCafe::on_pushButton_tea3ToCart_clicked()
{
    itemInfo ip;
    ip.itemName = "Chai Tea";
    ip.itemPrice = 5.99;
}


void HarrisCafe::on_pushButton_tea4ToCart_clicked()
{
    itemInfo ip;
    ip.itemName = "Orange Mint Tea";
    ip.itemPrice = 5.99;
}


void HarrisCafe::on_pushButton_tea5ToCart_clicked()
{
    itemInfo ip;
    ip.itemName = "English Earl Grey Tea";
    ip.itemPrice = 5.99;
}


void HarrisCafe::on_pushButton_dessert1ToCart_clicked()
{
    itemInfo ip;
    ip.itemName = "Tiramisu";
    ip.itemPrice = 8.99;
}


void HarrisCafe::on_pushButton_dessert2ToCart_clicked()
{
    itemInfo ip;
    ip.itemName = "Churros";
    ip.itemPrice = 5.99;
}


void HarrisCafe::on_pushButton_dessert3ToCart_clicked()
{
    itemInfo ip;
    ip.itemName = "Lamington";
    ip.itemPrice = 14.99;
}


void HarrisCafe::on_pushButton_dessert4ToCart_clicked()
{
    itemInfo ip;
    ip.itemName = "Guava Cheesecake";
    ip.itemPrice = 13.99;
}


void HarrisCafe::on_pushButton_dessert5ToCart_clicked()
{
    itemInfo ip;
    ip.itemName = "Oasis Strawberry Load";
    ip.itemPrice = 10.99;
}


void HarrisCafe::on_pushButton_modifyToDeleteItem_clicked()
{
    QListWidgetItem *it = ui->modifyWidget->takeItem(mnSelected);
    delete it;
}


void HarrisCafe::on_modifyWidget_currentRowChanged(int currentRow)
{
    mnSelected = currentRow;
}


void HarrisCafe::on_pushButton_startOrderToPage1_3_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(1);
    ui->stackedWidget_Coffee->setCurrentIndex(0);
}


void HarrisCafe::on_pushButton_aboutUs_clicked()
{
    ui->stackedWidgetF->setCurrentIndex(10);
}



void HarrisCafe::on_pushButton_startOrderToPage1_5_clicked()
{

}


void HarrisCafe::on_pushButton_clicked()
{
    ui->pushButton->setStyleSheet("QPushButton{ background-color: red}");

    ui->pushButton_2->setStyleSheet("QPushButton{ background-color: white}");
}


void HarrisCafe::on_pushButton_2_clicked()
{
    ui->pushButton->setStyleSheet("QPushButton{ background-color: white}");

    ui->pushButton_2->setStyleSheet("QPushButton{ background-color: green}");
}

