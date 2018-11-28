#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../../ソース ファイル/calc.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../../ソース ファイル/calc.c");

EXTERN_C_LINKAGE void TestSuite_calc_c_c315b8dd_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_calc_c_c315b8dd_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_calc_c_c315b8dd);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_calc_c_c315b8dd_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_calc_c_c315b8dd_testSuiteTearDown);
CPPTEST_TEST_DS(TestSuite_calc_c_c315b8dd_calculation, CPPTEST_DS("calc"));
CPPTEST_TEST_SUITE_END();
        

void TestSuite_calc_c_c315b8dd_calculation(void);
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_calc_c_c315b8dd);

void TestSuite_calc_c_c315b8dd_testSuiteSetUp(void);
void TestSuite_calc_c_c315b8dd_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_calc_c_c315b8dd_testSuiteTearDown(void);
void TestSuite_calc_c_c315b8dd_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_calc_c_c315b8dd_setUp(void);
void TestSuite_calc_c_c315b8dd_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_calc_c_c315b8dd_tearDown(void);
void TestSuite_calc_c_c315b8dd_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN calculation */
/* CPPTEST_TEST_CASE_CONTEXT void calculation(char *) */
void TestSuite_calc_c_c315b8dd_calculation()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8"?><testcase>
<metadata/>
<steps>
<step id="DataSourceStep" uid="0" version="2">
<ext>true</ext>
<extname>calc</extname>
</step>
<step id="MultiVariableStep" uid="1" version="1">
<step id="VariableStep" version="1">
<name>_calc</name>
<type>char *</type>
<value>CPPTEST_DS_GET_CSTR("[IN]calc")</value>
</step>
<step id="VariableStep" version="1">
<name>_sum</name>
<type>long double</type>
<value>CPPTEST_DS_GET_INTEGER("[OUT]sum")</value>
</step>
</step>
<step id="CallStep" uid="2" version="1">
<comment>Tested function call</comment>
<return/>
<name>calculation</name>
<params>_calc</params>
</step>
<step id="AssertionsStep" uid="3" version="1">
<step id="AssertionStep" uid="3.0" version="1">
<type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
<P1>CPPTEST_DS_GET_INTEGER("[OUT]sum")</P1>
<P2>_sum</P2>
<P3/>
<P4/>
</step>
</step>
</steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
char * _calc = CPPTEST_DS_GET_CSTR("[IN]calc");
long double _sum = CPPTEST_DS_GET_INTEGER("[OUT]sum");
/* CPPTEST_TC_STEP_UID:2 */
calculation(_calc);
/* CPPTEST_TC_STEP_UID:3.0 */
CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("[OUT]sum"), _sum);
}
/* CPPTEST_TEST_CASE_END calculation */
