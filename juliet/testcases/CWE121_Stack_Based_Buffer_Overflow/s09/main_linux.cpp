/* NOTE - eventually this file will be automatically updated using a Perl script that understand
 * the naming of test case files, functions, and namespaces.
 */

#include <time.h>   /* for time() */
#include <stdlib.h> /* for srand() */

#include "std_testcase.h"
#include "testcases.h"

int main(int argc, char * argv[]) {

	/* seed randomness */

	srand( (unsigned)time(NULL) );

	globalArgc = argc;
	globalArgv = argv;

#ifndef OMITGOOD

	/* Calling C good functions */
	/* BEGIN-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */
	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_16_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_16_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_68_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_68_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_51_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_51_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_14_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_14_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_34_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_34_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_61_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_61_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_11_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_11_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_13_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_13_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_52_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_52_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_22_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_22_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_67_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_67_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_06_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_06_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_65_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_65_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_64_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_64_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_42_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_42_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_53_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_53_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_31_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_31_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_08_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_08_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_63_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_63_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_01_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_05_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_05_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_17_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_17_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_44_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_44_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_32_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_32_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_02_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_02_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_12_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_12_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_21_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_21_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_15_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_15_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_03_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_03_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_66_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_66_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_54_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_54_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_09_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_09_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_07_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_07_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_41_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_41_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_10_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_10_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_04_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_04_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_45_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_45_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_18_good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_18_good();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */





#ifdef __cplusplus
	/* Calling C++ good functions */
	/* BEGIN-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */
	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_33::good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_33::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_83::good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_83::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_81::good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_81::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_74::good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_74::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_72::good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_72::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_82::good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_82::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_73::good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_73::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_83::good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_83::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_62::good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_62::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_84::good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_84::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_43::good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_43::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_84::good();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_84::good();

	/* END-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */

#endif /* __cplusplus */

#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_16_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_16_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_68_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_68_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_51_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_51_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_14_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_14_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_34_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_34_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_61_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_61_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_11_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_11_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_13_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_13_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_52_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_52_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_22_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_22_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_67_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_67_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_06_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_06_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_65_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_65_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_64_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_64_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_42_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_42_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_53_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_53_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_31_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_31_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_08_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_08_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_63_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_63_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_01_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_05_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_05_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_17_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_17_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_44_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_44_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_32_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_32_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_02_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_02_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_12_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_12_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_21_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_21_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_15_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_15_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_03_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_03_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_66_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_66_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_54_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_54_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_09_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_09_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_07_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_07_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_41_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_41_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_10_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_10_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_04_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_04_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_45_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_45_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_18_bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_18_bad();

	/* END-AUTOGENERATED-C-BAD-FUNCTION-CALLS */




	
#ifdef __cplusplus
	/* Calling C++ bad functions */
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_33::bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_33::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_83::bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_83::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_81::bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_81::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_74::bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_74::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_72::bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_72::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_82::bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_82::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_73::bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_73::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_83::bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_83::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_62::bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_62::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_84::bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_84::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_43::bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_43::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_84::bad();");
	CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_84::bad();

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	
#endif /* __cplusplus */

#endif /* OMITBAD */

	return 0;

} 
