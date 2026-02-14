/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MediaConnect pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/mediaconnect/MediaConnectClientPagination.h>
#include <aws/mediaconnect/MediaConnectPaginationBase.h>
#include <aws/mediaconnect/model/ListGatewayInstancesPaginationTraits.h>
#include <aws/mediaconnect/model/ListRouterNetworkInterfacesPaginationTraits.h>
#include <aws/mediaconnect/model/ListRouterInputsPaginationTraits.h>
#include <aws/mediaconnect/model/ListEntitlementsPaginationTraits.h>
#include <aws/mediaconnect/model/ListGatewaysPaginationTraits.h>
#include <aws/mediaconnect/model/ListRouterOutputsPaginationTraits.h>
#include <aws/mediaconnect/model/ListBridgesPaginationTraits.h>
#include <aws/mediaconnect/model/ListFlowsPaginationTraits.h>
#include <aws/mediaconnect/model/ListOfferingsPaginationTraits.h>
#include <aws/mediaconnect/model/ListReservationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MediaConnectPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MediaConnectPaginationCompilationTest, MediaConnectPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
