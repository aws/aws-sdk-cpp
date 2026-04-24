/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SecurityLake pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/securitylake/SecurityLakeClientPagination.h>
#include <aws/securitylake/SecurityLakePaginationBase.h>
#include <aws/securitylake/model/ListLogSourcesPaginationTraits.h>
#include <aws/securitylake/model/ListSubscribersPaginationTraits.h>
#include <aws/securitylake/model/ListDataLakeExceptionsPaginationTraits.h>
#include <aws/securitylake/model/GetDataLakeSourcesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SecurityLakePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SecurityLakePaginationCompilationTest, SecurityLakePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
