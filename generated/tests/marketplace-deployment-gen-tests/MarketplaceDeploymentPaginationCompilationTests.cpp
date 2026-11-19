/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MarketplaceDeployment pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/marketplace-deployment/MarketplaceDeploymentClientPagination.h>
#include <aws/marketplace-deployment/MarketplaceDeploymentPaginationBase.h>
#include <aws/marketplace-deployment/model/ListDeploymentConfigurationJobsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MarketplaceDeploymentPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MarketplaceDeploymentPaginationCompilationTest, MarketplaceDeploymentPaginationHeadersCompile)
{
      // Test passes if compilation succeeds
      SUCCEED();
}
