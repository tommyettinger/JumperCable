JumperCable
===========

Launcher program for JVM applications with a bundled JRE from OpenJDK.

Usage
=====

Once you have your Java application compiled as a runnable JAR, you may want to
have it run on Windows machines with either no JRE installed or a low/weak version (such as the 32-bit JRE
that only has a -client option for its VM, which is slow).  If you rename your runnable jar to App.jar and
put it in `JumperCable/Application/files/App.jar` , then you can distribute the Application directory to users (changing that folder's name is recommended, but none of its existing subfolders can be renamed).  They can open `Launcher.exe` and it will open up a console window as it runs your App.jar (this can be changed in Launcher-src).  If you have any
graphical windows in your application, they will open after the console will.

Customization
=============

You can alter the behavior of Launcher.exe, but it needs to be recompiled (the SLN is for Visual Studio 2010, I don't know
what else can open it, but it's very likely that at least the project can be opened by Visual C++ Express).  To disable the console window, change this line in Launcher.cpp:

`_tcsdup(TEXT("jre\\bin\\java.exe -server -XX:+TieredCompilation -jar files\\App.jar")),`

to

`_tcsdup(TEXT("jre\\bin\\javaw.exe -server -XX:+TieredCompilation -jar files\\App.jar")),`

(Yes, you just change java to javaw).  Here you can also change the jar's name and path.
