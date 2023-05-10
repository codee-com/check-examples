! PWR012: Pass only required fields from derived type as parameters
! https://www.codee.com/knowledge/pwr012

program x

    type data
        integer :: a(10)
        integer :: b(10)
    end type data

contains

    subroutine foo(d)
        type(data), intent(in) :: d
        integer :: i, sum

        do i = 1, 10
            sum = sum + d%a(i)
        end do
    end subroutine

    subroutine bar
        type(data) :: d

        call foo(d)
    end subroutine

end program
