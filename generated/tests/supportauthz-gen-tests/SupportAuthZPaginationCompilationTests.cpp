/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SupportAuthZ pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/supportauthz/SupportAuthZClientPagination.h>
#include <aws/supportauthz/SupportAuthZPaginationBase.h>
#include <aws/supportauthz/model/ListSupportPermitRequestsPaginationTraits.h>
#include <aws/supportauthz/model/ListActionsPaginationTraits.h>
#include <aws/supportauthz/model/ListSupportPermitsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SupportAuthZPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SupportAuthZPaginationCompilationTest, SupportAuthZPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
