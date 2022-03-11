# FrameX
FrameX is a simple C++ Console Output formatting and colorizing Framework.

# Functions
All functions are in the namespace **_FrameX_**.
***
### out
```c++
void out(std::string str, uint8_t Mode);
```
**_out_** takes two parameters, a string and an integer.
The string is the text you want to print out.
The integer specifies how the string is printed out.

__Modes:__
* **FRAMEX_TEXT_STD**
  ```
  Lorem ipsum dolor sit amet
  ```
* **FRAMEX_TEXT_HEADER**
  ```
  !===== Header ====!
  ```
* **FRAMEX_TEXT_BOX_1**
  ```
  !==================!
  !==  Box Type 1  ==!
  !==================!
  ```
* **FRAMEX_TEXT_BOX_2**
  ```
  +--------------+
  |  Box Type 2  |
  +--------------+
  ```
* **FRAMEX_TEXT_WARNING**
  ```
  WARNING > Lorem ipsum dolor sit amet
  ```
* **FRAMEX_TEXT_INFO**
  ```
  INFO > Lorem ipsum dolor sit amet
  ```
* **FRAMEX_TEXT_DEBUG**
  ```
  DEBUG > Lorem ipsum dolor sit amet
  ```
* **FRAMEX_TEXT_ERROR**
  ```
  ERROR > Lorem ipsum dolor sit amet
  ```
* **FRAMEX_TEXT_SUCCESS**
  ```
  SUCCESS > Lorem ipsum dolor sit amet
  ```
* **FRAMEX_TEXT_BULLET_1**
  ```
    ==> Lorem ipsum dolor sit amet
  ```
* **FRAMEX_TEXT_BULLET_2**
  ```
      -> Lorem ipsum dolor sit amet
  ```

***
### textInput
```c++
std::string textInput(std::string str);
```
**_textInput_** takes a string, that is printed out.
It returns the user input.

***
### yesNoInput
```c++
bool yesNoInput(std::string str);
```
**_yesNoInput_** takes a string, that is printed out with a [Y/N] after it.
It returns true when the user enters Y or y and false if the user enters N or n.

***
### separator
```c++
void separator(int length);
```
**_separator_** takes an integer, that defines the length of the printed separator.
The minimum length is 3.
If the length is less than 3, it will be set to 3.