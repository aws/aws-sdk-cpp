/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ConnectHealth pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/connecthealth/ConnectHealthClientPagination.h>
#include <aws/connecthealth/ConnectHealthPaginationBase.h>
#include <aws/connecthealth/model/ListSubscriptionsPaginationTraits.h>
#include <aws/connecthealth/model/ListDomainsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ConnectHealthPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ConnectHealthPaginationCompilationTest, ConnectHealthPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
