/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CloudHSMV2 pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/cloudhsmv2/CloudHSMV2ClientPagination.h>
#include <aws/cloudhsmv2/CloudHSMV2PaginationBase.h>
#include <aws/cloudhsmv2/model/DescribeBackupsPaginationTraits.h>
#include <aws/cloudhsmv2/model/DescribeClustersPaginationTraits.h>
#include <aws/cloudhsmv2/model/ListTagsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CloudHSMV2PaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CloudHSMV2PaginationCompilationTest, CloudHSMV2PaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
