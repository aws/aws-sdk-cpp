/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for mediapackagev2 pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/mediapackagev2/Mediapackagev2ClientPagination.h>
#include <aws/mediapackagev2/Mediapackagev2PaginationBase.h>
#include <aws/mediapackagev2/model/ListChannelGroupsPaginationTraits.h>
#include <aws/mediapackagev2/model/ListChannelsPaginationTraits.h>
#include <aws/mediapackagev2/model/ListHarvestJobsPaginationTraits.h>
#include <aws/mediapackagev2/model/ListOriginEndpointsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class mediapackagev2PaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(mediapackagev2PaginationCompilationTest, mediapackagev2PaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
