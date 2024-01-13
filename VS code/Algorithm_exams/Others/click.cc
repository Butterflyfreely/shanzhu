#include <iostream>
#include <windows.h>
#include <thread>
#include <unistd.h>

void click() {
    INPUT input;
    input.type = INPUT_MOUSE;
    input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP;
    input.mi.dx = 0;
    input.mi.dy = 0;
    input.mi.mouseData = 0;
    input.mi.time = 0;
    input.mi.dwExtraInfo = NULL;

    SendInput(1, &input, sizeof(INPUT));
}

int main() {
    while (true) {
        click();
        sleep(1);
    }
    return 0;
}