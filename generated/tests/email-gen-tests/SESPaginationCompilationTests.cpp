/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SES pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/email/SESClientPagination.h>
#include <aws/email/SESPaginationBase.h>
#include <aws/email/model/ListIdentitiesPaginationTraits.h>
#include <aws/email/model/ListCustomVerificationEmailTemplatesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SESPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SESPaginationCompilationTest, SESPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
