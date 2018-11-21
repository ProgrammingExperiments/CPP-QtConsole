#include <QCoreApplication>
#include "baseclass.h"
#include <iostream>
#include <QFile>
#include <QDebug>
#include <QXmlStreamReader>

using namespace std;

int main(int argc, char *argv[])
{
    qDebug()<<"App Started";
    QCoreApplication a(argc, argv);

    QFile file("C:/Users/anilj/OneDrive/Desktop/XML/TestXML.xml");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "Cannot read file" << file.errorString();
        exit(0);
    }

    QXmlStreamReader XMLData(&file);

    while(!XMLData.atEnd() && !XMLData.hasError())
    {
        XMLData.readNext();
        if(XMLData.isStartElement())
        {
            qDebug() << XMLData.name();
        }
    }



#if 0
    if (reader.readNextStartElement())
    {
        if (reader.name() == "Root")
        {
            qDebug()<<"Parsed 'Root' element";
            reader.readNextStartElement();
            if(reader.name() == "Book1")
            {
                while (!reader.isEndDocument())
                {
                    if(reader.isStartElement())
                    {
                        qDebug()<<reader.name();
                    }
                    else if(reader.isEndElement())
                    {
                        reader.readNext();
                    }
                }
            }
        }
        else
        {
            reader.raiseError(QObject::tr("Incorrect file"));
        }
    }
#endif

    return a.exec();
    //return 0;
}

