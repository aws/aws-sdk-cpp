/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for LocationService pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/location/LocationServiceClientPagination.h>
#include <aws/location/LocationServicePaginationBase.h>
#include <aws/location/model/ListTrackerConsumersPaginationTraits.h>
#include <aws/location/model/ListTrackersPaginationTraits.h>
#include <aws/location/model/ListKeysPaginationTraits.h>
#include <aws/location/model/GetDevicePositionHistoryPaginationTraits.h>
#include <aws/location/model/ListRouteCalculatorsPaginationTraits.h>
#include <aws/location/model/ForecastGeofenceEventsPaginationTraits.h>
#include <aws/location/model/ListMapsPaginationTraits.h>
#include <aws/location/model/ListPlaceIndexesPaginationTraits.h>
#include <aws/location/model/ListGeofenceCollectionsPaginationTraits.h>
#include <aws/location/model/ListDevicePositionsPaginationTraits.h>
#include <aws/location/model/ListGeofencesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class LocationServicePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(LocationServicePaginationCompilationTest, LocationServicePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
