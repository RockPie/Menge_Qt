#include "Menge_Qt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Menge_Qt w;
	w.show();
	return a.exec();
}
