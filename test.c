#include <stdio.h>
#include <stdbool.h>
#include "test.h"
#include "test_lib.h"

// Import user libraries here

// Write unit tests here

// Run unit tests with specific values
void run_tests()
{
        printf("running tests...\n");

        // call test functions here
        assert_is_true(true);
        assert_is_false(false);

        printf("complete.\n");
}

int main()
{
        run_tests();
        return 0;
}
