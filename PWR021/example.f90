! PWR021: temporary computation can be extracted to a vectorizable loop
! https://www.codee.com/catalog/pwr021

integer function expensive_computation(c, i)
    implicit none
    integer, intent(in) :: i, c(1000)

    expensive_computation = c(i) * 2
end function expensive_computation

subroutine example()
    implicit none
    integer :: a(1000), c(1000), i, t, expensive_computation

    do i = 1, 1000
        t = expensive_computation(c, i)
        a(c(i)) = t
    end do

end subroutine
