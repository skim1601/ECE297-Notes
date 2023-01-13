template<typename T> T my_min(T& a, T& b) {
    T result;
    if (a > b)
        result = b;
    else
        result = a;
    
    return result; 
}
#endif