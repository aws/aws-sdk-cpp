/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for BCMDataExports pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/bcm-data-exports/BCMDataExportsClientPagination.h>
#include <aws/bcm-data-exports/BCMDataExportsPaginationBase.h>
#include <aws/bcm-data-exports/model/ListExportsPaginationTraits.h>
#include <aws/bcm-data-exports/model/ListExecutionsPaginationTraits.h>
#include <aws/bcm-data-exports/model/ListTablesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class BCMDataExportsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(BCMDataExportsPaginationCompilationTest, BCMDataExportsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
