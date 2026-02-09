/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ECRPublic pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/ecr-public/ECRPublicClientPagination.h>
#include <aws/ecr-public/ECRPublicPaginationBase.h>
#include <aws/ecr-public/model/DescribeImagesPaginationTraits.h>
#include <aws/ecr-public/model/DescribeRepositoriesPaginationTraits.h>
#include <aws/ecr-public/model/DescribeImageTagsPaginationTraits.h>
#include <aws/ecr-public/model/DescribeRegistriesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ECRPublicPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ECRPublicPaginationCompilationTest, ECRPublicPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
