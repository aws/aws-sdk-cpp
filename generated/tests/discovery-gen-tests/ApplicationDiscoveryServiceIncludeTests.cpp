/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/discovery/ApplicationDiscoveryServiceClient.h>
#include <aws/discovery/ApplicationDiscoveryServiceEndpointProvider.h>
#include <aws/discovery/ApplicationDiscoveryServiceEndpointRules.h>
#include <aws/discovery/ApplicationDiscoveryServiceErrorMarshaller.h>
#include <aws/discovery/ApplicationDiscoveryServiceErrors.h>
#include <aws/discovery/ApplicationDiscoveryServiceRequest.h>
#include <aws/discovery/ApplicationDiscoveryServiceServiceClientModel.h>
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/model/AgentConfigurationStatus.h>
#include <aws/discovery/model/AgentInfo.h>
#include <aws/discovery/model/AgentNetworkInfo.h>
#include <aws/discovery/model/AgentStatus.h>
#include <aws/discovery/model/AssociateConfigurationItemsToApplicationRequest.h>
#include <aws/discovery/model/AssociateConfigurationItemsToApplicationResult.h>
#include <aws/discovery/model/BatchDeleteAgentError.h>
#include <aws/discovery/model/BatchDeleteAgentsRequest.h>
#include <aws/discovery/model/BatchDeleteAgentsResult.h>
#include <aws/discovery/model/BatchDeleteConfigurationTask.h>
#include <aws/discovery/model/BatchDeleteConfigurationTaskStatus.h>
#include <aws/discovery/model/BatchDeleteImportDataError.h>
#include <aws/discovery/model/BatchDeleteImportDataErrorCode.h>
#include <aws/discovery/model/BatchDeleteImportDataRequest.h>
#include <aws/discovery/model/BatchDeleteImportDataResult.h>
#include <aws/discovery/model/ConfigurationItemType.h>
#include <aws/discovery/model/ConfigurationTag.h>
#include <aws/discovery/model/ContinuousExportDescription.h>
#include <aws/discovery/model/ContinuousExportStatus.h>
#include <aws/discovery/model/CreateApplicationRequest.h>
#include <aws/discovery/model/CreateApplicationResult.h>
#include <aws/discovery/model/CreateTagsRequest.h>
#include <aws/discovery/model/CreateTagsResult.h>
#include <aws/discovery/model/CustomerAgentInfo.h>
#include <aws/discovery/model/CustomerAgentlessCollectorInfo.h>
#include <aws/discovery/model/CustomerConnectorInfo.h>
#include <aws/discovery/model/CustomerMeCollectorInfo.h>
#include <aws/discovery/model/DataSource.h>
#include <aws/discovery/model/DeleteAgent.h>
#include <aws/discovery/model/DeleteAgentErrorCode.h>
#include <aws/discovery/model/DeleteApplicationsRequest.h>
#include <aws/discovery/model/DeleteApplicationsResult.h>
#include <aws/discovery/model/DeleteTagsRequest.h>
#include <aws/discovery/model/DeleteTagsResult.h>
#include <aws/discovery/model/DeletionConfigurationItemType.h>
#include <aws/discovery/model/DeletionWarning.h>
#include <aws/discovery/model/DescribeAgentsRequest.h>
#include <aws/discovery/model/DescribeAgentsResult.h>
#include <aws/discovery/model/DescribeBatchDeleteConfigurationTaskRequest.h>
#include <aws/discovery/model/DescribeBatchDeleteConfigurationTaskResult.h>
#include <aws/discovery/model/DescribeConfigurationsRequest.h>
#include <aws/discovery/model/DescribeConfigurationsResult.h>
#include <aws/discovery/model/DescribeContinuousExportsRequest.h>
#include <aws/discovery/model/DescribeContinuousExportsResult.h>
#include <aws/discovery/model/DescribeExportTasksRequest.h>
#include <aws/discovery/model/DescribeExportTasksResult.h>
#include <aws/discovery/model/DescribeImportTasksRequest.h>
#include <aws/discovery/model/DescribeImportTasksResult.h>
#include <aws/discovery/model/DescribeTagsRequest.h>
#include <aws/discovery/model/DescribeTagsResult.h>
#include <aws/discovery/model/DisassociateConfigurationItemsFromApplicationRequest.h>
#include <aws/discovery/model/DisassociateConfigurationItemsFromApplicationResult.h>
#include <aws/discovery/model/Ec2RecommendationsExportPreferences.h>
#include <aws/discovery/model/ExportDataFormat.h>
#include <aws/discovery/model/ExportFilter.h>
#include <aws/discovery/model/ExportInfo.h>
#include <aws/discovery/model/ExportPreferences.h>
#include <aws/discovery/model/ExportStatus.h>
#include <aws/discovery/model/FailedConfiguration.h>
#include <aws/discovery/model/FileClassification.h>
#include <aws/discovery/model/Filter.h>
#include <aws/discovery/model/GetDiscoverySummaryRequest.h>
#include <aws/discovery/model/GetDiscoverySummaryResult.h>
#include <aws/discovery/model/ImportStatus.h>
#include <aws/discovery/model/ImportTask.h>
#include <aws/discovery/model/ImportTaskFilter.h>
#include <aws/discovery/model/ImportTaskFilterName.h>
#include <aws/discovery/model/ListConfigurationsRequest.h>
#include <aws/discovery/model/ListConfigurationsResult.h>
#include <aws/discovery/model/ListServerNeighborsRequest.h>
#include <aws/discovery/model/ListServerNeighborsResult.h>
#include <aws/discovery/model/NeighborConnectionDetail.h>
#include <aws/discovery/model/OfferingClass.h>
#include <aws/discovery/model/OrderByElement.h>
#include <aws/discovery/model/OrderString.h>
#include <aws/discovery/model/PurchasingOption.h>
#include <aws/discovery/model/ReservedInstanceOptions.h>
#include <aws/discovery/model/StartBatchDeleteConfigurationTaskRequest.h>
#include <aws/discovery/model/StartBatchDeleteConfigurationTaskResult.h>
#include <aws/discovery/model/StartContinuousExportRequest.h>
#include <aws/discovery/model/StartContinuousExportResult.h>
#include <aws/discovery/model/StartDataCollectionByAgentIdsRequest.h>
#include <aws/discovery/model/StartDataCollectionByAgentIdsResult.h>
#include <aws/discovery/model/StartExportTaskRequest.h>
#include <aws/discovery/model/StartExportTaskResult.h>
#include <aws/discovery/model/StartImportTaskRequest.h>
#include <aws/discovery/model/StartImportTaskResult.h>
#include <aws/discovery/model/StopContinuousExportRequest.h>
#include <aws/discovery/model/StopContinuousExportResult.h>
#include <aws/discovery/model/StopDataCollectionByAgentIdsRequest.h>
#include <aws/discovery/model/StopDataCollectionByAgentIdsResult.h>
#include <aws/discovery/model/Tag.h>
#include <aws/discovery/model/TagFilter.h>
#include <aws/discovery/model/Tenancy.h>
#include <aws/discovery/model/TermLength.h>
#include <aws/discovery/model/UpdateApplicationRequest.h>
#include <aws/discovery/model/UpdateApplicationResult.h>
#include <aws/discovery/model/UsageMetricBasis.h>

using ApplicationDiscoveryServiceIncludeTest = ::testing::Test;

TEST_F(ApplicationDiscoveryServiceIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ApplicationDiscoveryService::ApplicationDiscoveryServiceClient>("ApplicationDiscoveryServiceIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
