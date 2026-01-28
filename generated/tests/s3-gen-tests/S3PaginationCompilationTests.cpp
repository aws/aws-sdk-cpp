/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for S3 pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/s3/S3ClientPagination.h>
#include <aws/s3/S3PaginationBase.h>
#include <aws/s3/model/ListObjectsV2PaginationTraits.h>
#include <aws/s3/model/ListDirectoryBucketsPaginationTraits.h>
#include <aws/s3/model/ListPartsPaginationTraits.h>
#include <aws/s3/model/ListBucketsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class S3PaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(S3PaginationCompilationTest, S3PaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
