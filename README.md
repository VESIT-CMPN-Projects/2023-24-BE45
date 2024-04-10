# Madhuvista- Your Diabetes Ally

The first part of the project consist of the **software** side of project which involved creation of various ML models for comparison. 
Datasets used: PIMA & Sylhet. The colab file _Sem7_MajorProject_MadhuVista.ipynb_ has the code for the same.

A Web UI using Streamlit was created to display the predictions using the best model chosen from above comparisons, in our case: Random Forest for PIMA dataset.
(Run the file madhuvista_app.py with the cmd: _streamlit run madhuvista_app.py_, the dataset for it can be downloaded from kaggle.)

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

The second part of the project consists of the **hardware** implementation of Research Papers for "**_Non-Invasive Blood Glucose Monitoring using NIR techniques_**" 
We used an IR Sensor i.e. HW201 Module, An OLED display (Can use just a Serial Monitor) and a microcontroller. The circuits were realized first using the Arduino UNO and then minimization was done using an ATtiny85.

After creating models for the aforesaid, A new model was created on the real time data collected for the mapping of Analog Voltage to Respective Blood Glucose levels.
The circuits were tested on Breadboard, then Zero PCB. The final model was uploaded into the Microcontroller (_ARDUINO OR ATtiny85_) using **TinyML**, code of which is in the colab file: _TinyML-Analog-to-Glucose-Model.ipynb_
