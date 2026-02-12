/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for S3Outposts pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/s3outposts/S3OutpostsClientPagination.h>
#include <aws/s3outposts/S3OutpostsPaginationBase.h>
#include <aws/s3outposts/model/ListSharedEndpointsPaginationTraits.h>
#include <aws/s3outposts/model/ListEndpointsPaginationTraits.h>
#include <aws/s3outposts/model/ListOutpostsWithS3PaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class S3OutpostsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(S3OutpostsPaginationCompilationTest, S3OutpostsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
