/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ARCZonalShift pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/arc-zonal-shift/ARCZonalShiftClientPagination.h>
#include <aws/arc-zonal-shift/ARCZonalShiftPaginationBase.h>
#include <aws/arc-zonal-shift/model/ListZonalShiftsPaginationTraits.h>
#include <aws/arc-zonal-shift/model/ListManagedResourcesPaginationTraits.h>
#include <aws/arc-zonal-shift/model/ListAutoshiftsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ARCZonalShiftPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ARCZonalShiftPaginationCompilationTest, ARCZonalShiftPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
