/*************************************************************************

bq Cervantes e-book reader application
Copyright (C) 2011-2013  Mundoreader, S.L

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with the source code.  If not, see <http://www.gnu.org/licenses/>.

*************************************************************************/

/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -v -c Agent -a Agent -N agent.xml
 *
 * qdbusxml2cpp is Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef AGENT_H_1339097082
#define AGENT_H_1339097082

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface net.connman.Agent
 */
class Agent: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "net.connman.Agent")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"net.connman.Agent\">\n"
"    <method name=\"Release\"/>\n"
"    <method name=\"RequestInput\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"path\"/>\n"
"      <arg direction=\"in\" type=\"a{sv}\" name=\"fields\"/>\n"
"      <annotation value=\"QVariantMap\" name=\"com.trolltech.QtDBus.QtTypeName.In1\"/>\n"
"      <arg direction=\"out\" type=\"a{sv}\"/>\n"
"      <annotation value=\"QVariantMap\" name=\"com.trolltech.QtDBus.QtTypeName.Out0\"/>\n"
"    </method>\n"
"    <method name=\"Cancel\"/>\n"
"    <method name=\"ReportError\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"path\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"error\"/>\n"
"    </method>\n"
"    <method name=\"RequestBrowser\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"path\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"url\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    Agent(QObject *parent);
    virtual ~Agent();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void Cancel();
    void Release();
    void ReportError(const QDBusObjectPath &path, const QString &error, const QDBusMessage &message);
    void RequestBrowser(const QDBusObjectPath &path, const QString &url);
    QVariantMap RequestInput(const QDBusObjectPath &path, const QVariantMap &fields, const QDBusMessage &message);
Q_SIGNALS: // SIGNALS
};

#endif
