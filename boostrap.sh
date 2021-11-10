#!/bin/bash
if [ $* == "--termux" ]; then
	qmake PREFIX=$PREFIX .
	make -j4
	cp ./termux-pkg-manager $PREFIX/bin/
	cp ./org.termux-pkg-manager-qt.desktop $PREFIX/share/applications/ 
else
	echo "Error, invalid argument"
fi

if [ $* == "--termux-cross" ]; then
	"${TERMUX_PREFIX}/opt/qt/cross/bin/qmake" \
        -spec "${TERMUX_PREFIX}/lib/qt/mkspecs/termux-cross" \
        PREFIX="${TERMUX_PREFIX}"
else
	echo "Error, invalid argument"
fi
