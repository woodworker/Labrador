#ifndef ISOBUFFER_H
#define ISOBUFFER_H

#include <QString>
#include <QByteArray>
#include <QDebug>
#include <QTimer>
#include "xmega.h"
#include "desktop_settings.h"
#include <QPlainTextEdit>

class isoBuffer
{
public:
    isoBuffer(int bufferLen);
    void openFile(QString newFile);
    void writeBuffer_char(char *data, int len);
    void writeBuffer_short(short *data, int len);
    short *readBuffer(double sampleWindow, int numSamples, bool singleBit, double delayOffset);
    void clearBuffer();
    void gainBuffer(int gain_log);
    void glitchInsert(short type);
    void serialDecode(double baudRate, unsigned char channel);
    int serialDistance();
    void serialBegin();
    QPlainTextEdit *console, *console1, *console2;
    bool serialAutoScroll = true;
private:
    short *buffer, *readData = NULL;
    FILE* fptr = NULL;
    int bufferEnd, back = 0, serialPtr = 0;
    int samplesPerSecond;
    bool firstTime = true;
    bool serialDecodingSymbol = false;
    unsigned char symbolMax = 7;
    unsigned char symbolCurrent = 0;
    unsigned short symbol = 0;
    void decodeSymbol(unsigned char newBit);
    void marchSerialPtr(int bitPeriod_samples);
    char serialPhase = 0;
    unsigned char numOnes(unsigned short var);
};

#endif // ISOBUFFER_H
