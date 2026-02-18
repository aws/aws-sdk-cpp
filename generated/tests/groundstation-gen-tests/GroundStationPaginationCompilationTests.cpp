/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for GroundStation pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/groundstation/GroundStationClientPagination.h>
#include <aws/groundstation/GroundStationPaginationBase.h>
#include <aws/groundstation/model/ListEphemeridesPaginationTraits.h>
#include <aws/groundstation/model/ListGroundStationsPaginationTraits.h>
#include <aws/groundstation/model/ListMissionProfilesPaginationTraits.h>
#include <aws/groundstation/model/ListSatellitesPaginationTraits.h>
#include <aws/groundstation/model/ListDataflowEndpointGroupsPaginationTraits.h>
#include <aws/groundstation/model/ListConfigsPaginationTraits.h>
#include <aws/groundstation/model/ListContactsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class GroundStationPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(GroundStationPaginationCompilationTest, GroundStationPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
