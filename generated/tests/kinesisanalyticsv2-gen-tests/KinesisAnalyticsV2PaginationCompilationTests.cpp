/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for KinesisAnalyticsV2 pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2ClientPagination.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2PaginationBase.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationSnapshotsPaginationTraits.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationVersionsPaginationTraits.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationOperationsPaginationTraits.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class KinesisAnalyticsV2PaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(KinesisAnalyticsV2PaginationCompilationTest, KinesisAnalyticsV2PaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
