# README for Iris Species Prediction with Arduino

This repository contains an Arduino sketch (`iris_prediction.ino`) that uses a machine learning model to predict the species of Iris flowers based on input features. The machine learning model is trained on the famous Iris dataset using scikit-learn in Python.

## Python Notebook

The initial model training and conversion to Arduino-compatible code are performed in a Python notebook. The notebook (`Iris_Species_Prediction.ipynb`) is available in this repository. It covers the following steps:

1. Loading the Iris dataset using scikit-learn.
2. Exploring and preparing the dataset.
3. Splitting the dataset into training and testing sets.
4. Training a RandomForestClassifier on the training set.
5. Evaluating the model's accuracy on the testing set.
6. Converting the trained model to Arduino-compatible code using the `emlearn` library.
7. Saving the converted model to a header file (`clf.h`).

## Arduino Sketch

The Arduino sketch (`iris_prediction.ino`) uses the converted model (`clf.h`) to make predictions on input features received through the serial monitor. Here are the key components of the sketch:

- `clf.h`: The header file containing the converted machine learning model.
- `species[]`: An array of strings representing the possible Iris species.
- `setup()`: Initializes the serial communication and prints an instruction message.
- `loop()`: Repeatedly reads input features from the serial monitor, makes predictions, and prints the predicted species.
- `readSerialInput(float inputArray[])`: Helper function to read input features from the serial monitor.

## Usage

1. Upload the Arduino sketch (`iris_prediction.ino`) to your Arduino board.
2. Open the serial monitor in the Arduino IDE.
3. Enter the values for sepal length, sepal width, petal length, and petal width separated by commas.
4. Press Enter, and the Arduino will print the predicted Iris species.

Note: Make sure to install the necessary Python libraries using `pip install -r requirements.txt` before running the Python notebook.

Feel free to experiment with different input values and observe the model's predictions. If you encounter any issues or have questions, please open an issue in this repository. Happy coding!