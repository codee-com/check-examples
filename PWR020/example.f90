! PWR020: consider loop fission to enable vectorization
! https://www.codee.com/knowledge/pwr020

subroutine example()
    integer :: a(100), b(100), c(100), i

    do i = 1, 100
        a(i) = i
        b(i) = i
        c(i) = i
    end do

    do i = 1, 100
        a(i) = a(i) + i
        b(c(i)) = b(c(i)) + i
    end do

end subroutine
