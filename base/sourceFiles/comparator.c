int comparator(double a, double b, char* var) {
    if(var == "max")    {
        return (a > b)? 1 : 0; 
    }
    else    {
        return (a < b)? 1 : 0; 
    }
}
