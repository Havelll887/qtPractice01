#include "mywidget.h"

#include <QApplication> // 包含一个应用程序类的头文件
#include <QLocale>
#include <QTranslator>

// main 程序入口
// argc 命令行变量的数量
// argv 命令行变量的数组
int main(int argc, char *argv[])
{
    // a应用程序对象，在QT中，应用程序对象，有且仅有一个
    QApplication a(argc, argv);

//    QTranslator translator;
//    const QStringList uiLanguages = QLocale::system().uiLanguages();
//    for (const QString &locale : uiLanguages) {
//        const QString baseName = "qtPractice01_" + QLocale(locale).name();
//        if (translator.load(":/i18n/" + baseName)) {
//            a.installTranslator(&translator);
//            break;
//        }
//    }

    // 窗口对象   myWidget 父类  -> QWidget
    myWidget w;
    // 窗口对象   默认不会像是，必须要调用show方法显示窗口
    w.show();
    // 让应用程序对象进入消息循环
    return a.exec();
}
