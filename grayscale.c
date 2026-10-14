// pora ucit....


#include <stdio.h>
#include <stdint.h>

#pragma pack(push, 1)

typedef struct{
    uint16_t type;
    uint32_t fileSize;
    uint16_t reserved1;
    uint16_t reserved2;
    uint32_t pixelOffset;
} BMPFileHeader;

typedef struct{
    uint32_t headerSize;
    int32_t width;
    int32_t height;
    uint16_t planes;
    uint16_t bitsPerPixel;
    char xyz[24];
} BMPInfoHeader;

typedef struct{
    uint8_t blue;
    uint8_t green;
    uint8_t red;
} bmpPixel;

#pragma pack(pop)


int main(){
    FILE *input;
   

    BMPFileHeader fileHeader;
    BMPInfoHeader infoHeader;

    input = fopen("color.bmp", "rb");

    if (input == NULL){
        printf("Cannot open file.");
        return 1;
    }

    fread(&fileHeader, sizeof(BMPFileHeader), 1, input);
    fread(&infoHeader, sizeof(BMPInfoHeader), 1, input);

    if(fileHeader.type != 0x4d42){
        printf("Not a BMPfile.\n");
        fclose(input);
        return 1;
    }

    printf("Width : %d\n", infoHeader.width);
    printf("Height : %d\n", infoHeader.height);

    FILE *output;

    output = fopen("grayscale.bmp", "wb");

    if(output == NULL){
        printf("Cannot create output file.\n");
        fclose(input);
        return 1;
    }

    fwrite(&fileHeader, sizeof(BMPFileHeader), 1, output);
    fwrite(&infoHeader, sizeof(BMPInfoHeader), 1, output);
    
    fseek(input, fileHeader.pixelOffset, SEEK_SET);
    fseek(output, fileHeader.pixelOffset, SEEK_SET);


    int width = infoHeader.width;
    int height = infoHeader.height;


    bmpPixel pixel;

    for(int y = 0; y < height; y++){
         for(int x = 0; x < width; x++){
            fread(&pixel, sizeof(bmpPixel), 1, input);

            uint8_t gray = (uint8_t)(0.299 * pixel.red + 0.587 * pixel.green + 0.114 * pixel.blue);
        
            pixel.red = gray;
            pixel.green = gray;
            pixel.blue = gray;

            fwrite(&pixel, sizeof(bmpPixel), 1, output);
         }
    }

    fclose(input);
    fclose(output);

    return 0;
}