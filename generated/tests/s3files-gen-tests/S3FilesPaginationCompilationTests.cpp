/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for S3Files pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/s3files/S3FilesClientPagination.h>
#include <aws/s3files/S3FilesPaginationBase.h>
#include <aws/s3files/model/ListAccessPointsPaginationTraits.h>
#include <aws/s3files/model/ListFileSystemsPaginationTraits.h>
#include <aws/s3files/model/ListMountTargetsPaginationTraits.h>
#include <aws/s3files/model/ListTagsForResourcePaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class S3FilesPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(S3FilesPaginationCompilationTest, S3FilesPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
