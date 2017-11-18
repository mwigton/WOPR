TEMPLATE = app      
CONFIG += console   
CONFIG -= app_bundle
CONFIG -= qt        
TARGET = WOPR
                    
SOURCES += \
../src/main.c \
../src/util.c \
../src/wopr.c

HEADERS += \
../src/util.h \
../src/wopr.h
