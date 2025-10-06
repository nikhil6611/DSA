int reverseBits(int n) {
    unsigned int num = (unsigned int)n; 
    unsigned int result = 0;

    for (int i = 0; i < 32; i++) {
        result = (result << 1) | (num & 1);
        num >>= 1;
    }

    return (int)result; 
}
