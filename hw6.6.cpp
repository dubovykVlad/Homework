class TV
{
public:
    void SetStation(int Station);
    int GetStation() const;

// private:
    int itsStation;
};
main()
{
    TV myTV, myOtherTV;
    myTV.itsStation = 9; //itsStation є приватною, тому myTV не має доступу
    myTV.SetStation(10); //до SetStation треба звертатися через myTV
    myOtherTV.SetStation(2); //відсутність об'єкту myOtherTV у класі TV
}
