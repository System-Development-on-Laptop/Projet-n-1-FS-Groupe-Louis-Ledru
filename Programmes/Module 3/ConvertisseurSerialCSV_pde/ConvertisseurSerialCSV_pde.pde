//From Arduino to Processing to Txt or cvs etc.
//import
import processing.serial.*;
//declare
PrintWriter output;
Serial Arduino;

void setup() 
{
  Arduino = new Serial(this, "COM4", 9600);
  output = createWriter ("Battements.csv");
}

  void draw() 
  {
    if (Arduino.available() > 0) 
    {
      String SenVal = Arduino.readString();
      print(SenVal);
      if (SenVal != null) 
      {
        output.print(SenVal);
      }
    }
  }

  void keyPressed()
  {
    print("Lecture du port série");
    output.flush();
    output.close();
    exit(); 
  }