int power(int x, int y){
    int i;
    int pno = 1;
    for (i = 0; i < y; i++){
        pno = pno*x;
    }
    return pno;
}