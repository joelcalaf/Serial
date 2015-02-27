float kgCO2m2 = 3,2;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( kgCO2m2 < 3,5)
  {
    Serial.print("Aigua encara no bull");
  } 
  else if ( kgCO2m2 >= 90 && kgCO2m2 < 100)
  {
    Serial.print("Aigua apunt de bullir!");
  }
  else if ( tempAigua >= 90 && tempAigua < 100)
  {
    Serial.print("Aigua apunt de bullir!");
  }
  else if ( tempAigua >= 90 && tempAigua < 100)
  {
    Serial.print("Aigua apunt de bullir!");
  }
  else if ( tempAigua >= 90 && tempAigua < 100)
  {
    Serial.print("Aigua apunt de bullir!");
  }
  else if ( tempAigua >= 90 && tempAigua < 100)
  {
    Serial.print("Aigua apunt de bullir!");
  }
  else if ( tempAigua >= 90 && tempAigua < 100)
  {
    Serial.print("Aigua apunt de bullir!");
  }
  else
  {
    Serial.print("Aigua bullint");
  }
}

void loop()   // we need this to be here even though its empty
{
}

