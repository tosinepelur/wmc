#include <Keyboard.h>

char val; 
const int buttonPin = 4;    //Emergency stop button   
int buttonState = 0; 

void setup() {
  pinMode(buttonPin, INPUT);            //
  Serial.begin(9600);                   // Link to more information:
  Serial.begin(9600);                   // http://wmc.netii.net/
  Keyboard.begin();                     //
}

void loop() {

  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) { 
    Keyboard.releaseAll();
    Keyboard.end();
    Keyboard.begin();
  }
  
  if( Serial.available() )       
  {
    val = Serial.read();         
  }
  // Begin on VLC commands
  if( val == 'q' )               
  {
      Keyboard.press(0x80);   // VLC
      Keyboard.press(0xDA);   // CTRL+up arrow - vol up 5%
  }
  if( val == 'w' )               
  {
      Keyboard.press(0x80);   // VLC
      Keyboard.press(0xD9);   // CTRL+down arrow - vol down 5%
  }
  if( val == 'e' )               
  {
      Keyboard.press(0x81);   // VLC
      Keyboard.press(0xD7);   // SHIFT+right arrow - Forward 3sec
  } 
  if( val == 'r' )
  {
      Keyboard.press(0x81);   // VLC
      Keyboard.press(0xD8);   // SHIFT+left arrow - Rewind 3sec
  }
  if( val == 't' )               
  {                          // VLC
      Keyboard.press(' ');   // spacebar - play/pause
  } 
  if( val == 'y' )
  {                          // VLC
      Keyboard.press('F');   // 'F' - fullscreen
  }
  if( val == 'u' )
  {                          // VLC
      Keyboard.press('M');   // 'M' - Mute volume
  }
  // End of VLC commands
  // Begin of Windows Media Player commands
  if( val == 'a' )
  {
      Keyboard.press(0x80);   // WMP
      Keyboard.press('P');   // CTRL+P - play/pause
  }
  if( val == 's' )
  {
      Keyboard.press(0x82);   // WMP
      Keyboard.press(0xB0);   // ALT+Return - fullscreen
  }
  if( val == 'd' )
  {                           // WMP
      Keyboard.press(0xC9);   // F8 - vol down
  }
  if( val == 'f' )
  {                           // WMP
      Keyboard.press(0xCA);   // F9 - vol up
  }
  if( val == 'g' )
  {
      Keyboard.press(0x80);   // WMP
      Keyboard.press(0x81);   
      Keyboard.press('B');   // CTRL+SHIFT+B - Rewind
  }
  if( val == 'h' )
  {
      Keyboard.press(0x80);   // WMP
      Keyboard.press(0x81);   
      Keyboard.press('F');   // CTRL+SHIFT+F - Forward
  }
  if( val == 'j' )
  {                           // WMP   
      Keyboard.press(0xC8);   // F7 - Mute volume
  }
  // End of Windows Media Player commands
  // Begin of YouTube commands

if( val == 'z' )
  {                           // YT
      Keyboard.press(' ');   // Spacebar - play/pause
  }
  if( val == 'c' )
  {                           // YT
      Keyboard.press('F');   // 'F' - fullscreen
  }
  if( val == 'v' )
  {                           // YT
      Keyboard.press(0xD9);   // DOWN arrow - vol down
  }
  if( val == 'b' )
  {                           // YT
      Keyboard.press(0xDA);   // UP arrow - vol up
  }
  if( val == 'n' )
  {                          // YT   
      Keyboard.press(0xD8);   // LEFT arrow - Rewind
  }
  if( val == 'm' )
  {                           // YT   
      Keyboard.press(0xD7);   // RIGHT arrow - Forward
  }
    if( val == ',' )
  {                          // YT
      Keyboard.press('M');   // 'M' - Mute volume
  }
  // End of YouTube commands
  // Begin on SoundCloud commands
  if( val == '1' )               
  {
      Keyboard.press(0x81);   // SC
      Keyboard.press(0xDA);   // SHIFT+up arrow - vol up
  }
  if( val == '2' )               
  {
      Keyboard.press(0x81);   // SC
      Keyboard.press(0xD9);   // SHIFT+down arrow - vol down
  }
  if( val == '3' )               
  {                           // SC
      Keyboard.press(0xD7);   // right arrow - Forward
  } 
  if( val == '4' )
  {                           // SC
      Keyboard.press(0xD8);   // left arrow - Rewind
  }
  if( val == '5' )               
  {                          // SC
      Keyboard.press(' ');   // spacebar - play/pause
  } 
  if( val == '6' )
  {                          // SC
      Keyboard.press('F');   // 'F' - fullscreen
  }
  if( val == '7' )
  {                          // SC
      Keyboard.press('M');   // 'M' - Mute volume
  }
  // End of SoundCloud commands
  // Begin on Spotify commands
  if( val == '!' )               
  {
      Keyboard.press(0x80);   // Spotify
      Keyboard.press(0xDA);   // CTRL+up arrow - vol up
  }
  if( val == '"' )               
  {
      Keyboard.press(0x80);   // Spotify
      Keyboard.press(0xD9);   // CTRL+down arrow - vol down
  }
  if( val == '#' )               
  {
      Keyboard.press(0x82);   // Spotify
      Keyboard.press(0xD7);   // ALT+right arrow - Forward
  } 
  if( val == '¤' )
  {
      Keyboard.press(0x82);   // Spotify
      Keyboard.press(0xD8);   // ALT+left arrow - Rewind
  }
  if( val == '%' )               
  {                          // Spotify
      Keyboard.press(' ');   // spacebar - play/pause
  } 
  if( val == '&' )
  {                          
      Keyboard.press('0x80'); // Spotify
      Keyboard.press('0x81'); 
      Keyboard.press('0xDA');  // 'CTRL+SHIFT+UP' - max volume
  }
  if( val == '/' )
  {                          
      Keyboard.press('0x80'); // Spotify
      Keyboard.press('0x81');
      Keyboard.press('0xD9'); // 'CTRL+SHIFT+down arrow' - Mute volume
  }
  // End of Spotify commands
  
  if( val == 'x' )          // when X is sent, it doesn't print.
  {
      Keyboard.releaseAll();   
      Keyboard.end();
      Keyboard.begin();
  }
} 

