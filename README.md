Title: #_**Madhuvista- Your Diabetes Ally**_

The first part of the project consist of the **software** side of project which involved creation of various ML models for comparison. 
Datasets used: PIMA & Sylhet.

A Web UI using Streamlit was created to display the predictions using the best model, in our case: Random Forest for PIMA dataset.

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

The second part of the project consists of **hardware** implementation of the Research Papers for "**_Non-Invasive Blood Glucose Monitoring using NIR techniques_**" using an IR Sensor i.e. HW201 Module,
An OLED display (Can use just a Serial Monitor) and a microcontroller. The circuits were realized first using the Arduino UNO and then it was minized using an ATtiny85.
After creating models for the aforesaid, A new model was created on the real time data collected for the mapping of Analog Voltage to Respective Blood Glucose levels.
The circuits were tested on Breadboard, then Zero PCB. The final model was uploaded into the Microcontroller (_ARDUINO OR ATtiny85_) using **TinyML**.
