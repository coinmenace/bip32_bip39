//
// Created by Adebayo Olabode on 11/5/18.
//

#include "main.h"



int main(void){

    // generate mnmemoic
    const char *passphrase ="password";
    int strength = 128;
    int keylength = 64;
    //3,6,9,12,15,18,21,24
    //int numwords = 6;
    //this generates the mnemonic
    const char *mnemonic = generateMnemonic(strength);

    printf("Mnemonic string : %s \n",mnemonic);
    uint8_t bip39_seed[keylength];
    //this generates a bip39 seed from mnemonic
    generateBip39Seeed(mnemonic,bip39_seed,passphrase);
    print_hex(bip39_seed);
    char rootkey[112];
    uint32_t fingerprint = 0;
    HDNode node;
    //generateBip32RootKey(bip39_seed,rootkey);
    //printf("root key:%s\n",rootkey);
    hdnode_from_seed(bip39_seed,64, SECP256K1_NAME, &node);
    hdnode_serialize_private(&node, fingerprint, VERSION_PRIVATE, rootkey, sizeof(rootkey));
    printf("root key:%s\n",rootkey);


    

}