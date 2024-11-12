#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t crc_logic(uint8_t * data,uint32_t poly,uint32_t init_val,uint32_t xor_out){
    size_t n = sizeof(data);
    uint32_t crc = init_val;
    for(size_t i=0;i<n;i++){
        crc = crc ^ data[i];
        for(int _ =0;_<8;_++){
            if(crc & 1){
                crc = (crc>>1)^poly;
            }
            else{
                crc = crc>>1;
            }
        }
    }

    return crc^xor_out;
}

int main(){
    uint8_t data[] = "Hello World";
    uint32_t poly = 0xEDB88320;          // Polynomial for CRC-32
    uint32_t init_val = 0xFFFFFFFF;      // Initial value for CRC-32
    uint32_t xor_out = 0xFFFFFFFF;       // Final XOR value for CRC-32

    uint32_t crc_value = crc_logic(data,poly,init_val,xor_out);
    printf("CRC-32 Checksum: 0x%08X\n", crc_value);
    return 0;
}