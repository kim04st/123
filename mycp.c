cd \ //c드라이브이동
cd anu //anu 폴더 이동
notepad mycp  //mycp.c 생성

#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    FILE *source, *destination;

    source = fopen(argv[1], "r");
    if (source == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    destination = fopen(argv[2], "w");
    if (destination == NULL) {
        printf("Error opening destination file.\n");
        fclose(source); // 열었던 소스 파일을 닫아줍니다.
        return 1;
    }

    int c;
    while ((c = fgetc(source)) != EOF) {
        fputc(c, destination);
    }

    fclose(source);
    fclose(destination);

    return 0;
}

cl mycp.c //컴파일

notepad t1.txt //t1.txt 파일생성
  
1
2
3
  
mycp t1.txt t2.txt 
dir
type t2.txt //t2.txt파일 확인하여 t1.txt와 동일하게 복사되었는지 확인
