#############################################################################
# Makefile for building: easing
# Generated by qmake (2.01a) (Qt 4.7.4) on: Thu Nov 10 02:49:26 2011
# Project:  ../easing/easing.pro
# Template: app
# Command: /usr/bin/qmake-qt4 -spec /usr/share/qt4/mkspecs/linux-g++-64 -o Makefile ../easing/easing.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++-64 -I../easing -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I. -I. -I../easing -I.
LINK          = g++
LFLAGS        = -m64 -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib/x86_64-linux-gnu -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake-qt4
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = ../easing/main.cpp \
		../easing/window.cpp moc_window.cpp \
		qrc_easing.cpp
OBJECTS       = main.o \
		window.o \
		moc_window.o \
		qrc_easing.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		../easing/easing.pro
QMAKE_TARGET  = easing
DESTDIR       = 
TARGET        = easing

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_form.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: ../easing/easing.pro  /usr/share/qt4/mkspecs/linux-g++-64/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/x86_64-linux-gnu/libQtGui.prl \
		/usr/lib/x86_64-linux-gnu/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++-64 -o Makefile ../easing/easing.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_phonon.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/x86_64-linux-gnu/libQtGui.prl:
/usr/lib/x86_64-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++-64 -o Makefile ../easing/easing.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/easing1.0.0 || $(MKDIR) .tmp/easing1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/easing1.0.0/ && $(COPY_FILE) --parents ../easing/window.h ../easing/animation.h .tmp/easing1.0.0/ && $(COPY_FILE) --parents ../easing/easing.qrc .tmp/easing1.0.0/ && $(COPY_FILE) --parents ../easing/main.cpp ../easing/window.cpp .tmp/easing1.0.0/ && $(COPY_FILE) --parents ../easing/form.ui .tmp/easing1.0.0/ && (cd `dirname .tmp/easing1.0.0` && $(TAR) easing1.0.0.tar easing1.0.0 && $(COMPRESS) easing1.0.0.tar) && $(MOVE) `dirname .tmp/easing1.0.0`/easing1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/easing1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_window.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_window.cpp
moc_window.cpp: ui_form.h \
		../easing/animation.h \
		../easing/window.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) ../easing/window.h -o moc_window.cpp

compiler_rcc_make_all: qrc_easing.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_easing.cpp
qrc_easing.cpp: ../easing/easing.qrc \
		../easing/images/qt-logo.png
	/usr/bin/rcc -name easing ../easing/easing.qrc -o qrc_easing.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_form.h
compiler_uic_clean:
	-$(DEL_FILE) ui_form.h
ui_form.h: ../easing/form.ui
	/usr/bin/uic-qt4 ../easing/form.ui -o ui_form.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

main.o: ../easing/main.cpp ../easing/window.h \
		ui_form.h \
		../easing/animation.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o ../easing/main.cpp

window.o: ../easing/window.cpp ../easing/window.h \
		ui_form.h \
		../easing/animation.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o window.o ../easing/window.cpp

moc_window.o: moc_window.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_window.o moc_window.cpp

qrc_easing.o: qrc_easing.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_easing.o qrc_easing.cpp

####### Install

install_target: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/ || $(MKDIR) $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/ 
	-$(INSTALL_PROGRAM) "$(QMAKE_TARGET)" "$(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/$(QMAKE_TARGET)"
	-$(STRIP) "$(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/$(QMAKE_TARGET)"

uninstall_target:  FORCE
	-$(DEL_FILE) "$(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/$(QMAKE_TARGET)"
	-$(DEL_DIR) $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/ 


install_sources: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/ || $(MKDIR) $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/ 
	-$(INSTALL_FILE) /media/shrug/Documents/CODEITALL/personal/hello/easing/main.cpp $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/
	-$(INSTALL_FILE) /media/shrug/Documents/CODEITALL/personal/hello/easing/window.cpp $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/
	-$(INSTALL_FILE) /media/shrug/Documents/CODEITALL/personal/hello/easing/window.h $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/
	-$(INSTALL_FILE) /media/shrug/Documents/CODEITALL/personal/hello/easing/animation.h $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/
	-$(INSTALL_FILE) /media/shrug/Documents/CODEITALL/personal/hello/easing/easing.qrc $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/
	-$(INSTALL_FILE) /media/shrug/Documents/CODEITALL/personal/hello/easing/form.ui $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/
	-$(INSTALL_FILE) /media/shrug/Documents/CODEITALL/personal/hello/easing/easing.pro $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/
	-$(INSTALL_DIR) /media/shrug/Documents/CODEITALL/personal/hello/easing/images $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/


uninstall_sources:  FORCE
	-$(DEL_FILE) -r $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/main.cpp 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/window.cpp 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/window.h 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/animation.h 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/easing.qrc 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/form.ui 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/easing.pro 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/images
	-$(DEL_DIR) $(INSTALL_ROOT)/usr/lib/qt4/examples/animation/easing/ 


install:  install_target install_sources  FORCE

uninstall: uninstall_target uninstall_sources   FORCE

FORCE:

