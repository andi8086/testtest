#include <check.h>
#include <stdlib.h>
#include <fff.h>
#include <calculate.h>

DEFINE_FFF_GLOBALS;

FAKE_VALUE_FUNC(uint16_t, calculate, uint16_t, uint16_t);

START_TEST(calculate_test)
{
	calculate_fake.return_val = 15;

	uint16_t sum = makesum(8,  4);
	ck_assert_int_eq(calculate_fake.arg0_val, 8);
	ck_assert_int_eq(calculate_fake.arg1_val, 4);
	ck_assert_int_eq(calculate_fake.call_count, 1);
	ck_assert_int_eq(sum, 15);
}
END_TEST

Suite * test1_suite(void)
{
	Suite *s;
	TCase *tc_core;

	s = suite_create("test1");

	tc_core = tcase_create("Core");
	tcase_add_test(tc_core, calculate_test);
	suite_add_tcase(s, tc_core);

	return s;
}

int main(void)
{
	int number_failed;

	Suite *s;
	SRunner *sr;

	s = test1_suite();
	sr = srunner_create(s);

	srunner_run_all(sr, CK_NORMAL);
	number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);
	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
