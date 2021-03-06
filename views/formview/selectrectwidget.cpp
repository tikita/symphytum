/*
 *  Copyright (c) 2012 Giorgio Wicklein <giorgio.wicklein@giowisys.com>
 */

//-----------------------------------------------------------------------------
// Hearders
//-----------------------------------------------------------------------------

#include "selectrectwidget.h"
#include "../../utils/platformcolorservice.h"

#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>


//-----------------------------------------------------------------------------
// Public
//-----------------------------------------------------------------------------

SelectRectWidget::SelectRectWidget(QWidget *parent) :
    QWidget(parent)
{
    label = new QLabel(this);
    layout = new QVBoxLayout(this);

    layout->addWidget(label);
    setLayout(layout);

    QColor c = PlatformColorService::getHighlightColor();

    QString style(
                "border: 2px dashed rgb(%1, %2, %3);"
                "border-radius: 5px;"
                );
    style = style.arg(c.red()).arg(c.green()).arg(c.blue());

    setStyleSheet(style);
}
