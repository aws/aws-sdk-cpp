/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for IoTSecureTunneling pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/iotsecuretunneling/IoTSecureTunnelingClientPagination.h>
#include <aws/iotsecuretunneling/IoTSecureTunnelingPaginationBase.h>
#include <aws/iotsecuretunneling/model/ListTunnelsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class IoTSecureTunnelingPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(IoTSecureTunnelingPaginationCompilationTest, IoTSecureTunnelingPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
