🏠 Smart Home Automation System (Arduino + Proteus)

A microcontroller-based smart home automation system designed and simulated using Arduino and Proteus. This project integrates real-time scheduling, sensor-driven automation, and security logic to create an intelligent and energy-efficient home environment.

📌 Project Overview

This system demonstrates how embedded systems can be used to automate and secure a home by combining:

Time-based control (RTC)
Motion detection (PIR sensor)
Light detection (LDR sensor)
Automated environmental response

The entire system is simulated in Proteus, allowing for testing, validation, and optimization before real-world deployment.



⚙️ Core Features

⏰ Real-Time Clock (RTC) Automation
Uses RTC module for accurate time tracking
Enables scheduled control of home appliances
Supports automated lighting based on predefined time

🚶 Motion Detection (PIR Sensor)
Detects human presence
Triggers lighting and security alerts
Enhances home safety and responsiveness

🌙 Light Detection (LDR Sensor)
Monitors ambient light levels
Automatically activates night mode
Optimizes energy consumption

🌡️ Smart Environmental Control
Simulates automated responses (e.g., fan/temperature control)
Maintains a comfortable indoor environment

🔐 Integrated Security System
Combines PIR + LDR logic for intelligent intrusion detection
Activates only under specific conditions (e.g., night + motion)

🧪 Proteus-Based Simulation
Complete circuit design and testing in Proteus
Enables debugging and validation without hardware


🧩 System Architecture

The system follows a hybrid automation model:

Time-Based Layer → Controls scheduled operations via RTC

Event-Based Layer → Responds to sensor inputs (PIR, LDR)

Decision Layer → Applies conditional logic for intelligent automation


🔌 System Operation Logic

The system operates based on the following conditions:

IF (Time == Scheduled Time) → Activate lighting
IF (Motion Detected AND Low Light) → Trigger security + lighting
IF (Low Light Detected) → Enable night mode
ELSE → Maintain idle state

This ensures efficient, responsive, and context-aware automation.


🛠️ Technologies Used
Arduino (Embedded C/C++)
Proteus Design Suite
Sensors & Modules:
PIR Motion Sensor
LDR (Light Dependent Resistor)
RTC Module (DS1307)


📂 Project Structure
Smart-Home-Automation-Arduino-Proteus/

│── README.md

│── LICENSE

│── /Proteus_Files

│── /Arduino_Code

│── /images


▶️ Getting Started


Prerequisites

Proteus Design Suite

Arduino IDE (optional for editing code)


Installation & Setup


Clone the repository:

git clone https://github.com/AmaiTechPro/Smart-Home-Automation-Arduino-Proteus.git

Open the Proteus simulation file

Load the Arduino .hex or .ino file

Run the simulation


📸 System Simulation Results

🔧 Complete System Schematic (Idle State)

This shows the full circuit design in its default (idle) condition before any triggers are activated.

![image alt](https://github.com/AmaiTechPro/Smart-Home-Automation-Arduino-Proteus/blob/756164bae7276eb09367203f20092479120521a0/images/system_overview.png)

🌡️ Temperature Monitoring & Automated Cooling

The system monitors temperature and activates cooling mechanisms automatically when thresholds are exceeded.



⏰ RTC-Based Main/House Lighting

Lighting is controlled based on real-time scheduling using the RTC module.

![image alt](

🚶 Motion-Triggered Security & Lighting

Motion detection using a PIR sensor triggers both security alerts and lighting.



🌙 LDR-Based Night Security Activation

Security system activates only under low-light (night) conditions using LDR input.



🧪 Comprehensive System Functional Test

All subsystems working together in an integrated simulation environment.






🔮 Future Improvements

IoT integration (Wi-Fi, MQTT, Blynk)

Mobile application control

Voice assistant integration

Deployment on real hardware

Cloud-based monitoring and analytics


📜 License

This project is licensed under the MIT License.

👨‍💻 Author

Brian David Amai

Telecommunication & Information Engineering

Networking | Cybersecurity | IoT | Automation

GitHub: https://github.com/AmaiTechPro

⭐ Support

If you found this project useful:

⭐ Star the repository

🍴 Fork the project

📢 Share with others
