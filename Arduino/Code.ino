#include <IRremote.h>
#include <LiquidCrystal.h>

// Initialize the LCD
LiquidCrystal lcd(1, 2, 4, 5, 6, 7);

// Define the pin for the IR receiver
const int irReceiverPin = 12;

IRrecv irrecv(irReceiverPin);     // Create instance of 'irrecv'
uint32_t last_decodedRawData = 0;

// Function to keep track of the current position on the LCD
int lcdPos = 0;

// Variable to keep track of the last time a character was received
unsigned long lastCharTime = 0;
const unsigned long charDelay = 100; // 0.1 second delay

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600); // Initialize serial communication
  irrecv.enableIRIn(); // Start the receiver
  lcd.clear(); // Clear the LCD screen initially
}

void loop() {
  if (irrecv.decode()) { // Check if an IR signal is received
    unsigned long currentTime = millis(); // Get the current time
    if (currentTime - lastCharTime >= charDelay) { // Check if enough time has passed
      char receivedChar = translateIR(); // Translate the received IR code to a character
      if (receivedChar != '\0') { // If a valid character is received
        if (receivedChar == ' ') {
          // Handle space button - move cursor to the next position
          if (lcdPos < 16) {
            lcd.setCursor(lcdPos, 0); // Set cursor to the current position
            lcd.print(receivedChar); // Display space character
            lcdPos++; // Move to the next position
          }
        } else {
          // Print character directly if there's space on the current line
          if (lcdPos < 16) {
            lcd.setCursor(lcdPos, 0); // Set cursor to the current position
            lcd.print(receivedChar); // Display the received character
            lcdPos++; // Move to the next position
          } else {
            // If no space, shift the display left and print the new character
            lcd.scrollDisplayLeft();
            lcd.setCursor(15, 0); // Set cursor to the end of the line
            lcd.print(receivedChar); // Display the received character
          }
        }
        Serial.print("Received: ");
        Serial.println(receivedChar); // Print the received character to the Serial Monitor
        lastCharTime = currentTime; // Update the last character time
      }
    }
    irrecv.resume(); // Receive the next IR signal
  }
}

// Function to translate the IR code into a character
char translateIR() {
  if (irrecv.decodedIRData.flags & IRDATA_FLAGS_IS_REPEAT) {
    // Handle repeat codes if needed
    irrecv.decodedIRData.decodedRawData = last_decodedRawData;
  } else {
    last_decodedRawData = irrecv.decodedIRData.decodedRawData;
  }

  switch (irrecv.decodedIRData.decodedRawData) {
    case 0xEE11FB04: return 'A';
    case 0xED12FB04: return 'B';
    case 0xEC13FB04: return 'C';
    case 0xEB14FB04: return 'D';
    case 0xEA15FB04: return 'E';
    case 0xE916FB04: return 'F';
    case 0xE817FB04: return 'G';
    case 0xE718FB04: return 'H';
    case 0xE619FB04: return 'I';
    case 0xAC53FB04: return 'J';
    case 0xEF10FB04: return 'K';
    case 0xE51AFB04: return 'L';
    case 0xBC43FB04: return 'M';
    case 0xA45BFB04: return 'N';
    case 0xB24DFB04: return 'O';
    case 0xAD52FB04: return 'P';
    case 0x4EB1FB04: return 'Q';
    case 0x4FB0FB04: return 'R';
    case 0x45BAFB04: return 'S';
    case 0x8679FB04: return 'T';
    case 0x708FFB04: return 'U';
    case 0x718EFB04: return 'V';
    case 0xDF20FB04: return 'W';
    case 0x8F70FB04: return 'X';
    case 0x9A65FB04: return 'Y';
    case 0xD926FB04: return 'Z';
    case 0xBB44FB04: return ' '; // Space button
    case 0xBF40FB04: return '1';
    case 0xBE41FB04: return '2';
    case 0xF807FB04: return '3';
    case 0xF906FB04: return '4';
    case 0xE619FF00: return '0';
    default: return '\0'; // Return null if no valid code is received
  }
}
