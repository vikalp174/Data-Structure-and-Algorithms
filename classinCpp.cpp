class rectangle {


    int length;
    int breth;

    rectangle(int l, int w)
    {
        length= l;
        breth= w;
    }

    int area ()
    {
        return length*breth;
    }

    int paremeter()
    {
        return 2*(length+breth);
    }

} r1,r2;