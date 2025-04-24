Components:

    Wemos D1 Mini: Development board based on the ESP8266 microcontroller.

    2 LEDs: Representing the eyes of the Terminator T800.

    Mini Servo G90: Used to control the movement of the jaw.

    Resistors (2 x 220Ω): For limiting current to the LEDs.

    Wires: For connecting components.

Connections:

    LEDs:

        LED 1 (Left Eye):

            The positive (anode) terminal of the LED connects to pin D1 (GPIO5) of the Wemos D1 Mini.

            The negative (cathode) terminal connects to GND through a 220Ω resistor.

        LED 2 (Right Eye):

            The positive (anode) terminal of the LED connects to pin D2 (GPIO4) of the Wemos D1 Mini.

            The negative (cathode) terminal connects to GND through a 220Ω resistor.

    Mini Servo G90:

        The control wire of the servo connects to pin D3 (GPIO0) of the Wemos D1 Mini.

        The power wire of the servo connects to the 5V pin of the Wemos D1 Mini.

        The ground wire of the servo connects to the GND pin of the Wemos D1 Mini.

    Power Supply:

        The 5V pin of the Wemos D1 Mini provides power to the servo.

        The GND pin is common to all components.
