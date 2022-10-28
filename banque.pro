QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++11
QMAKE_CXXFLAGS += -std=c++11
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    agence.cpp \
    agent.cpp \
    assurances.cpp \
    assurancesauto.cpp \
    assurancesordi.cpp \
    assurancesvelo.cpp \
    auto.cpp \
    boursier.cpp \
    canal.cpp \
    canalassurance.cpp \
    canalbancaire.cpp \
    canalboursier.cpp \
    cartes.cpp \
    chequiers.cpp \
    comptecourant.cpp \
    comptelivreta.cpp \
    comptes.cpp \
    date.cpp \
    directeur.cpp \
    dirgains.cpp \
    electronique.cpp \
    fonction.cpp \
    goldencarte.cpp \
    main.cpp \
    mainwindow.cpp \
    plotGains.cpp \
    plotVolum.cpp \
    premiumcarte.cpp \
    prets.cpp \
    prets_auto.cpp \
    prets_conso.cpp \
    prets_immo.cpp \
    produit.cpp \
    qcustomplot.cpp \
    visacarte.cpp


HEADERS += \
    agence.h \
    agent.h \
    assurances.h \
    assurancesauto.h \
    assurancesordi.h \
    assurancesvelo.h \
    auto.h \
    boursier.h \
    canal.h \
    canalassurance.h \
    canalbancaire.h \
    canalboursier.h \
    cartes.h \
    chequiers.h \
    comptecourant.h \
    comptelivreta.h \
    comptes.h \
    date.h \
    directeur.h \
    dirgains.h \
    electronique.h \
    fonction.h \
    goldencarte.h \
    mainwindow.h \
    plotGains.h \
    plotVolum.h \
    premiumcarte.h \
    prets.h \
    prets_auto.h \
    prets_conso.h \
    prets_immo.h \
    produit.h \
    qcustomplot.h \
    visacarte.h

FORMS += \
    directeur.ui \
    dirgains.ui \
    mainwindow.ui \
    plotGains.ui \
    plotVolum.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ressource.qrc
