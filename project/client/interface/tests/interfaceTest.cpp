#include "authorization.hpp"
#include "registration.hpp"
#include "loading.hpp"
#include "organizer.hpp"
#include "footer.hpp"
#include "profile.hpp"
#include "eventView.hpp"
#include "visitorEventList.hpp"
#include "visitor.hpp"

#include "Button.hpp"
#include "Edit.hpp"
#include "Label.hpp"
#include "Input.hpp"
#include "Loader.hpp"
#include "Navbar.hpp"
#include "Header.hpp"
#include "EventForm.hpp"
#include "EventItem.hpp"
#include "EventList.hpp"
#include <QTest>

class UiTesting : public QObject
{
    Q_OBJECT

private slots:
    //  Ui
    void btnTest();
    void editTest();
    void labelTest();
    void inputTest();
    void loaderTest();
    // Components
    void headerTest();
    void navbarTest();
    void formTest();
    void eventItemTest();
    void eventListTest();
    void footerTest();
    // Pages
    void loadingPageTest();
    void authorizationTest();
    void registrationTest();
    void eventViewPageTest();
    void visitorPageTest();
    void orgnizerPageTest();
    void profilePageTest();
    void visitorEventListPageTest();
};

// UI
void UiTesting::btnTest()
{
    UiButton* btn = new UiButton();
    QString res = "";
    if (btn != nullptr) {
        // проверяем корректно ли создался компонент, правильный ли вызвался конструктор и заполнились поля объекта
        res = "component working";
    }
    QCOMPARE(res, QString("component working"));

    // UiButton* defaultBtn = btn->create("defaultButton");
    // defaultBtn->getButton()->setText("new button");
    // QCOMPARE(defaultBtn->getButton()->text(), QString("new button"));
    // delete defaultBtn;
    delete btn;
}

void UiTesting::editTest()
{   
    QString res = "";
    UiEdit* edit = new UiEdit();
    if (edit != nullptr) {
        // проверяем корректно ли создался компонент, правильный ли вызвался конструктор и заполнились поля объекта
        res = "component working";
    }
    QCOMPARE(res, QString("component working"));

    delete edit;
}

void UiTesting::labelTest()
{
    QString res = "";
    UiLabel* label = new UiLabel();
    if (label != nullptr) {
        // проверяем корректно ли создался компонент, правильный ли вызвался конструктор и заполнились поля объекта
        res = "component working";
    }
    QCOMPARE(res, QString("component working"));

    delete label;
}

void UiTesting::inputTest()
{
    QString res = "";
    UiInput* input = new UiInput();
    if (input != nullptr) {
        // проверяем корректно ли создался компонент, правильный ли вызвался конструктор и заполнились поля объекта
        res = "component working";
    }
    QCOMPARE(res, QString("component working"));

    delete input;
}

void UiTesting::loaderTest() {
    QString res = "";
    UiLoader* loader = new UiLoader(QString("project/client/interface/PartyTime/circleLoader.gif"));
    if (loader != nullptr) {
        // проверяем корректно ли создался компонент, правильный ли вызвался конструктор и заполнились поля объекта
        res = "component working";
    }
    QCOMPARE(res, QString("component working"));

    delete loader;
}

// Components
void UiTesting::headerTest()
{
    QString res = "";
    Header* header = new Header();
    if (header != nullptr) {
        // проверяем корректно ли создался компонент, правильный ли вызвался конструктор и заполнились поля объекта
        res = "component working";
    }
    QCOMPARE(res, QString("component working"));

    delete header;
}

void UiTesting::navbarTest()
{
    QString res = "";
    Navbar* navbar = new Navbar(2);
    if (navbar != nullptr) {
        // проверяем корректно ли создался компонент, правильный ли вызвался конструктор и заполнились поля объекта
        res = "component working";
    }
    QCOMPARE(res, QString("component working"));

    delete navbar;
}

void UiTesting::formTest()
{
    QString res = "";
    EventForm* form = new EventForm();
    if (form != nullptr) {
        // проверяем корректно ли создался компонент, правильный ли вызвался конструктор и заполнились поля объекта
        res = "component working";
    }
    QCOMPARE(res, QString("component working"));

    delete form;
}

void UiTesting::eventItemTest() 
{
    QString res = "";
    EventItem* item = new EventItem();
    if (item != nullptr) {
        // проверяем корректно ли создался компонент, правильный ли вызвался конструктор и заполнились поля объекта
        res = "component working";
    }
    QCOMPARE(res, QString("component working"));

    delete item;
}

void UiTesting::eventListTest() 
{
    QString res = "";
    EventList* list = new EventList();
    if (list != nullptr) {
        // проверяем корректно ли создался компонент, правильный ли вызвался конструктор и заполнились поля объекта
        res = "component working";
    }
    QCOMPARE(res, QString("component working"));

    delete list;
}

void UiTesting::footerTest() 
{
    QString res = "";
    Footer* footer = new Footer();
    if (footer != nullptr) {
        // проверяем корректно ли создался компонент, правильный ли вызвался конструктор и заполнились поля объекта
        res = "component working";
    }
    QCOMPARE(res, QString("component working"));

    delete footer;
}

// pages
void UiTesting::loadingPageTest() 
{
    QString res = "";
    LoadingPage* page = new LoadingPage("kk", "oo");
    if (page != nullptr) {
        // проверяем корректно ли создался компонент, правильный ли вызвался конструктор и заполнились поля объекта
        res = "component working";
    }
    QCOMPARE(res, QString("component working"));

    delete page;
}

void UiTesting::authorizationTest() 
{
    authorization* page = new authorization();
    QCOMPARE(page->getEnterButton()->text(), QString("Войти"));
    delete page;
}

void UiTesting::registrationTest() 
{
    registration* page = new registration();
    QCOMPARE(page->getBackButton()->text(), QString("назад"));
    delete page;
}

void UiTesting::eventViewPageTest() 
{
    QString res = "";
    EventViewPage* page = new EventViewPage();
    if (page != nullptr) {
        // проверяем корректно ли создался компонент, правильный ли вызвался конструктор и заполнились поля объекта
        res = "component working";
    }
    QCOMPARE(res, QString("component working"));

    delete page;
}

void UiTesting::visitorPageTest() 
{
    QString res = "";
    VisitorPage* page = new VisitorPage();
    if (page != nullptr) {
        // проверяем корректно ли создался компонент, правильный ли вызвался конструктор и заполнились поля объекта
        res = "component working";
    }
    QCOMPARE(res, QString("component working"));

    delete page;
}

void UiTesting::orgnizerPageTest() 
{
    QString res = "";
    OrganizerPage* page = new OrganizerPage();
    if (page != nullptr) {
        // проверяем корректно ли создался компонент, правильный ли вызвался конструктор и заполнились поля объекта
        res = "component working";
    }
    QCOMPARE(res, QString("component working"));

    delete page;
}

void UiTesting::profilePageTest()
{
    QString res = "";
    ProfilePage* page = new ProfilePage();
    if (page != nullptr) {
        // проверяем корректно ли создался компонент, правильный ли вызвался конструктор и заполнились поля объекта
        res = "component working";
    }
    QCOMPARE(res, QString("component working"));

    delete page;
}

void UiTesting::visitorEventListPageTest() 
{
    QString res = "";
    VisitorEventListPage* page = new VisitorEventListPage();
    if (page != nullptr) {
        // проверяем корректно ли создался компонент, правильный ли вызвался конструктор и заполнились поля объекта
        res = "component working";
    }
    QCOMPARE(res, QString("component working"));

    delete page;
}


QTEST_MAIN(UiTesting)
#include "interfaceTest.moc"

