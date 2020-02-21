#include "modname.h"
#include "ui_modname.h"
#include "sekiro.h"


modname::modname(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modname)
{
    ui->setupUi(this);



setWindowFlags(Qt::WindowTitleHint);
//sets background of the mod name window
setStyleSheet("modname {background-color: rgb(0, 0, 0);}");


//sets background of the main window
setStyleSheet("modname {border: 1px solid white}");


//sets the size

setFixedSize(624, 232);


}

modname::~modname()
{
    delete ui;
}




//asks the user for the name of the mod and puts it into modName
void modname::on_modNameConfirm_clicked()
{



    //asks the user for the name of the mod and puts it into modName
    modName = ui->modNameLineEdit->text().toLocal8Bit().constData();

    close();



}
