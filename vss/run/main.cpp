/*
 * main.cpp
 *
 *  Created on: May 21, 2013
 *      Author: quangpham
 */

#include <iostream>
#include <cstdio>
#include "../diphone/read_binary_file.h"
using namespace std;

const string kDataPath = "data/";
const string kInputTextFileName = kDataPath + "input_text.txt";
const string kOutputWaveFileName = kDataPath + "output_speech.wav";

#include "vietnamese_synthesis_system.h"

void run_system() {
    VietnameseSynthesisSystem vss;

    if (!vss.init()) {
        cerr << "SYSTEM INITIATION FAILED!" << endl;
        return;
    }

    if (!vss.run(kInputTextFileName, kOutputWaveFileName)) {
        cerr << "SYSTEM RUNNING FAILED!" << endl;
        return;
    }

    cout << endl << "SPEECH SYNTHESIZED SUCCESSFULLY!" << endl;
}

#include "../test/test_wave_file_utils.h"

int main() {
    run_system();
//	read_file("diphone/data/HALFSYL.DAT");

    return 0;
}
