#include <QCoreApplication>
#include <QtNetwork>
#include <QtSql>

#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "Hello, Network & SQL" << std::endl;

    QSqlDatabase base;
    QNetworkInterface interf;

    std::cin.get();
    return a.exec();
}
