/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MediaTailor pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/mediatailor/MediaTailorClientPagination.h>
#include <aws/mediatailor/MediaTailorPaginationBase.h>
#include <aws/mediatailor/model/ListPlaybackConfigurationsPaginationTraits.h>
#include <aws/mediatailor/model/ListLiveSourcesPaginationTraits.h>
#include <aws/mediatailor/model/ListPrefetchSchedulesPaginationTraits.h>
#include <aws/mediatailor/model/GetChannelSchedulePaginationTraits.h>
#include <aws/mediatailor/model/ListSourceLocationsPaginationTraits.h>
#include <aws/mediatailor/model/ListChannelsPaginationTraits.h>
#include <aws/mediatailor/model/ListVodSourcesPaginationTraits.h>
#include <aws/mediatailor/model/ListAlertsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MediaTailorPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MediaTailorPaginationCompilationTest, MediaTailorPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
