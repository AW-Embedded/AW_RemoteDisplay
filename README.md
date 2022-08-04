# AW_RemoteDisplay

Example use of TouchGFX on STM32F746G-DISCO

Important: On the hardware, screen transitions can cause the application to crash
- This may be related to my specific board, or a general issue with these boards and this configuration
- In any case, this is for demonstration purposes only and can be seen working in the simulator
- Using other boards I don't have this problem with screen transitions (F769 Discovery, H7 based boards)

Built using:
- TouchGFX Designer V4.20.0
- STM32Cube FW_F7 V1.17.0
- STM32CubeMX V6.6.1

This example mostly uses the MVP (model view presenter) way of coding.

Main Page
- Time using RTC (hardware only) at the top
- Wifi indicator at top right
- 4x Graphs displaying some data

![](/mainScreen.PNG)

Settings page
- Use of the TouchGFX keyboard example to store user input
- Toggle button will change the Wifi icon on other screens
- Status text above the text boxes
- Logic incomplete, just given as a demonstration

![](/settingsScreen.PNG)

Status page
- Wifi indicator at top right
- Just a static example, nothing too exciting

![](/StatusScreen.PNG)

About page
- Logos with animated STM32 logo

![](/aboutScreen.PNG)
