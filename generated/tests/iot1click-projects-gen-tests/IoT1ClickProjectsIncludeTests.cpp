/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/iot1click-projects/IoT1ClickProjectsClient.h>
#include <aws/iot1click-projects/IoT1ClickProjectsEndpointProvider.h>
#include <aws/iot1click-projects/IoT1ClickProjectsEndpointRules.h>
#include <aws/iot1click-projects/IoT1ClickProjectsErrorMarshaller.h>
#include <aws/iot1click-projects/IoT1ClickProjectsErrors.h>
#include <aws/iot1click-projects/IoT1ClickProjectsRequest.h>
#include <aws/iot1click-projects/IoT1ClickProjectsServiceClientModel.h>
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
#include <aws/iot1click-projects/model/AssociateDeviceWithPlacementRequest.h>
#include <aws/iot1click-projects/model/AssociateDeviceWithPlacementResult.h>
#include <aws/iot1click-projects/model/CreatePlacementRequest.h>
#include <aws/iot1click-projects/model/CreatePlacementResult.h>
#include <aws/iot1click-projects/model/CreateProjectRequest.h>
#include <aws/iot1click-projects/model/CreateProjectResult.h>
#include <aws/iot1click-projects/model/DeletePlacementRequest.h>
#include <aws/iot1click-projects/model/DeletePlacementResult.h>
#include <aws/iot1click-projects/model/DeleteProjectRequest.h>
#include <aws/iot1click-projects/model/DeleteProjectResult.h>
#include <aws/iot1click-projects/model/DescribePlacementRequest.h>
#include <aws/iot1click-projects/model/DescribePlacementResult.h>
#include <aws/iot1click-projects/model/DescribeProjectRequest.h>
#include <aws/iot1click-projects/model/DescribeProjectResult.h>
#include <aws/iot1click-projects/model/DeviceTemplate.h>
#include <aws/iot1click-projects/model/DisassociateDeviceFromPlacementRequest.h>
#include <aws/iot1click-projects/model/DisassociateDeviceFromPlacementResult.h>
#include <aws/iot1click-projects/model/GetDevicesInPlacementRequest.h>
#include <aws/iot1click-projects/model/GetDevicesInPlacementResult.h>
#include <aws/iot1click-projects/model/InternalFailureException.h>
#include <aws/iot1click-projects/model/InvalidRequestException.h>
#include <aws/iot1click-projects/model/ListPlacementsRequest.h>
#include <aws/iot1click-projects/model/ListPlacementsResult.h>
#include <aws/iot1click-projects/model/ListProjectsRequest.h>
#include <aws/iot1click-projects/model/ListProjectsResult.h>
#include <aws/iot1click-projects/model/ListTagsForResourceRequest.h>
#include <aws/iot1click-projects/model/ListTagsForResourceResult.h>
#include <aws/iot1click-projects/model/PlacementDescription.h>
#include <aws/iot1click-projects/model/PlacementSummary.h>
#include <aws/iot1click-projects/model/PlacementTemplate.h>
#include <aws/iot1click-projects/model/ProjectDescription.h>
#include <aws/iot1click-projects/model/ProjectSummary.h>
#include <aws/iot1click-projects/model/ResourceConflictException.h>
#include <aws/iot1click-projects/model/ResourceNotFoundException.h>
#include <aws/iot1click-projects/model/TagResourceRequest.h>
#include <aws/iot1click-projects/model/TagResourceResult.h>
#include <aws/iot1click-projects/model/TooManyRequestsException.h>
#include <aws/iot1click-projects/model/UntagResourceRequest.h>
#include <aws/iot1click-projects/model/UntagResourceResult.h>
#include <aws/iot1click-projects/model/UpdatePlacementRequest.h>
#include <aws/iot1click-projects/model/UpdatePlacementResult.h>
#include <aws/iot1click-projects/model/UpdateProjectRequest.h>
#include <aws/iot1click-projects/model/UpdateProjectResult.h>

using IoT1ClickProjectsIncludeTest = ::testing::Test;

TEST_F(IoT1ClickProjectsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::IoT1ClickProjects::IoT1ClickProjectsClient>("IoT1ClickProjectsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
