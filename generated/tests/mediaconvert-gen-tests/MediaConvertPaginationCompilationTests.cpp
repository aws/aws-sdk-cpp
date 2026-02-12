/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MediaConvert pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/mediaconvert/MediaConvertClientPagination.h>
#include <aws/mediaconvert/MediaConvertPaginationBase.h>
#include <aws/mediaconvert/model/ListPresetsPaginationTraits.h>
#include <aws/mediaconvert/model/ListJobTemplatesPaginationTraits.h>
#include <aws/mediaconvert/model/ListVersionsPaginationTraits.h>
#include <aws/mediaconvert/model/SearchJobsPaginationTraits.h>
#include <aws/mediaconvert/model/ListQueuesPaginationTraits.h>
#include <aws/mediaconvert/model/ListJobsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MediaConvertPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MediaConvertPaginationCompilationTest, MediaConvertPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
