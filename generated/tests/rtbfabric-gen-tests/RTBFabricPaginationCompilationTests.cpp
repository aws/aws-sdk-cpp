/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for RTBFabric pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/rtbfabric/RTBFabricClientPagination.h>
#include <aws/rtbfabric/RTBFabricPaginationBase.h>
#include <aws/rtbfabric/model/ListRequesterGatewaysPaginationTraits.h>
#include <aws/rtbfabric/model/ListResponderGatewaysPaginationTraits.h>
#include <aws/rtbfabric/model/ListLinksPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class RTBFabricPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(RTBFabricPaginationCompilationTest, RTBFabricPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
