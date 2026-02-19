/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for S3Crt pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/s3-crt/S3CrtClientPagination.h>
#include <aws/s3-crt/S3CrtPaginationBase.h>
#include <aws/s3-crt/model/ListBucketsPaginationTraits.h>
#include <aws/s3-crt/model/ListDirectoryBucketsPaginationTraits.h>
#include <aws/s3-crt/model/ListObjectsV2PaginationTraits.h>
#include <aws/s3-crt/model/ListPartsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class S3CrtPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(S3CrtPaginationCompilationTest, S3CrtPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
