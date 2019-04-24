#include <Arduino.h>

// Our own Header File
#include <ArduinoML.h>

#define FILENAME "testfile"

ArduinoML::ArduinoML(){
 File f;
 _spiffsActive=false;
}


bool ArduinoML::initDataFile(String filename){
    f=SPIFFS.open(filename,"w");
    if(!f) return 0;
    f.close(); return 1;
}

bool ArduinoML::readExample()

// bool ArduinoML::initDataFile(int dataset_number){
//      if (SPIFFS.begin()) {
//      _spiffsActive = true; 
//     _tempstring= FILENAME + String(dataset_number);
//       f = SPIFFS.open(_tempstring, "w");
//       f==1? f.close(): return 0;
//       return 1;
//   } else {
//     return 0;
//   }
// }

// bool ArduinoML::removeDataFile(int dataset_number){
//     _tempstring=FILENAME + String(dataset_number);
//     return SPIFFS.remove(_tempstring);
// }

// bool ArduinoML::addData(int dataset_number, float value, int axis){    //1=r,2=c,3=pages
//     _tempstring = FILENAME + String(dataset_number);
//     f = SPIFFS.open(_tempstring, "a");
//     if(f){
//     switch (axis)
//     {
//     case 1:
//         f.print(',');
//         f.print(String(value));
//         break;
//     case 2:
//         f.print('\n');
//         f.print(String(value));
//         break;
//        }
//        f.close(); return 1;
//        }
//        else return 0;
// }

// bool ArduinoML::add(int dataset_number, float value){
//    return addData(dataset_number, value,1);
// }

// bool ArduinoML::add(int dataset_number, float *value, int valuesize){
// addData(dataset_number,*value,2)
//  for(int t=1;t<valuesize;t++){
//      addData(dataset_number,*(value+t),1);
// }
// }

// ArduinoML::setHyperParameters(alpha,optimizer,loss_function){
//     _alpha=alpha;
// }

// String ArduinoML::readExample(int dataset_number,int number_of_example){
//     f = SPIFFS.open(_tempstring, "r");
//     if(!f) return 0;
//     for(:,number_of_example>0;number_of_example--)
//     {f.readStringUntil('\n');}
//     String mystr=f.readStringUntil('\n');
//     f.close();
//     return mystr;
// }

// void ArduinoML::setDatasetNumber(int dataset_number){ _dataset_number=dataset_number;}
// int ArduinoML::readNextValue(int dataset_number,)

ArduinoML::train(data, label, epochs, alpha){\
// Identify Data/Lable data type
// a lower level method

// Fetch 
// Carriage return separated examples
// Data and Labels marked from Header (First Row of Input File)

}

ArduinoML::predict(){

}

ArduinoML::evaluate(){

}