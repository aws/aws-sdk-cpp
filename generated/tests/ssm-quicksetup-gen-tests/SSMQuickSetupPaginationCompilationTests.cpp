/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SSMQuickSetup pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/ssm-quicksetup/SSMQuickSetupClientPagination.h>
#include <aws/ssm-quicksetup/SSMQuickSetupPaginationBase.h>
#include <aws/ssm-quicksetup/model/ListConfigurationManagersPaginationTraits.h>
#include <aws/ssm-quicksetup/model/ListConfigurationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SSMQuickSetupPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SSMQuickSetupPaginationCompilationTest, SSMQuickSetupPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
