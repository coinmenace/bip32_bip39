//
// Created by Adebayo Olabode on 11/5/18.
//

#ifndef BIP39_BIP32_MAIN_H
#define BIP39_BIP32_MAIN_H
#include <stdio.h>
#include <string.h>
#include "curves.h"
#include "bip39.h"
#include "bip32.h"

#define VERSION_PRIVATE 0x0488ade4
#define FROMHEX_MAXLEN 512

const uint8_t *fromhex(const char *str);
const char *generateMnemonic(int strength);
void  generateBip39Seeed(const char *mnemonic,uint8_t seed[64],const char *passphrase);
void print_hex(uint8_t *s);
//void generateBip32RootKey(uint8_t seed[64],char rootkey[112]);

#endif //BIP39_BIP32_MAIN_H
