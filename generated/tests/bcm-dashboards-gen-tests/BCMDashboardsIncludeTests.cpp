/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/bcm-dashboards/BCMDashboardsClient.h>
#include <aws/bcm-dashboards/BCMDashboardsEndpointProvider.h>
#include <aws/bcm-dashboards/BCMDashboardsEndpointRules.h>
#include <aws/bcm-dashboards/BCMDashboardsErrorMarshaller.h>
#include <aws/bcm-dashboards/BCMDashboardsErrors.h>
#include <aws/bcm-dashboards/BCMDashboardsRequest.h>
#include <aws/bcm-dashboards/BCMDashboardsServiceClientModel.h>
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/bcm-dashboards/model/CostAndUsageQuery.h>
#include <aws/bcm-dashboards/model/CostCategoryValues.h>
#include <aws/bcm-dashboards/model/CreateDashboardRequest.h>
#include <aws/bcm-dashboards/model/CreateDashboardResult.h>
#include <aws/bcm-dashboards/model/DashboardReference.h>
#include <aws/bcm-dashboards/model/DashboardType.h>
#include <aws/bcm-dashboards/model/DateTimeRange.h>
#include <aws/bcm-dashboards/model/DateTimeType.h>
#include <aws/bcm-dashboards/model/DateTimeValue.h>
#include <aws/bcm-dashboards/model/DeleteDashboardRequest.h>
#include <aws/bcm-dashboards/model/DeleteDashboardResult.h>
#include <aws/bcm-dashboards/model/Dimension.h>
#include <aws/bcm-dashboards/model/DimensionValues.h>
#include <aws/bcm-dashboards/model/DisplayConfig.h>
#include <aws/bcm-dashboards/model/Expression.h>
#include <aws/bcm-dashboards/model/GetDashboardRequest.h>
#include <aws/bcm-dashboards/model/GetDashboardResult.h>
#include <aws/bcm-dashboards/model/GetResourcePolicyRequest.h>
#include <aws/bcm-dashboards/model/GetResourcePolicyResult.h>
#include <aws/bcm-dashboards/model/Granularity.h>
#include <aws/bcm-dashboards/model/GraphDisplayConfig.h>
#include <aws/bcm-dashboards/model/GroupDefinition.h>
#include <aws/bcm-dashboards/model/GroupDefinitionType.h>
#include <aws/bcm-dashboards/model/ListDashboardsRequest.h>
#include <aws/bcm-dashboards/model/ListDashboardsResult.h>
#include <aws/bcm-dashboards/model/ListTagsForResourceRequest.h>
#include <aws/bcm-dashboards/model/ListTagsForResourceResult.h>
#include <aws/bcm-dashboards/model/MatchOption.h>
#include <aws/bcm-dashboards/model/MetricName.h>
#include <aws/bcm-dashboards/model/QueryParameters.h>
#include <aws/bcm-dashboards/model/ReservationCoverageQuery.h>
#include <aws/bcm-dashboards/model/ReservationUtilizationQuery.h>
#include <aws/bcm-dashboards/model/ResourceTag.h>
#include <aws/bcm-dashboards/model/SavingsPlansCoverageQuery.h>
#include <aws/bcm-dashboards/model/SavingsPlansUtilizationQuery.h>
#include <aws/bcm-dashboards/model/TableDisplayConfigStruct.h>
#include <aws/bcm-dashboards/model/TagResourceRequest.h>
#include <aws/bcm-dashboards/model/TagResourceResult.h>
#include <aws/bcm-dashboards/model/TagValues.h>
#include <aws/bcm-dashboards/model/UntagResourceRequest.h>
#include <aws/bcm-dashboards/model/UntagResourceResult.h>
#include <aws/bcm-dashboards/model/UpdateDashboardRequest.h>
#include <aws/bcm-dashboards/model/UpdateDashboardResult.h>
#include <aws/bcm-dashboards/model/VisualType.h>
#include <aws/bcm-dashboards/model/Widget.h>
#include <aws/bcm-dashboards/model/WidgetConfig.h>

using BCMDashboardsIncludeTest = ::testing::Test;

TEST_F(BCMDashboardsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::BCMDashboards::BCMDashboardsClient>("BCMDashboardsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
