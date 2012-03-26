#include<QApplication>
#include<QPushButton>
int main(int argc, char *argv[])
{
QApplication app(argc,argv);

QPushButton hello("HelloDunia! ");
hello.resize(600,300);
hello.show();
return app.exec();

}
