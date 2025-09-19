/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/amp/PrometheusServiceClient.h>
#include <aws/amp/PrometheusServiceEndpointProvider.h>
#include <aws/amp/PrometheusServiceEndpointRules.h>
#include <aws/amp/PrometheusServiceErrorMarshaller.h>
#include <aws/amp/PrometheusServiceErrors.h>
#include <aws/amp/PrometheusServiceRequest.h>
#include <aws/amp/PrometheusServiceServiceClientModel.h>
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/AlertManagerDefinitionDescription.h>
#include <aws/amp/model/AlertManagerDefinitionStatus.h>
#include <aws/amp/model/AlertManagerDefinitionStatusCode.h>
#include <aws/amp/model/AmpConfiguration.h>
#include <aws/amp/model/CloudWatchLogDestination.h>
#include <aws/amp/model/ComponentConfig.h>
#include <aws/amp/model/ConflictException.h>
#include <aws/amp/model/CreateAlertManagerDefinitionRequest.h>
#include <aws/amp/model/CreateAlertManagerDefinitionResult.h>
#include <aws/amp/model/CreateLoggingConfigurationRequest.h>
#include <aws/amp/model/CreateLoggingConfigurationResult.h>
#include <aws/amp/model/CreateQueryLoggingConfigurationRequest.h>
#include <aws/amp/model/CreateQueryLoggingConfigurationResult.h>
#include <aws/amp/model/CreateRuleGroupsNamespaceRequest.h>
#include <aws/amp/model/CreateRuleGroupsNamespaceResult.h>
#include <aws/amp/model/CreateScraperRequest.h>
#include <aws/amp/model/CreateScraperResult.h>
#include <aws/amp/model/CreateWorkspaceRequest.h>
#include <aws/amp/model/CreateWorkspaceResult.h>
#include <aws/amp/model/DeleteAlertManagerDefinitionRequest.h>
#include <aws/amp/model/DeleteLoggingConfigurationRequest.h>
#include <aws/amp/model/DeleteQueryLoggingConfigurationRequest.h>
#include <aws/amp/model/DeleteResourcePolicyRequest.h>
#include <aws/amp/model/DeleteRuleGroupsNamespaceRequest.h>
#include <aws/amp/model/DeleteScraperLoggingConfigurationRequest.h>
#include <aws/amp/model/DeleteScraperRequest.h>
#include <aws/amp/model/DeleteScraperResult.h>
#include <aws/amp/model/DeleteWorkspaceRequest.h>
#include <aws/amp/model/DescribeAlertManagerDefinitionRequest.h>
#include <aws/amp/model/DescribeAlertManagerDefinitionResult.h>
#include <aws/amp/model/DescribeLoggingConfigurationRequest.h>
#include <aws/amp/model/DescribeLoggingConfigurationResult.h>
#include <aws/amp/model/DescribeQueryLoggingConfigurationRequest.h>
#include <aws/amp/model/DescribeQueryLoggingConfigurationResult.h>
#include <aws/amp/model/DescribeResourcePolicyRequest.h>
#include <aws/amp/model/DescribeResourcePolicyResult.h>
#include <aws/amp/model/DescribeRuleGroupsNamespaceRequest.h>
#include <aws/amp/model/DescribeRuleGroupsNamespaceResult.h>
#include <aws/amp/model/DescribeScraperLoggingConfigurationRequest.h>
#include <aws/amp/model/DescribeScraperLoggingConfigurationResult.h>
#include <aws/amp/model/DescribeScraperRequest.h>
#include <aws/amp/model/DescribeScraperResult.h>
#include <aws/amp/model/DescribeWorkspaceConfigurationRequest.h>
#include <aws/amp/model/DescribeWorkspaceConfigurationResult.h>
#include <aws/amp/model/DescribeWorkspaceRequest.h>
#include <aws/amp/model/DescribeWorkspaceResult.h>
#include <aws/amp/model/Destination.h>
#include <aws/amp/model/EksConfiguration.h>
#include <aws/amp/model/GetDefaultScraperConfigurationRequest.h>
#include <aws/amp/model/GetDefaultScraperConfigurationResult.h>
#include <aws/amp/model/InternalServerException.h>
#include <aws/amp/model/LimitsPerLabelSet.h>
#include <aws/amp/model/LimitsPerLabelSetEntry.h>
#include <aws/amp/model/ListRuleGroupsNamespacesRequest.h>
#include <aws/amp/model/ListRuleGroupsNamespacesResult.h>
#include <aws/amp/model/ListScrapersRequest.h>
#include <aws/amp/model/ListScrapersResult.h>
#include <aws/amp/model/ListTagsForResourceRequest.h>
#include <aws/amp/model/ListTagsForResourceResult.h>
#include <aws/amp/model/ListWorkspacesRequest.h>
#include <aws/amp/model/ListWorkspacesResult.h>
#include <aws/amp/model/LoggingConfigurationMetadata.h>
#include <aws/amp/model/LoggingConfigurationStatus.h>
#include <aws/amp/model/LoggingConfigurationStatusCode.h>
#include <aws/amp/model/LoggingDestination.h>
#include <aws/amp/model/LoggingFilter.h>
#include <aws/amp/model/PutAlertManagerDefinitionRequest.h>
#include <aws/amp/model/PutAlertManagerDefinitionResult.h>
#include <aws/amp/model/PutResourcePolicyRequest.h>
#include <aws/amp/model/PutResourcePolicyResult.h>
#include <aws/amp/model/PutRuleGroupsNamespaceRequest.h>
#include <aws/amp/model/PutRuleGroupsNamespaceResult.h>
#include <aws/amp/model/QueryLoggingConfigurationMetadata.h>
#include <aws/amp/model/QueryLoggingConfigurationStatus.h>
#include <aws/amp/model/QueryLoggingConfigurationStatusCode.h>
#include <aws/amp/model/ResourceNotFoundException.h>
#include <aws/amp/model/RoleConfiguration.h>
#include <aws/amp/model/RuleGroupsNamespaceDescription.h>
#include <aws/amp/model/RuleGroupsNamespaceStatus.h>
#include <aws/amp/model/RuleGroupsNamespaceStatusCode.h>
#include <aws/amp/model/RuleGroupsNamespaceSummary.h>
#include <aws/amp/model/ScrapeConfiguration.h>
#include <aws/amp/model/ScraperComponent.h>
#include <aws/amp/model/ScraperComponentType.h>
#include <aws/amp/model/ScraperDescription.h>
#include <aws/amp/model/ScraperLoggingConfigurationStatus.h>
#include <aws/amp/model/ScraperLoggingConfigurationStatusCode.h>
#include <aws/amp/model/ScraperLoggingDestination.h>
#include <aws/amp/model/ScraperStatus.h>
#include <aws/amp/model/ScraperStatusCode.h>
#include <aws/amp/model/ScraperSummary.h>
#include <aws/amp/model/ServiceQuotaExceededException.h>
#include <aws/amp/model/Source.h>
#include <aws/amp/model/TagResourceRequest.h>
#include <aws/amp/model/TagResourceResult.h>
#include <aws/amp/model/ThrottlingException.h>
#include <aws/amp/model/UntagResourceRequest.h>
#include <aws/amp/model/UntagResourceResult.h>
#include <aws/amp/model/UpdateLoggingConfigurationRequest.h>
#include <aws/amp/model/UpdateLoggingConfigurationResult.h>
#include <aws/amp/model/UpdateQueryLoggingConfigurationRequest.h>
#include <aws/amp/model/UpdateQueryLoggingConfigurationResult.h>
#include <aws/amp/model/UpdateScraperLoggingConfigurationRequest.h>
#include <aws/amp/model/UpdateScraperLoggingConfigurationResult.h>
#include <aws/amp/model/UpdateScraperRequest.h>
#include <aws/amp/model/UpdateScraperResult.h>
#include <aws/amp/model/UpdateWorkspaceAliasRequest.h>
#include <aws/amp/model/UpdateWorkspaceConfigurationRequest.h>
#include <aws/amp/model/UpdateWorkspaceConfigurationResult.h>
#include <aws/amp/model/ValidationException.h>
#include <aws/amp/model/ValidationExceptionField.h>
#include <aws/amp/model/ValidationExceptionReason.h>
#include <aws/amp/model/WorkspaceConfigurationDescription.h>
#include <aws/amp/model/WorkspaceConfigurationStatus.h>
#include <aws/amp/model/WorkspaceConfigurationStatusCode.h>
#include <aws/amp/model/WorkspaceDescription.h>
#include <aws/amp/model/WorkspacePolicyStatusCode.h>
#include <aws/amp/model/WorkspaceStatus.h>
#include <aws/amp/model/WorkspaceStatusCode.h>
#include <aws/amp/model/WorkspaceSummary.h>

using PrometheusServiceIncludeTest = ::testing::Test;

TEST_F(PrometheusServiceIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::PrometheusService::PrometheusServiceClient>("PrometheusServiceIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
