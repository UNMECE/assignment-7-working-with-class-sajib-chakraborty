class Electric_Field {
private:
    double *E;

public:
    Electric_Field();
    Electric_Field(double Ex, double Ey, double Ez);
    ~Electric_Field();
    
    double calculateMagnitude() const;  
    double innerProduct() const;
    

    void setE(double Ex, double Ey, double Ez);
    double getEx() const;
    double getEy() const;
    double getEz() const;
};

