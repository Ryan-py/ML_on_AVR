#include "clf.h"

const char* species[] = {"Setosa", "Versicolor", "Virginica"};

void setup() {
  Serial.begin(9600);
  Serial.println("Enter Values:");
}

void loop() {
  float features[4];
  readSerialInput(features);
  int32_t out_val = clf_predict(features, 4);

  if (out_val >= 0 && out_val < 3) {
    Serial.println(species[out_val]);
  } else {
    Serial.println("Invalid prediction");
  }
}

void readSerialInput(float inputArray[]) {
  while (!Serial.available()) {
    // Wait for input
  }

  String inputString = Serial.readStringUntil('\n');
  inputString.trim();

  String inputValues[4];
  int index = 0;

  int startIndex = 0;
  int endIndex = inputString.indexOf(',');
  while (endIndex >= 0 && index < 4) {
    inputValues[index] = inputString.substring(startIndex, endIndex);
    startIndex = endIndex + 1;
    endIndex = inputString.indexOf(',', startIndex);
    index++;
  }

  if (index < 4) {
    inputValues[index] = inputString.substring(startIndex);
    index++;
  }

  if (index == 4) {
    for (int i = 0; i < 4; ++i) {
      inputArray[i] = inputValues[i].toFloat();
    }
  } else {
    Serial.println("Invalid input format!");
  }

  while (Serial.available()) {
    Serial.read();
  }
}
