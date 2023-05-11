! PWR034: Avoid strided array access to improve performance
! https://www.codee.com/knowledge/pwr034

subroutine example()
    implicit none
    integer :: a(100), i

    do i = 1, 100, 2
        a(i) = 0
    end do

end subroutine
