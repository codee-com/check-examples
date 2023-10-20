! PWR016: Use separate arrays instead of an Array-of-Structs
! https://www.codee.com/catalog/pwr016

program main

    type point
        integer :: x
        integer :: y
        integer :: z
    end type

contains

    subroutine foo()
        type(point) :: points(100)
        integer:: i

        do i = 1, 100
            points(i)%x = 1
            points(i)%y = 1
        end do

    end subroutine

end program
