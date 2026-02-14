/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MediaLive pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/medialive/MediaLiveClientPagination.h>
#include <aws/medialive/MediaLivePaginationBase.h>
#include <aws/medialive/model/ListNodesPaginationTraits.h>
#include <aws/medialive/model/ListInputDevicesPaginationTraits.h>
#include <aws/medialive/model/ListReservationsPaginationTraits.h>
#include <aws/medialive/model/DescribeSchedulePaginationTraits.h>
#include <aws/medialive/model/ListEventBridgeRuleTemplateGroupsPaginationTraits.h>
#include <aws/medialive/model/ListInputDeviceTransfersPaginationTraits.h>
#include <aws/medialive/model/ListSdiSourcesPaginationTraits.h>
#include <aws/medialive/model/ListEventBridgeRuleTemplatesPaginationTraits.h>
#include <aws/medialive/model/ListCloudWatchAlarmTemplateGroupsPaginationTraits.h>
#include <aws/medialive/model/ListCloudWatchAlarmTemplatesPaginationTraits.h>
#include <aws/medialive/model/ListClustersPaginationTraits.h>
#include <aws/medialive/model/ListAlertsPaginationTraits.h>
#include <aws/medialive/model/ListOfferingsPaginationTraits.h>
#include <aws/medialive/model/ListMultiplexAlertsPaginationTraits.h>
#include <aws/medialive/model/ListMultiplexProgramsPaginationTraits.h>
#include <aws/medialive/model/ListSignalMapsPaginationTraits.h>
#include <aws/medialive/model/ListChannelPlacementGroupsPaginationTraits.h>
#include <aws/medialive/model/ListInputsPaginationTraits.h>
#include <aws/medialive/model/ListInputSecurityGroupsPaginationTraits.h>
#include <aws/medialive/model/ListMultiplexesPaginationTraits.h>
#include <aws/medialive/model/ListChannelsPaginationTraits.h>
#include <aws/medialive/model/ListClusterAlertsPaginationTraits.h>
#include <aws/medialive/model/ListNetworksPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MediaLivePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MediaLivePaginationCompilationTest, MediaLivePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
