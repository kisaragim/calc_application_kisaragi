#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../../ソース ファイル/Input_number.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../../ソース ファイル/Input_number.c");

EXTERN_C_LINKAGE void TestSuite_Input_number_c_9f5a5149_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_Input_number_c_9f5a5149_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_Input_number_c_9f5a5149);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_Input_number_c_9f5a5149_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_Input_number_c_9f5a5149_testSuiteTearDown);
CPPTEST_TEST_DS(TestSuite_Input_number_c_9f5a5149_test_case, CPPTEST_DS("check"));
CPPTEST_TEST_DS(TestSuite_Input_number_c_9f5a5149_delete, CPPTEST_DS("delete"));
CPPTEST_TEST_DS(TestSuite_Input_number_c_9f5a5149_input, CPPTEST_DS("input"));
CPPTEST_TEST_SUITE_END();
        

void TestSuite_Input_number_c_9f5a5149_test_case(void);
void TestSuite_Input_number_c_9f5a5149_delete(void);
void TestSuite_Input_number_c_9f5a5149_input(void);
void CppTest_StubCallback_TestSuite_Input_number_c_9f5a5149_input_1_Check_number(CppTest_StubCallInfo* stubCallInfo, int* __return, char * calc);//CPPTEST_TEST_CASE_CALLBACK void TestSuite_Input_number_c_9f5a5149_input(void);
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_Input_number_c_9f5a5149);

void TestSuite_Input_number_c_9f5a5149_testSuiteSetUp(void);
void TestSuite_Input_number_c_9f5a5149_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_Input_number_c_9f5a5149_testSuiteTearDown(void);
void TestSuite_Input_number_c_9f5a5149_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_Input_number_c_9f5a5149_setUp(void);
void TestSuite_Input_number_c_9f5a5149_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_Input_number_c_9f5a5149_tearDown(void);
void TestSuite_Input_number_c_9f5a5149_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}



/* CPPTEST_TEST_CASE_BEGIN test_case */
/* CPPTEST_TEST_CASE_CONTEXT int Check_number(char *) */
void TestSuite_Input_number_c_9f5a5149_test_case()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8"?><testcase>
<metadata/>
<steps>
<step id="DataSourceStep" uid="0" version="2">
<ext>true</ext>
<extname>check</extname>
</step>
<step id="MultiVariableStep" uid="1" version="1">
<step id="VariableStep" version="1">
<name>_calc</name>
<type>char *</type>
<value>CPPTEST_DS_GET_CSTR("[IN]calc")</value>
</step>
<step id="VariableStep" version="1">
<name>_return</name>
<type>int</type>
<value/>
</step>
</step>
<step id="CallStep" uid="2" version="1">
<comment>Tested function call</comment>
<return>_return</return>
<name>Check_number</name>
<params>_calc</params>
</step>
<step id="AssertionsStep" uid="3" version="1">
<step id="AssertionStep" uid="3.0" version="1">
<type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
<P1>CPPTEST_DS_GET_INTEGER("[OUT]return")</P1>
<P2>_return</P2>
<P3/>
<P4/>
</step>
</step>
</steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
char * _calc = CPPTEST_DS_GET_CSTR("[IN]calc");
int _return;
/* CPPTEST_TC_STEP_UID:2 */
_return = Check_number(_calc);
/* CPPTEST_TC_STEP_UID:3.0 */
//CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("[OUT]return"), _return);
}
/* CPPTEST_TEST_CASE_END test_case */

/* CPPTEST_TEST_CASE_BEGIN delete */
/* CPPTEST_TEST_CASE_CONTEXT char Delete_space(char *) */
void TestSuite_Input_number_c_9f5a5149_delete()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8"?><testcase>
<metadata/>
<steps>
<step id="DataSourceStep" uid="0" version="2">
<ext>true</ext>
<extname>delete</extname>
</step>
<step id="MultiVariableStep" uid="1" version="1">
<step id="VariableStep" version="1">
<name>_calc</name>
<type>char *</type>
<value>CPPTEST_DS_GET_CSTR("[IN]calc")</value>
</step>
<step id="VariableStep" version="1">
<name>_return</name>
<type>char</type>
<value>CPPTEST_DS_GET_CSTR("[OUT]calc")</value>
</step>
</step>
<step id="CallStep" uid="2" version="1">
<comment>Tested function call</comment>
<return>_return</return>
<name>Delete_space</name>
<params>_calc</params>
</step>
<step id="AssertionsStep" uid="3" version="1">
<step id="AssertionStep" uid="3.0" version="1">
<type>CPPTEST_ASSERT_CSTR_EQUAL</type>
<P1>CPPTEST_DS_GET_CSTR("[IN]calc")</P1>
<P2>_calc</P2>
<P3/>
<P4/>
</step>
<step id="AssertionStep" uid="3.1" version="1">
<type>CPPTEST_ASSERT_CSTR_EQUAL</type>
<P1>CPPTEST_DS_GET_CSTR("[OUT]calc")</P1>
<P2>_calc</P2>
<P3/>
<P4/>
</step>
</step>
</steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
char * _calc = CPPTEST_DS_GET_CSTR("[IN]calc");
char _return = CPPTEST_DS_GET_CSTR("[OUT]calc");
/* CPPTEST_TC_STEP_UID:2 */
_return = Delete_space(_calc);
/* CPPTEST_TC_STEP_UID:3.0 */
CPPTEST_ASSERT_CSTR_EQUAL(CPPTEST_DS_GET_CSTR("[IN]calc"), _calc);
/* CPPTEST_TC_STEP_UID:3.1 */
CPPTEST_ASSERT_CSTR_EQUAL(CPPTEST_DS_GET_CSTR("[OUT]calc"), _calc);
}
/* CPPTEST_TEST_CASE_END delete */


/* CPPTEST_TEST_CASE_BEGIN input */
/* CPPTEST_TEST_CASE_CALLBACKS_BEGIN */
void CppTest_StubCallback_TestSuite_Input_number_c_9f5a5149_input_1_Check_number(CppTest_StubCallInfo* stubCallInfo, int* __return, char * calc)
{
   /* CPPTEST_TC_STEP_UID:1.0 */
   *__return = CPPTEST_DS_GET_INTEGER("[stub]Check_number");
}
/* CPPTEST_TEST_CASE_CALLBACKS_END */
/* CPPTEST_TEST_CASE_CONTEXT void Input_number(void) */
void TestSuite_Input_number_c_9f5a5149_input()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8"?><testcase>
<metadata/>
<steps>
<step id="DataSourceStep" uid="0" version="2">
<ext>true</ext>
<extname>input</extname>
</step>
<step id="StubConfigurationStep" uid="1" version="1">
<step id="StubConfigurationEntryStep" uid="1.0" version="1">
<action>SET VALUE</action>
<P1>*__return</P1>
<P2>CPPTEST_DS_GET_INTEGER("[stub]Check_number")</P2>
<P3/>
<P4/>
</step>
<function>Check_number</function>
<code><![CDATA[//To access current call number use: 'stubCallInfo->callNo']]></code>
<mode>table</mode>
</step>
<step id="CallStep" uid="2" version="1">
<comment>Tested function call</comment>
<return/>
<name>Input_number</name>
<params/>
</step>
<step id="MultiVariableStep" uid="3" version="1">
<step id="VariableStep" version="1">
<name>_calc</name>
<type>char</type>
<value>CPPTEST_DS_GET_CSTR("[IN]calc")</value>
</step>
<step id="VariableStep" version="1">
<name>_varidate</name>
<type>int</type>
<value>CPPTEST_DS_GET_INTEGER("[stub]Check_number")</value>
</step>
</step>
<step id="AssertionsStep" uid="4" version="1">
<step id="AssertionStep" uid="4.0" version="1">
<type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
<P1>CPPTEST_DS_GET_INTEGER("[IN]validate")</P1>
<P2>_varidate</P2>
<P3/>
<P4/>
</step>
</step>
</steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
CPPTEST_REGISTER_STUB_CALLBACK("Check_number", &CppTest_StubCallback_TestSuite_Input_number_c_9f5a5149_input_1_Check_number);
/* CPPTEST_TC_STEP_UID:2 */
Input_number();
char _calc = CPPTEST_DS_GET_CSTR("[IN]calc");
int _varidate = CPPTEST_DS_GET_INTEGER("[stub]Check_number");
/* CPPTEST_TC_STEP_UID:4.0 */
CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("[IN]validate"), _varidate);
}
/* CPPTEST_TEST_CASE_END input */
