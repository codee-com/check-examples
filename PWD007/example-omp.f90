! PWD007: Unprotected multithreading recurrence
! https://www.codee.com/catalog/pwd007

SUBROUTINE foo
    IMPLICIT NONE
    INTEGER :: i, x(5), y(5)

    y(1)=0
    !$omp parallel do
    DO i = 2, 5
        y(i) = y(i-1) + x(i-1)
    END DO
END SUBROUTINE
