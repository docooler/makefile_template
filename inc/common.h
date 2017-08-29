/*!
 * A power value in Watt.
 * Resolution: 1 Watt.
 */


struct Watt
{
   
private:
    int watt;
    
public:
    /*!
     * Initialize a watt value from a U16.
     * 1 W = Watt(1)
     */
    explicit Watt(int watt);
    /*!
     * Get the number of watts as a U16.
     */
    int getWatt();

    Watt();
};

struct dBm
{
private:
    /*!
     * The actual dB-value in units of 0.1 dB.
     * I.e, if db has the numerical value 42,
     * that means 4.2 dB.
     */
    int dbm;
 
public:
   
    dBm();
    explicit dBm(float powerdBm);
    
   /*!
    * Construct a dBm value given a Watt value
    * Conversion is given by 10*log10(Watt)+30
    */
   static dBm fromWatt(Watt w);
};
