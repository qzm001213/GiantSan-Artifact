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
	void CWE690_NULL_Deref_From_Return__w32_wfopen_54_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_22_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_45_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_63_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_64_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_67_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_32_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_68_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_22_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_10_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_01_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_05_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_15_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_44_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_01_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_12_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_01_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_07_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_13_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_61_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_41_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_14_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_09_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_61_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_07_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_53_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_22_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_18_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_53_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_61_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_34_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_68_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_34_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_10_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_13_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_11_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_18_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_63_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_02_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_05_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_18_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_03_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_42_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_65_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_65_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_41_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_45_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_17_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_51_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_07_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_34_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_04_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_03_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_42_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_18_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_65_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_14_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_12_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_44_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_11_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_16_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_44_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_17_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_65_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_41_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_68_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_12_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_06_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_12_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_17_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_05_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_09_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_44_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_02_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_03_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_66_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_53_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_13_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_51_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_14_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_41_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_54_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_53_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_51_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_32_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_31_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_14_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_11_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_41_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_44_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_44_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_05_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_16_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_63_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_61_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_02_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_14_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_61_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_52_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_68_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_06_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_21_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_08_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_21_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_13_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_07_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_01_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_08_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_31_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_09_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_66_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_01_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_52_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_51_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_63_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_06_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_02_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_45_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_42_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_64_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_42_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_32_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_07_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_04_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_51_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_02_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_42_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_34_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_67_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_31_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_64_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_22_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_21_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_67_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_10_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_22_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_07_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_12_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_15_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_15_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_15_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_65_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_02_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_09_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_16_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_31_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_21_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_34_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_54_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_63_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_08_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_67_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_17_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_51_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_34_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_06_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_06_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_34_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_12_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_08_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_61_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_15_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_17_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_52_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_16_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_10_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_01_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_06_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_16_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_08_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_03_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_22_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_10_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_17_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_52_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_67_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_13_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_54_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_06_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_42_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_17_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_03_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_08_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_07_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_12_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_54_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_11_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_16_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_16_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_03_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_65_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_52_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_01_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_13_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_02_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_66_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_34_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_66_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_54_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_12_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_68_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_03_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_42_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_09_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_05_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_03_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_21_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_65_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_45_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_04_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_02_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_52_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_45_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_07_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_04_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_64_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_32_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_32_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_10_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_18_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_63_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_51_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_32_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_11_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_67_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_68_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_53_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_41_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_66_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_68_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_54_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_67_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_45_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_11_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_14_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_14_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_04_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_15_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_13_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_09_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_22_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_09_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_01_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_08_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_45_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_15_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_45_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_66_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_52_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_52_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_53_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_16_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_66_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_05_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_31_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_32_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_05_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_11_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_53_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_31_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_42_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_44_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_53_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_21_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_04_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_21_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_64_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_18_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_61_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_11_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_15_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_67_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_44_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_04_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_41_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_61_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_31_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_10_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_54_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_63_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_13_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_18_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_10_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_22_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_21_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_04_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_64_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_06_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_41_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_05_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_51_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_68_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_66_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_09_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_64_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_65_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_31_good();

	void CWE690_NULL_Deref_From_Return__struct_realloc_08_good();

	void CWE690_NULL_Deref_From_Return__struct_calloc_17_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_32_good();

	void CWE690_NULL_Deref_From_Return__struct_malloc_63_good();

	void CWE690_NULL_Deref_From_Return__long_realloc_14_good();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_64_good();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_18_good();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-DECLARATIONS */
#endif // OMITGOOD


#ifndef OMITBAD
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-DECLARATIONS */
	void CWE690_NULL_Deref_From_Return__w32_wfopen_54_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_22_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_45_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_63_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_64_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_67_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_32_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_68_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_22_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_10_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_01_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_05_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_15_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_44_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_01_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_12_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_01_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_07_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_13_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_61_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_41_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_14_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_09_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_61_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_07_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_53_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_22_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_18_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_53_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_61_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_34_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_68_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_34_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_10_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_13_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_11_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_18_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_63_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_02_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_05_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_18_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_03_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_42_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_65_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_65_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_41_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_45_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_17_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_51_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_07_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_34_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_04_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_03_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_42_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_18_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_65_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_14_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_12_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_44_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_11_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_16_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_44_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_17_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_65_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_41_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_68_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_12_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_06_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_12_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_17_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_05_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_09_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_44_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_02_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_03_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_66_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_53_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_13_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_51_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_14_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_41_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_54_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_53_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_51_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_32_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_31_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_14_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_11_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_41_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_44_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_44_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_05_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_16_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_63_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_61_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_02_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_14_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_61_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_52_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_68_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_06_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_21_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_08_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_21_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_13_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_07_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_01_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_08_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_31_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_09_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_66_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_01_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_52_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_51_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_63_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_06_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_02_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_45_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_42_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_64_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_42_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_32_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_07_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_04_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_51_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_02_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_42_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_34_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_67_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_31_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_64_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_22_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_21_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_67_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_10_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_22_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_07_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_12_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_15_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_15_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_15_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_65_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_02_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_09_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_16_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_31_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_21_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_34_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_54_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_63_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_08_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_67_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_17_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_51_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_34_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_06_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_06_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_34_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_12_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_08_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_61_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_15_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_17_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_52_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_16_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_10_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_01_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_06_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_16_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_08_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_03_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_22_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_10_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_17_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_52_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_67_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_13_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_54_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_06_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_42_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_17_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_03_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_08_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_07_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_12_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_54_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_11_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_16_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_16_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_03_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_65_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_52_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_01_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_13_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_02_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_66_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_34_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_66_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_54_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_12_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_68_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_03_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_42_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_09_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_05_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_03_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_21_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_65_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_45_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_04_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_02_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_52_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_45_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_07_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_04_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_64_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_32_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_32_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_10_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_18_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_63_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_51_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_32_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_11_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_67_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_68_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_53_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_41_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_66_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_68_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_54_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_67_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_45_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_11_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_14_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_14_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_04_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_15_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_13_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_09_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_22_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_09_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_01_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_08_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_45_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_15_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_45_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_66_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_52_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_52_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_53_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_16_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_66_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_05_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_31_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_32_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_05_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_11_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_53_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_31_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_42_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_44_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_53_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_21_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_04_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_21_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_64_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_18_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_61_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_11_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_15_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_67_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_44_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_04_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_41_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_61_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_31_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_10_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_54_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_63_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_13_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_18_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_10_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_22_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_21_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_04_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_64_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_06_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_41_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_05_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_51_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_68_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_malloc_66_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_realloc_09_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_64_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_65_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_31_bad();

	void CWE690_NULL_Deref_From_Return__struct_realloc_08_bad();

	void CWE690_NULL_Deref_From_Return__struct_calloc_17_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_32_bad();

	void CWE690_NULL_Deref_From_Return__struct_malloc_63_bad();

	void CWE690_NULL_Deref_From_Return__long_realloc_14_bad();

	void CWE690_NULL_Deref_From_Return__w32_wfopen_64_bad();

	void CWE690_NULL_Deref_From_Return__wchar_t_calloc_18_bad();

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
