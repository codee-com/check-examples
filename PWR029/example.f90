! PWR029: Remove integer increment preventing performance optimization
! https://www.codee.com/knowledge/pwr029

subroutine example()
    implicit none
    integer :: a(100), b(100), i, k

    k = 1
    do i = 1, 100
        b(i) = a(k) + 1
        k = k + 1
    end do

end subroutine
