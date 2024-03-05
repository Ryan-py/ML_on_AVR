# ML ON AVR
This a simple project to showcase on how one can deploy Machine learning models to AVR boards such as Arduino Pro Mini
*This code has been tested on Arduno Uno and Arduino Pro Mini*
## Python Notebook

The initial model training and conversion to Arduino-compatible code are performed in a Python notebook. The notebook (`RandomForestClassifier_training.ipynb`) is available in this repository. It covers the following steps:

1. Loading the Iris dataset using scikit-learn.
2. Exploring and preparing the dataset.
3. Splitting the dataset into training and testing sets.
4. Training a RandomForestClassifier on the training set.
5. Evaluating the model's accuracy on the testing set.
6. Converting the trained model to Arduino-compatible code using the `emlearn` library.
7. Saving the converted model to a header file (`clf.h`).

## Arduino Sketch

The Arduino sketch (`predict.ino`) uses the converted model (`clf.h`) to make predictions on input features received through the serial monitor. 
# Usage

## Library Installation
Copy the `emlearn` folder and paste it to the location of your Arduino Library

| Operating System | Arduino Library Path                       |
| ---------------- | ------------------------------------------ |
| Linux            | ~/Arduino/libraries                        |
| Windows          | C:\Users\<YourUsername>\Documents\Arduino\libraries |
| Unix             | ~/Arduino/libraries                        |

## Code
1. Upload the Arduino sketch (`iris_prediction.ino`) to your Arduino board.
2. Open the serial monitor in the Arduino IDE.
3. Enter the values for sepal length, sepal width, petal length, and petal width separated by commas.
4. Press Enter, and the Arduino will print the predicted Iris species.

Feel free to experiment with different input values and observe the model's predictions. If you encounter any issues or have questions, please open an issue in this repository. Happy coding!
