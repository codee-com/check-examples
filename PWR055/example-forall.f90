! PWR055: consider applying offloading parallelism to forall loop
! https://www.codee.com/catalog/pwr055/
! Forall pattern
! https://www.codee.com/catalog/patterns/forall/

SUBROUTINE example(D, X, Y, n, a)
    integer, intent(in) :: n
    double precision, intent(in) :: a
    double precision, dimension (1:n), intent(in) :: X, Y
    double precision, dimension (1:n), intent(out) :: D
    integer :: i

    DO i=1,n
       D(i) = a * X(i) + Y(i)
    END DO 
END
