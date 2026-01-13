/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for S3Tables pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/s3tables/S3TablesClientPagination.h>
#include <aws/s3tables/S3TablesPaginationBase.h>
#include <aws/s3tables/model/ListTableBucketsPaginationTraits.h>
#include <aws/s3tables/model/ListTablesPaginationTraits.h>
#include <aws/s3tables/model/ListNamespacesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class S3TablesPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(S3TablesPaginationCompilationTest, S3TablesPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
