class Magnetic_Field {
private:
    double *B;

public:
    Magnetic_Field();
    Magnetic_Field(double Bx, double By, double Bz);
    ~Magnetic_Field();
    
    double calculateMagnitude() const;  
    void unitVector() const;

  
    void setB(double Bx, double By, double Bz);
    double getBx() const;
    double getBy() const;
    double getBz() const;
};

