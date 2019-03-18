#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Menge_Qt.h"

class Menge_Qt : public QMainWindow
{
	Q_OBJECT

public:
	Menge_Qt(QWidget *parent = Q_NULLPTR);

private:
	Ui::Menge_QtClass ui;
};
