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


📸 System Simulation Preview

🔧 Complete System Overview




⏰ RTC-Based Lighting Control

Automated lighting triggered based on real-time scheduling.



🚶 Motion Detection & Security

PIR sensor detects motion and activates lighting and alerts.



🌙 LDR-Based Night Activation

System activates automation features under low-light conditions.



🧪 Full System Functional Test

All modules operating together in an integrated simulation.




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
