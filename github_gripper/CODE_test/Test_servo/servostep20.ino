#include <Servo.h>

Servo myservo;

void setup() {
  myservo.attach(9); // เชื่อมต่อ Servo ที่ขา 9
}

void loop() {
  // ทำลูป 2 ครั้ง
  for (int i = 0; i < 2; i++) {
    // เริ่มที่มุม 70 องศา
    for (int angle = 70; angle <= 180; angle += 20) {
      myservo.write(angle);
      delay(1500); // รอให้ Servo หมุนเป็นเวลา 0.5 วินาที
    }
  }
}
