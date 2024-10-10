#ifndef TIME_H
#define TIME_H

class Time {
    private: // Seção Privada
        int hour;
        int minute;
        int second;

    public:
        Time(int hour = 0, int minut = 0, int second = 0);
        int getHour() const;
        void setHour(int hour);
        int getMinute() const;
        void setMinute(int minute);
        int getSecond() const;
        void setSecond(int second);
        void print() const;
        void nextSecond();

};

#endif