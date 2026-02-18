/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SupportApp pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/support-app/SupportAppClientPagination.h>
#include <aws/support-app/SupportAppPaginationBase.h>
#include <aws/support-app/model/ListSlackChannelConfigurationsPaginationTraits.h>
#include <aws/support-app/model/ListSlackWorkspaceConfigurationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SupportAppPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SupportAppPaginationCompilationTest, SupportAppPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
