/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MediaStoreData pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/mediastore-data/MediaStoreDataClientPagination.h>
#include <aws/mediastore-data/MediaStoreDataPaginationBase.h>
#include <aws/mediastore-data/model/ListItemsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MediaStoreDataPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MediaStoreDataPaginationCompilationTest, MediaStoreDataPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
