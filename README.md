# Electronic Technologies and Biosensors Laboratory
## Academic Year 2020/2021 - I Semester
---
### Assignment 02
This repository contains the PSoC Creator workspace to be used as a starting point for the successfull submission of the Assignment 02 of the course "Electronic Technologies and Biosensors Laboratory" of the I Semester of the academic year 2020/2021.

---
#### Objective
In this assignment you are required to create a project using [PSoC Creator](https://www.cypress.com/products/psoc-creator-integrated-design-environment-ide), the [CY8CKIT-059 KIT](https://www.cypress.com/documentation/development-kitsboards/cy8ckit-059-psoc-5lp-prototyping-kit-onboard-programmer-and), a [RGB LED](https://www.adafruit.com/product/2739) and one 330 Ohm resistor. 

#### Context
The LTEBS srl is currently working towards the development of a new product: a driver for RGB LED strips. At the moment, the driver can only control the ON/OFF state of the LED strip light, without any kind of control of the single channel intensity. You are then asked, as a hardware/firmware engineer, to update the current driver by allowing to control the blinking of the RED and GREEN channels by switching through different configurations using a push-button, so that once this development stage is complete, the creation of all the possible RGB colors with the LED strip light can be implemented. The following configurations are those of interest to your boss:

<a href="https://imgbb.com/"><img src="https://i.ibb.co/KzvmvNf/Schermata-2020-10-07-alle-12-18-45.png" alt="Schermata-2020-10-07-alle-12-18-45" border="0" /></a>

The system, at power-on, must be in state **1**. Then, every time the button is pressed, the system must switch to the following states **(2, 3, …, 7)**. When the system is in state **7**, if the button is pressed again, the system must return to state **1**. In order to detect when the push-button is pressed without any kind of debouncing, you must use the PSoC Creator Debouncer component (you can find the datasheet of this component at the bottom of the README).  The blinking of the RED channel can be performed according to your own preference (PWM, Timer, …), but solutions that require less CPU-overhead and are less error-prone will be preferred.

#### Connections
The RED channel of the RGB Led must be connected to pin **2.7**. The GREEN channel of the RGB Led must be connected to pin **2.6**. The push button that you will use is the on-board button connected to pin **2.2** on the [CY8CKIT-059 KIT](https://www.cypress.com/documentation/development-kitsboards/cy8ckit-059-psoc-5lp-prototyping-kit-onboard-programmer-and).

#### Setup and Assignment Delivery
- Fork this repository 
- Clone the repository you just forked by entering the following command in your terminal:

    `git clone https://github.com/[your_username]/AY2021_I_HW_02.git`
- Open up the workspace in PSoC Creator
- Activate the project with your name and surname
- Work on your project
- The last commit must be named '*NAME_SURNAME* Final Delivery'
- Propose a pull request before the deadline for the assignment, which is on **October 13 at 6PM**


#### Evaluation
The evaluation of the assignment will take into consideration the following aspects of the project:
- successful build process without any warning/error generated
- successful programming without any error generated
- correct functioning of the device as per the requirements
- code organization (header and source files, useful comments)
- schematic organization and documentation
- successful use of git for version control (use of branches, ...)
- successful pull request on GitHub

As already stated, solutions that require less CPU-overhead and are less error-prone will be preferred.

#### Additional Resources:
- [PSoC PWM Component Datasheet](https://www.cypress.com/file/376411/download)
- [PSoC Timer Component Datasheet](https://www.cypress.com/file/376411/download)
- [PSoC Debouncer Component Datasheet](https://www.cypress.com/file/128141/download)
- [PSoC 5LP Interrupts](https://www.cypress.com/file/44256/download)
- [Guide To Debouncing](https://my.eng.utah.edu/~cs5780/debouncing.pdf)
- [PSoC 101 Video Tutorial](https://www.youtube.com/watch?v=LrXXpQr1itY&list=PLX6sqqUB8iOjsMfGEDcsPSuYLEFCh50Hr)
