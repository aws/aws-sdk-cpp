/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MediaPackageVod pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/mediapackage-vod/MediaPackageVodClientPagination.h>
#include <aws/mediapackage-vod/MediaPackageVodPaginationBase.h>
#include <aws/mediapackage-vod/model/ListPackagingGroupsPaginationTraits.h>
#include <aws/mediapackage-vod/model/ListPackagingConfigurationsPaginationTraits.h>
#include <aws/mediapackage-vod/model/ListAssetsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MediaPackageVodPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MediaPackageVodPaginationCompilationTest, MediaPackageVodPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
