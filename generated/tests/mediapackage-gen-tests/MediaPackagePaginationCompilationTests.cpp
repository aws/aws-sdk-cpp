/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MediaPackage pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/mediapackage/MediaPackageClientPagination.h>
#include <aws/mediapackage/MediaPackagePaginationBase.h>
#include <aws/mediapackage/model/ListHarvestJobsPaginationTraits.h>
#include <aws/mediapackage/model/ListOriginEndpointsPaginationTraits.h>
#include <aws/mediapackage/model/ListChannelsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MediaPackagePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MediaPackagePaginationCompilationTest, MediaPackagePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
