Project Overview:

This project focuses on designing a low-cost, efficient environment monitoring system that can detect harmful gas levels and temperature fluctuations in real time. Using gas sensors (like MQ2/MQ135) and temperature sensors (like TMP36 or DHT11), the system helps ensure safety in homes, industries, and agricultural settings.
It provides visual alerts (LED/LCD) and sound alarms (buzzer) when readings exceed safe thresholds. The system can also be expanded for IoT integration (e.g., ThingSpeak, Blynk) to allow remote monitoring and data logging.

Key Features:

*Real-time gas concentration and temperature monitoring

*Alerts via buzzer

*Displays values on an LCD or OLED screen

*Expandable to send data to cloud platforms

*Easy to build using Arduino + basic components

Components Used:

*Arduino Uno / Nano

*MQ2 or MQ135 gas sensor

*TMP36 / DHT11 temperature sensor

*16x2 LCD without I2C / OLED

*Buzzer

*Jumper wires + breadboard

How it Works:

*The gas sensor outputs an analog voltage based on gas concentration in the air (e.g., smoke, CO, LPG).

*The temperature sensor outputs voltage proportional to the surrounding temperature.

*The Arduino reads these values, compares them to preset thresholds, and:

*Activates a buzzer

*Continuously displays data on LCD / OLED

Applications:

*Home gas leakage detection

*Industrial air quality monitoring

*Smart agriculture (greenhouses, poultry farms)

*Early fire detection systems

Future Enhancements:

*Wi-Fi / GSM integration for remote alerts

*Data logging for analytics

*Mobile app dashboard

