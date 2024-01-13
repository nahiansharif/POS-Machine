#ifndef HARRISCAFE_H
#define HARRISCAFE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class HarrisCafe; }
QT_END_NAMESPACE

class HarrisCafe : public QMainWindow
{
    Q_OBJECT

public:
    HarrisCafe(QWidget *parent = nullptr);
    ~HarrisCafe();


private slots:
    void on_pushButton_startOrderToPage1_clicked();

    void on_pushButton_coffeeMenuToTeaMenu_clicked();

    void on_pushButton_coffeeMenuToDessertMenu_clicked();

    void on_pushButton_teaMenuToCoffeeMenu_clicked();

    void on_pushButton_teaMenuToDessertMenu_clicked();

    void on_pushButton_dessertMenuToCoffeeMenu_clicked();

    void on_pushButton_dessertMenuToTeaMenu_clicked();

    void on_pushButton_backToWelcomeMenu_1_clicked();

    void on_pushButton_backToWelcomeMenu_2_clicked();

    void on_pushButton_backToWelcomeMenu_3_clicked();

    void on_pushButton_backToWelcomeMenu_4_clicked();

    void on_pushButton_modifyToMenu_clicked();

    void on_pushButton_coffeeToModify_clicked();

    void on_pushButton_teaToModify_clicked();

    void on_pushButton_dessertToModify_clicked();

    void on_pushButton_backToWelcomeMenu_5_clicked();

    void on_pushButton_viewCartToMenu_clicked();

    void on_pushButton_Terminate_clicked();

    void on_pushButton_coffeeToCart_clicked();

    void on_pushButton_teaToCart_clicked();

    void on_pushButton_dessertToCart_clicked();

    void on_pushButton_modifyToCart_clicked();

    void on_pushButton_cartToLoyalty_clicked();

    void on_pushButton_loyaltySignUp_clicked();

    void on_pushButton_toPayment_1_clicked();

    void on_pushButton_toPayment_2_clicked();

    void on_pushButton_toPayment3_clicked();

    void on_pushButton_debitToThanks_clicked();

    void on_pushButton_creditToThanks_clicked();

    void on_pushButton_completeOrder_clicked();

    void on_pushButton_coffeeTo1_clicked();

    void on_pushButton_coffeeTo2_clicked();

    void on_pushButton_coffeeTo3_clicked();

    void on_pushButton_coffeeTo4_clicked();

    void on_pushButton_coffeeTo5_clicked();

    void on_pushButton_coffee1to2_clicked();

    void on_pushButton_coffee1to3_clicked();

    void on_pushButton_coffee1to4_clicked();

    void on_pushButton_coffee1to5_clicked();

    void on_pushButton_coffee2to1_clicked();

    void on_pushButton_coffee2to3_clicked();

    void on_pushButton_coffee2to4_clicked();

    void on_pushButton_coffee2to5_clicked();

    void on_pushButton_coffee3to1_clicked();

    void on_pushButton_coffee3to2_clicked();

    void on_pushButton_coffee3to4_clicked();

    void on_pushButton_coffee3to5_clicked();

    void on_pushButton_coffee4to1_clicked();

    void on_pushButton_coffee4to2_clicked();

    void on_pushButton_coffee4to3_clicked();

    void on_pushButton_coffee4to5_clicked();

    void on_pushButton_coffee5to1_clicked();

    void on_pushButton_coffee5to2_clicked();

    void on_pushButton_coffee5to3_clicked();

    void on_pushButton_coffee5to4_clicked();

    void on_pushButton_teaTo1_clicked();

    void on_pushButton_teaTo2_clicked();

    void on_pushButton_teaTo3_clicked();

    void on_pushButton_teaTo4_clicked();

    void on_pushButton_teaTo5_clicked();

    void on_pushButton_tea1to2_clicked();

    void on_pushButton_tea1to3_clicked();

    void on_pushButton_tea1to4_clicked();

    void on_pushButton_tea1to5_clicked();

    void on_pushButton_tea2to1_clicked();

    void on_pushButton_tea2to3_clicked();

    void on_pushButton_tea2to4_clicked();

    void on_pushButton_tea2to5_clicked();

    void on_pushButton_tea3to1_clicked();

    void on_pushButton_tea3to2_clicked();

    void on_pushButton_tea3to4_clicked();

    void on_pushButton_tea3to5_clicked();

    void on_pushButton_tea4to1_clicked();

    void on_pushButton_tea4to2_clicked();

    void on_pushButton_tea4to3_clicked();

    void on_pushButton_tea4to5_clicked();

    void on_pushButton_tea5to1_clicked();

    void on_pushButton_tea5to2_clicked();

    void on_pushButton_tea5to3_clicked();

    void on_pushButton_tea5to4_clicked();

    void on_pushButton_dessertTo1_clicked();

    void on_pushButton_dessertTo2_clicked();

    void on_pushButton_dessertTo3_clicked();

    void on_pushButton_dessertTo4_clicked();

    void on_pushButton_dessertTo5_clicked();

    void on_pushButton_dessert1to2_clicked();

    void on_pushButton_dessert1to3_clicked();

    void on_pushButton_dessert1to4_clicked();

    void on_pushButton_dessert1to5_clicked();

    void on_pushButton_dessert2to1_clicked();

    void on_pushButton_dessert2to3_clicked();

    void on_pushButton_dessert2to4_clicked();

    void on_pushButton_dessert2to5_clicked();

    void on_pushButton_dessert3to1_clicked();

    void on_pushButton_dessert3to2_clicked();

    void on_pushButton_dessert3to4_clicked();

    void on_pushButton_dessert3to5_clicked();

    void on_pushButton_dessert4to1_clicked();

    void on_pushButton_dessert4to2_clicked();

    void on_pushButton_dessert4to3_clicked();

    void on_pushButton_dessert4to5_clicked();

    void on_pushButton_dessert5to1_clicked();

    void on_pushButton_dessert5to2_clicked();

    void on_pushButton_dessert5to3_clicked();

    void on_pushButton_dessert5to4_clicked();

    void on_pushButton_coffee1oCart_clicked();

    void on_pushButton_coffee2toCart_clicked();


    void on_pushButton_coffee3ToCart_clicked();

    void on_pushButton_coffee4ToCart_clicked();

    void on_pushButton_coffee5ToCart_clicked();

    void on_pushButton_tea1ToCart_clicked();

    void on_pushButton_tea2ToCart_clicked();

    void on_pushButton_tea3ToCart_clicked();

    void on_pushButton_tea4ToCart_clicked();

    void on_pushButton_tea5ToCart_clicked();

    void on_pushButton_dessert1ToCart_clicked();

    void on_pushButton_dessert2ToCart_clicked();

    void on_pushButton_dessert3ToCart_clicked();

    void on_pushButton_dessert4ToCart_clicked();

    void on_pushButton_dessert5ToCart_clicked();

    void on_pushButton_modifyToDeleteItem_clicked();

    void on_modifyWidget_currentRowChanged(int currentRow);

    void on_pushButton_startOrderToPage1_3_clicked();

    void on_pushButton_aboutUs_clicked();


    void on_pushButton_startOrderToPage1_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::HarrisCafe *ui;

    int mnSelected = -1;
};
#endif // HARRISCAFE_H
