int distanceTraveled(int mainTank, int additionalTank) {
    int dist = 0;
    while (mainTank >= 5) {
        mainTank -= 5;          // use 5 litres
        dist += 50;             // 5 litres = 50 km
        if (additionalTank > 0) {   // transfer 1 litre from the additional tank
            mainTank++;
            additionalTank--;
        }
    }
    return dist + mainTank * 10;    // the remaining litres, at 10 km per litre
}