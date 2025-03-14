// NOTE - eventually this file will be automatically updated using a Perl script that understand
// the naming of test case files, functions, and namespaces.

#ifndef _TESTCASES_H
#define _TESTCASES_H

#ifdef __cplusplus
extern "C" {
#endif

// declare C good and bad functions
#ifndef OMITGOOD
	/* BEGIN-AUTOGENERATED-C-GOOD-FUNCTION-DECLARATIONS */
	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_18_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_01_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_12_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_16_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_53_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_66_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_14_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_15_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_06_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_31_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_41_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_04_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_07_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_44_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_45_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_32_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_67_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_03_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_05_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_64_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_02_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_08_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_65_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_63_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_68_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_34_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_17_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_51_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_52_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_13_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_09_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_10_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_11_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_54_good();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-DECLARATIONS */
#endif // OMITGOOD


#ifndef OMITBAD
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-DECLARATIONS */
	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_18_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_01_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_12_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_16_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_53_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_66_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_14_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_15_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_06_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_31_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_41_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_04_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_07_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_44_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_45_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_32_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_67_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_03_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_05_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_64_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_02_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_08_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_65_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_63_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_68_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_34_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_17_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_51_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_52_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_13_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_09_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_10_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_11_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_54_bad();

	/* END-AUTOGENERATED-C-BAD-FUNCTION-DECLARATIONS */
#endif // OMITBAD

#ifdef __cplusplus
} // end extern "C"
#endif

#ifdef __cplusplus
// declare C++ namespaces and good and bad functions

#ifndef OMITGOOD
	/* BEGIN-AUTOGENERATED-CPP-GOOD-FUNCTION-DECLARATIONS */

	/* END-AUTOGENERATED-CPP-GOOD-FUNCTION-DECLARATIONS */
#endif // OMITGOOD


#ifndef OMITBAD
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-DECLARATIONS */

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-DECLARATIONS */
#endif // OMITBAD


#endif // __cplusplus


#endif //  _TESTCASES_H
