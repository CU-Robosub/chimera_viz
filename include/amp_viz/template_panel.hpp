#pragma once

#include <rviz_common/panel.hpp>
#include "ui/ui_template_panel.h"


class TemplatePanel : public rviz_common::Panel{
    Q_OBJECT
    public:
        explicit TemplatePanel(QWidget * parent = 0);
        ~TemplatePanel() override;

        void onInitialize() override;

        QWidget* parent_widget;

    private:
        Ui::Template_Panel *ui;
};