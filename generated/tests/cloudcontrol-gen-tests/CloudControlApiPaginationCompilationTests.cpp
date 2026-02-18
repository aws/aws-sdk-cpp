/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CloudControlApi pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/cloudcontrol/CloudControlApiClientPagination.h>
#include <aws/cloudcontrol/CloudControlApiPaginationBase.h>
#include <aws/cloudcontrol/model/ListResourceRequestsPaginationTraits.h>
#include <aws/cloudcontrol/model/ListResourcesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CloudControlApiPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CloudControlApiPaginationCompilationTest, CloudControlApiPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
