[![GitHub all releases](https://img.shields.io/github/downloads/mostman/boxid2boxkey/total?style=plastic)](https://github.com/mostman/boxid2boxkey/)
Small Windows/Linux app to help you convert the BoxID of your NDS reciver box Serial number to BoxKey.

New function added, saves a oscam.server and a CCcam template file with the NDS BoxID you entered.

Viasat STB´s have a serial/BoxID thats 11 numbers long.
Usually found under the box or at the back of the box.
Just enter this as it is in the program and you should get the correct BoxKey.

Sky UK STB´s usually a 17 characters long serial/BoxID.
If thats the case, you have a boxid (serial number) thats 17 characters long ex: 33ADAC0110011223A
Just enter this as it is in the program and you should get the correct BoxKey.

In Windows, compile wxWidgets with ming
wxWidgets 3.0.5 compiled with
mingw32-make -f makefile.gcc MONOLITHIC=0 SHARED=0 UNICODE=1 BUILD=release CFLAGS="-ffunction-sections -fdata-sections -O2 -Os" CXXFLAGS="-ffunction-sections -fdata-sections -O2 -Os" LDFLAGS="-Wl,--gc-sections"

In Linux it should work with wxGTK3 (wxWidgets-3.0.5.tar.gz) package
If Compaling in Linux this commad should work:
g++ boxid2boxkeyMain.cpp boxid2boxkeyMain.h boxid2boxkeyApp.cpp boxid2boxkeyApp.h boxid2boxkey.cpp boxid2boxkey.h `wx-config --cxxflags --libs` -o Boxid2Boxkey
