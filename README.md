## ndk_main: a trivial main application buildable with the NDK for Android

This is just a trivial example if you want to get started writing 
command-line utilities to run on Android.

To build:

- check out this repo;
- install the latest NDK;
- add the NDK tools to your path.

Then just run the build script:

    ./build.sh

To deploy:

You will need a rooted Android environment.

It will not run on Android from the SD Card, so create a directory somewhere
in system storage:

    adb shell mkdir /data/tmp


Deploy the executable:

    adb push ./libs/armeabi-v7a/ndk_main /data/tmp/

Then go to the android shell:

    adb shell

You may need to make the file executable:

    chmod +x ndk_main

Then you can run:

    ./ndk_main
