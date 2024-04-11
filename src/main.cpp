#include <Arduino.h>

void displayTasks() {
  {
    const int taskBufferSize = 1024;
    char buffer[taskBufferSize];
    vTaskList(buffer);
    Serial.println(F("**********************************"));
    Serial.println(F("Task  State   Prio    Stack    Num"));
    Serial.println(F("**********************************"));
    Serial.print(buffer);
    Serial.println(F("**********************************"));
  }
}

void setup() {
  Serial.begin(MONITOR_SPEED);
  Serial.println("vTaskList Demo.");
}

void loop() {
  delay(5000);
  displayTasks();
}