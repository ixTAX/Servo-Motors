# Servo-Motors
### An Arduino project that controls 4 Servo Motors and after 2 seconds the motors will stop at 90 degree

<img width="1252" height="788" alt="Screenshot 2025-07-21 144459" src="https://github.com/user-attachments/assets/7cb15b3a-ef33-4714-84dd-01d32d24b8d2" />

### After starting the arduino the servo motors will start sweeping

<img width="1325" height="793" alt="Screenshot 2025-07-21 144517" src="https://github.com/user-attachments/assets/a266e4c5-d434-4a54-bcb4-07c736fdd7b9" />

### After 2 seconds the servo motors will stop at 90 degree

<img width="1305" height="819" alt="Screenshot 2025-07-21 144531" src="https://github.com/user-attachments/assets/d0ead607-9626-48f6-ba06-4da49e6bb382" />

### The code for the arduino

<img width="755" height="905" alt="image" src="https://github.com/user-attachments/assets/d42f6a8d-ac36-4039-be8c-e51c83cc832b" />


## Humanoid Robot Walking Algorithm:

### 1- Initialize the System
  - Attach each servo to its corresponding pin.
  - set startTime to current time using millis().
### 2- Begin Walking Phase (First 2 Seconds)
  -Phase 1: Forward Motion
    -Incrementally move all servos from 0° to 180°.
    -Each small step changes the angle by 1° with a 5ms delay.
    -This simulates the robot limbs moving forward.
  -Phase 2: Backward Motion
    -Move all servos back from 180° to 0° in reverse steps.
    -Again, each movement changes the angle by 1° every 5ms.
    -This simulates the limbs returning to the original position.
### 3-After 2 Seconds (Stop Phase)
  -All servos are set to 90°, the rest position.
  -This halts movement and centers all joints.
  -Movement stays in this fixed position until the board is reset.

