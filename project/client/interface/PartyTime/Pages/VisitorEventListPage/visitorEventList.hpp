#pragma once

#include "Header.hpp"
#include "Navbar.hpp"
#include "EventList.hpp"
#include "footer.hpp"
#include <styleHelper.hpp>

class VisitorEventListPage : public painter {
    Q_OBJECT
    friend Navbar;
public:
    explicit VisitorEventListPage(QWidget* parent = nullptr);
    // конструктор, который принимает список строк, которые укзаывают какого типа navbar создавать
    VisitorEventListPage(const std::initializer_list<QString> typesList);
    VisitorEventListPage(const QString& headerType, const QString& navbarType,
                  const QString& eventListType, const QString& footerType);
    ~VisitorEventListPage();
    void redraw() {}; // параметр const std::initisializer_list<QSting>
private:
    QVBoxLayout* mainLayout;
    Header header;
    Navbar navbar;
    EventList eventList;
    Footer footer;
};
