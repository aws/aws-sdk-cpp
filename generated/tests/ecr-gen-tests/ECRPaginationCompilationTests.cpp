/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ECR pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/ecr/ECRClientPagination.h>
#include <aws/ecr/ECRPaginationBase.h>
#include <aws/ecr/model/GetLifecyclePolicyPreviewPaginationTraits.h>
#include <aws/ecr/model/DescribeImageScanFindingsPaginationTraits.h>
#include <aws/ecr/model/DescribeRepositoryCreationTemplatesPaginationTraits.h>
#include <aws/ecr/model/DescribeRepositoriesPaginationTraits.h>
#include <aws/ecr/model/DescribeImagesPaginationTraits.h>
#include <aws/ecr/model/DescribePullThroughCacheRulesPaginationTraits.h>
#include <aws/ecr/model/ListImagesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ECRPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ECRPaginationCompilationTest, ECRPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
