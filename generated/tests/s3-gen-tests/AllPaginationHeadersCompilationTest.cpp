/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ALL pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/s3/S3ClientPagination.h>
#include <aws/s3/model/pagination/ListBucketsPaginationTraits.h>
#include <aws/s3/S3ClientPagination.h>
#include <aws/s3/model/pagination/ListDirectoryBucketsPaginationTraits.h>
#include <aws/s3/S3ClientPagination.h>
#include <aws/s3/model/pagination/ListObjectsV2PaginationTraits.h>
#include <aws/s3/S3ClientPagination.h>
#include <aws/s3/model/pagination/ListPartsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AllPaginationHeadersCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AllPaginationHeadersCompilationTest, AllPaginationHeadersCompile)
{
    // Test passes if compilation succeeds
    SUCCEED();
}
