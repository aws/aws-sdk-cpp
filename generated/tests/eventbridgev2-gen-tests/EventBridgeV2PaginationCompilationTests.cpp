/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for EventBridgeV2 pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/eventbridgev2/EventBridgeV2ClientPagination.h>
#include <aws/eventbridgev2/EventBridgeV2PaginationBase.h>
#include <aws/eventbridgev2/model/ListResourcePoliciesPaginationTraits.h>
#include <aws/eventbridgev2/model/ListSubscribersPaginationTraits.h>
#include <aws/eventbridgev2/model/ListEventBusesPaginationTraits.h>
#include <aws/eventbridgev2/model/ListEventSourcesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class EventBridgeV2PaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(EventBridgeV2PaginationCompilationTest, EventBridgeV2PaginationHeadersCompile)
{
      // Test passes if compilation succeeds
      SUCCEED();
}
