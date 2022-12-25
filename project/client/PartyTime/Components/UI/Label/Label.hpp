#pragma once // pragma once

#include "../painter.hpp"

class UiLabel : public painter {
    Q_OBJECT
public:
    explicit UiLabel(QWidget* parent = nullptr);
    UiLabel(const UiLabel& other);
    UiLabel& operator=(const UiLabel&);
    ~UiLabel();

    // нужные
    UiLabel(const QString& cssClass, const QString& text = "");

    UiLabel(const QString& styleSheet, const QString& pathToImage, const QString& imageType);

    UiLabel(const QString& styleSheet, const QPixmap& labelImage, int width = 0, int height = 0, int coordX = 0, int coordY = 0);                                   // декорирование картинка с позиционированием
    UiLabel(const QString& styleSheet, const QFont& font = QFont(), int width = 0, int height = 0, int coordX = 0, int coordY = 0);                                 // стилизованный текст с позициоированием
    UiLabel(const QString& styleSheet, QMovie* movie);                                                                                                              // конструтор для анимации, напрмиер для Loader-a

    UiLabel* create(const QString& objectType); // паттерн псевдофабрика
    UiLabel *create(const QString &objectType, const QString& text);

    void updateState(){}; // const std::initializer_list<QString>&
    QLabel* getLabel() {return label;}
private:
    QLabel* label;
    QHBoxLayout* labelLayout;
};