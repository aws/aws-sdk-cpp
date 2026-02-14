/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for AppStream pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/appstream/AppStreamClientPagination.h>
#include <aws/appstream/AppStreamPaginationBase.h>
#include <aws/appstream/model/DescribeAppBlockBuilderAppBlockAssociationsPaginationTraits.h>
#include <aws/appstream/model/DescribeImagesPaginationTraits.h>
#include <aws/appstream/model/DescribeAppBlockBuildersPaginationTraits.h>
#include <aws/appstream/model/DescribeImagePermissionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AppStreamPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AppStreamPaginationCompilationTest, AppStreamPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
