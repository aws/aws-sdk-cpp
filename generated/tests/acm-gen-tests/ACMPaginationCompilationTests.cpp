/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ACM pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/acm/ACMClientPagination.h>
#include <aws/acm/ACMPaginationBase.h>
#include <aws/acm/model/ListCertificatesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ACMPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ACMPaginationCompilationTest, ACMPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
