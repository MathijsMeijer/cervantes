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
 * Command line was: qdbusxml2cpp -v -p Supplicant -c Supplicant -N supplicant.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef SUPPLICANT_H_1342873939
#define SUPPLICANT_H_1342873939

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface fi.w1.wpa_supplicant1
 */
class Supplicant: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "fi.w1.wpa_supplicant1"; }

public:
    Supplicant(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~Supplicant();

    Q_PROPERTY(QString DebugLevel READ debugLevel WRITE setDebugLevel)
    inline QString debugLevel() const
    { return qvariant_cast< QString >(property("DebugLevel")); }
    inline void setDebugLevel(const QString &value)
    { setProperty("DebugLevel", QVariant::fromValue(value)); }

    Q_PROPERTY(bool DebugShowKeys READ debugShowKeys WRITE setDebugShowKeys)
    inline bool debugShowKeys() const
    { return qvariant_cast< bool >(property("DebugShowKeys")); }
    inline void setDebugShowKeys(bool value)
    { setProperty("DebugShowKeys", QVariant::fromValue(value)); }

    Q_PROPERTY(bool DebugTimestamp READ debugTimestamp WRITE setDebugTimestamp)
    inline bool debugTimestamp() const
    { return qvariant_cast< bool >(property("DebugTimestamp")); }
    inline void setDebugTimestamp(bool value)
    { setProperty("DebugTimestamp", QVariant::fromValue(value)); }

    Q_PROPERTY(QStringList EapMethods READ eapMethods)
    inline QStringList eapMethods() const
    { return qvariant_cast< QStringList >(property("EapMethods")); }

    Q_PROPERTY(QList<QDBusObjectPath> Interfaces READ interfaces)
    inline QList<QDBusObjectPath> interfaces() const
    { return qvariant_cast< QList<QDBusObjectPath> >(property("Interfaces")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QDBusObjectPath> CreateInterface(const QVariantMap &args)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(args);
        return asyncCallWithArgumentList(QLatin1String("CreateInterface"), argumentList);
    }

    inline QDBusPendingReply<QDBusObjectPath> GetInterface(const QString &ifname)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(ifname);
        return asyncCallWithArgumentList(QLatin1String("GetInterface"), argumentList);
    }

    inline QDBusPendingReply<> RemoveInterface(const QDBusObjectPath &path)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(path);
        return asyncCallWithArgumentList(QLatin1String("RemoveInterface"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void InterfaceAdded(const QDBusObjectPath &path, const QVariantMap &properties);
    void InterfaceRemoved(const QDBusObjectPath &path);
    void PropertiesChanged(const QVariantMap &properties);
};

#endif
