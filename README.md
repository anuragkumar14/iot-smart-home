# iot-smart-home
A Google Assistant applet is setup from IFTTT to trigger a web request which will update a field in ThingSpeak cloud. Then the data is read from the ThingSpeak cloud to control the appliances in your home from anywhere in the world. Ex: From your mobile phone, if you say “ok google, turn on the light” from anywhere, it should turn on the lights in your home.

The bulb will glow when the relay will receive value 1 and stop glowing if it receives value 0.
The website for setting up google assistant applet used is IFTTT.
Two IFTTT triggers are created. one called “lights
on” which, when the command received by google assistant changes the
present channel value to 1, and the other called “lights off” which, when
the command received by google assistant changes the present channel
value to 0.
