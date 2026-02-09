/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for IoTFleetWise pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/iotfleetwise/IoTFleetWiseClientPagination.h>
#include <aws/iotfleetwise/IoTFleetWisePaginationBase.h>
#include <aws/iotfleetwise/model/ListDecoderManifestsPaginationTraits.h>
#include <aws/iotfleetwise/model/ListVehiclesInFleetPaginationTraits.h>
#include <aws/iotfleetwise/model/ListSignalCatalogsPaginationTraits.h>
#include <aws/iotfleetwise/model/ListVehiclesPaginationTraits.h>
#include <aws/iotfleetwise/model/ListFleetsForVehiclePaginationTraits.h>
#include <aws/iotfleetwise/model/ListModelManifestNodesPaginationTraits.h>
#include <aws/iotfleetwise/model/ListModelManifestsPaginationTraits.h>
#include <aws/iotfleetwise/model/ListDecoderManifestSignalsPaginationTraits.h>
#include <aws/iotfleetwise/model/ListFleetsPaginationTraits.h>
#include <aws/iotfleetwise/model/GetVehicleStatusPaginationTraits.h>
#include <aws/iotfleetwise/model/ListStateTemplatesPaginationTraits.h>
#include <aws/iotfleetwise/model/ListCampaignsPaginationTraits.h>
#include <aws/iotfleetwise/model/ListSignalCatalogNodesPaginationTraits.h>
#include <aws/iotfleetwise/model/ListDecoderManifestNetworkInterfacesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class IoTFleetWisePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(IoTFleetWisePaginationCompilationTest, IoTFleetWisePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
