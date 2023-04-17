! PWR005: Disable default OpenMP scoping
! https://www.codee.com/knowledge/checks/pwr005

SUBROUTINE example(result)
    IMPLICIT NONE
    INTEGER, INTENT(OUT) :: result(:)
    INTEGER :: i

    ! // Default data scoping is used which may not be correct
    !$omp parallel do
    DO i = 1, size(result, 1)
        result(i) = i
    END DO
END SUBROUTINE example
