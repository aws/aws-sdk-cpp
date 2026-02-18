/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ControlTower pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/controltower/ControlTowerClientPagination.h>
#include <aws/controltower/ControlTowerPaginationBase.h>
#include <aws/controltower/model/ListControlOperationsPaginationTraits.h>
#include <aws/controltower/model/ListBaselinesPaginationTraits.h>
#include <aws/controltower/model/ListLandingZoneOperationsPaginationTraits.h>
#include <aws/controltower/model/ListEnabledControlsPaginationTraits.h>
#include <aws/controltower/model/ListEnabledBaselinesPaginationTraits.h>
#include <aws/controltower/model/ListLandingZonesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ControlTowerPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ControlTowerPaginationCompilationTest, ControlTowerPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
