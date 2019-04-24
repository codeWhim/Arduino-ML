#include <ArduinoML.h>

// A Simple MLP Model Training / Prediction example
// Created Mar 18, 2019
// By Abdul Samad (github.com/codeWhim)

ArduinoML mlp = ArduinoML(MLP)

void setup()
{
    Serial.begin(9600);

    int epochs = 10; // Number of iterations through training set
    float alpha = 0.001; // Learning Rate
    float validation_split = 0.1; // 0.1 = 10% Data taken for validation from training dataset
    int optimizer = RMSProp;
    int loss_function = MSE; // Mean Squared Error

    mlp.setHyperParameters(alpha,optimizer,loss_function);
    mlp.train(data,target,epochs,validation_split);

}

void loop()
{
  output = mlp.predict(data_predict);
  delay(500);
}
