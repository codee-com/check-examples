! PWR019: Consider interchanging loops to favor vectorization by maximizing inner loop's trip count
! https://www.codee.com/knowledge/pwr019

subroutine example
    integer :: a(200, 10), i, j

    do i = 1, 200
        do j = 1, 10
            a(j, i) = 0
        end do
    end do
end subroutine
