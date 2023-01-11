void states(int s0, int s1, int D, int* S0, int* S1, int* O) {
    *S0 = s1 & D | s0 & D;
    *S1 = (!s0) & (!s1) & D;
    *O = s1 & D | s0 & D;
}