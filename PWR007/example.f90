! PWR007: Disable implicit declaration of variables
! https://www.appentra.com/knowledge/checks/pwr007

SUBROUTINE example
    NUM1 = 7
    NUM2 = 2.5 ! NUM2 is implicitly typed as INTEGER
    RES = NUM1 / NUM2 ! RES = 3.0
END SUBROUTINE example
