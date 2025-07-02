#include <QtTest>

class MyFeatureTest : public QObject
{
    Q_OBJECT

private slots:
    void dummyTest() {
        QVERIFY(true);
    }
};

QTEST_MAIN(MyFeatureTest)
#include "my_test.moc"
