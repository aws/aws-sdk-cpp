/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for KinesisVideoArchivedMedia pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaClientPagination.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaPaginationBase.h>
#include <aws/kinesis-video-archived-media/model/ListFragmentsPaginationTraits.h>
#include <aws/kinesis-video-archived-media/model/GetImagesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class KinesisVideoArchivedMediaPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(KinesisVideoArchivedMediaPaginationCompilationTest, KinesisVideoArchivedMediaPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
