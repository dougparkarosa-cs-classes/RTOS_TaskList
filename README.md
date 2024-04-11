# RTOS_TaskList

Demonstration of using `framework = arduino, espidf` with PlatformIO

This project was created using PlatformIO version 6.1.14 in VSCode. It is a minimally working example that allows espidf Menuconfig to be used. The defaults allow only the addition of the ability to use vTaskList to show FreeRTOS tasks every 5 seconds. This is a very different configuration than the out of box configuration for `framework = arduino`

## PlatformIO ini file

The only thing particularly notable here is the framework definition.

```text
framework = arduino, espidf
```

If you change this to just `arduino` the program will not work as `vTaskList` will not be compiled into FreeRTOS.

## sdconfig.defaults

This is the defaults for Menuconfig. When the project is configured a file skconfig.featheresp32 will be generated with a full set of configuration values which may be modified using MenuConfig. The platormio menu provides an entry called `Run Menuconfig` that will bring up the configuration menu for espidf. Or you can also use the command line.

```bash
pio run -t menuconfig
```

## Observations

First off when you build there are a lot more things to build than a normal arduino only project so it will take more time to build.

Second, there are likely going to be warnings generated when you build. This is somewhat annoying but not unexpected. Ideally, a future update from espressiff/platformio will correct the warnings but I wouldn't count on it.

A lot of things are turned off that would normally be on, so to get a build that works using the arduino only framework with this configuration file will require a lot of work.

One way to explore this is to compare the generated sdkconfig file that you can find under the .pio directory with the one generated with this project. Be aware that there are thousands of lines of configuration settings so a good diff tool is recommended. Which options are important, is not initially clear.
