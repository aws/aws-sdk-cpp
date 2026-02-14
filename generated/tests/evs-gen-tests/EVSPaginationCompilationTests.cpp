/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for EVS pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/evs/EVSClientPagination.h>
#include <aws/evs/EVSPaginationBase.h>
#include <aws/evs/model/ListEnvironmentHostsPaginationTraits.h>
#include <aws/evs/model/ListEnvironmentVlansPaginationTraits.h>
#include <aws/evs/model/ListEnvironmentsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class EVSPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(EVSPaginationCompilationTest, EVSPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
