#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QFont>
#include <QIcon>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <iostream>   // std::cout
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
#include <QStyleFactory>
#include <QSettings>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
