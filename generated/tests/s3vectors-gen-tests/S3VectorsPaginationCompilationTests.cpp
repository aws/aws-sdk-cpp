/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for S3Vectors pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/s3vectors/S3VectorsClientPagination.h>
#include <aws/s3vectors/S3VectorsPaginationBase.h>
#include <aws/s3vectors/model/ListVectorBucketsPaginationTraits.h>
#include <aws/s3vectors/model/ListVectorsPaginationTraits.h>
#include <aws/s3vectors/model/ListIndexesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class S3VectorsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(S3VectorsPaginationCompilationTest, S3VectorsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
