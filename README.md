# Real-time-sterilization-machine-processes-recording


**Project Title:** Embedded System for Sterilization Machine Process Monitoring

**Description:**

This project implements an embedded system based on the ESP32 board to monitor and record the sterilization process of a medicine production machine. The system triggers on a feedback signal from a limit switch indicating the machine door's status.

**Key Features:**

* **Real-Time Monitoring:** Continuously monitors the sterilization process.
* **Process Recording:** Records the start and end times of each sterilization cycle.
* **Data Storage:** Stores recorded data on an SD card for later analysis and reporting.
* **ESP32-Based:** Utilizes the ESP32's powerful microcontroller and Wi-Fi capabilities.

**Simulation:**

[I]

**Hardware Components:**

* ESP32 Development Board
* SD Card Module
* Limit Switch
* Wiring and Connectors

**Software Components:**

* Arduino IDE (or similar) for ESP32 development
* SD library for SD card communication
* Timekeeping library (e.g., RTClib) for accurate timekeeping
* Any necessary libraries for Wi-Fi and data transmission (if applicable)

**Wiring Diagram:**

[In]

**Code Structure:**

* **main.cpp:** Main program file containing the core logic for reading the limit switch, recording data, and writing to the SD card.
* **SD_card.cpp:** Functions for initializing and writing to the SD card.
* **timekeeping.cpp:** Functions for handling timekeeping and date calculations.
* **(Optional) Wi-Fi.cpp:** Functions for Wi-Fi connectivity and data transmission (if applicable).

**Usage:**

1. **Hardware Setup:** Assemble the hardware components according to the wiring diagram.
2. **Software Setup:** Install the Arduino IDE and necessary libraries.
3. **Code Upload:** Upload the compiled code to the ESP32 board.
4. **Power On:** Power on the ESP32 and the sterilization machine.
5. **Monitoring:** The system will automatically start monitoring the machine's status.
6. **Data Access:** After the sterilization cycle, the recorded data can be accessed from the SD card.

**Future Improvements:**

* **Wi-Fi Integration:** Add Wi-Fi capabilities to transmit data to a remote server for real-time monitoring and analysis.
* **User Interface:** Develop a web-based or mobile interface to visualize the data and control the system remotely.
* **Security:** Implement security measures to protect the recorded data and prevent unauthorized access.
* **Error Handling:** Enhance error handling and recovery mechanisms to ensure system reliability.

**Contributions:**

Contributions to this project are welcome! Feel free to fork the repository and submit pull requests for improvements or bug fixes.
