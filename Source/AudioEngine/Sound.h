#pragma once

class Sound {
public:
    Sound(const char* soundPath);
    ~Sound();

    void play();
    void pause();
    void stop();

private:
    // Sound data.
};
