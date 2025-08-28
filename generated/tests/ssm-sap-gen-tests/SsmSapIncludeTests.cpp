/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/ssm-sap/SsmSapClient.h>
#include <aws/ssm-sap/SsmSapEndpointProvider.h>
#include <aws/ssm-sap/SsmSapEndpointRules.h>
#include <aws/ssm-sap/SsmSapErrorMarshaller.h>
#include <aws/ssm-sap/SsmSapErrors.h>
#include <aws/ssm-sap/SsmSapRequest.h>
#include <aws/ssm-sap/SsmSapServiceClientModel.h>
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/model/AllocationType.h>
#include <aws/ssm-sap/model/Application.h>
#include <aws/ssm-sap/model/ApplicationCredential.h>
#include <aws/ssm-sap/model/ApplicationDiscoveryStatus.h>
#include <aws/ssm-sap/model/ApplicationStatus.h>
#include <aws/ssm-sap/model/ApplicationSummary.h>
#include <aws/ssm-sap/model/ApplicationType.h>
#include <aws/ssm-sap/model/AssociatedHost.h>
#include <aws/ssm-sap/model/BackintConfig.h>
#include <aws/ssm-sap/model/BackintMode.h>
#include <aws/ssm-sap/model/ClusterStatus.h>
#include <aws/ssm-sap/model/Component.h>
#include <aws/ssm-sap/model/ComponentInfo.h>
#include <aws/ssm-sap/model/ComponentStatus.h>
#include <aws/ssm-sap/model/ComponentSummary.h>
#include <aws/ssm-sap/model/ComponentType.h>
#include <aws/ssm-sap/model/ConfigurationCheckDefinition.h>
#include <aws/ssm-sap/model/ConfigurationCheckOperation.h>
#include <aws/ssm-sap/model/ConfigurationCheckOperationListingMode.h>
#include <aws/ssm-sap/model/ConfigurationCheckType.h>
#include <aws/ssm-sap/model/ConnectedEntityType.h>
#include <aws/ssm-sap/model/CredentialType.h>
#include <aws/ssm-sap/model/Database.h>
#include <aws/ssm-sap/model/DatabaseConnection.h>
#include <aws/ssm-sap/model/DatabaseConnectionMethod.h>
#include <aws/ssm-sap/model/DatabaseStatus.h>
#include <aws/ssm-sap/model/DatabaseSummary.h>
#include <aws/ssm-sap/model/DatabaseType.h>
#include <aws/ssm-sap/model/DeleteResourcePermissionRequest.h>
#include <aws/ssm-sap/model/DeleteResourcePermissionResult.h>
#include <aws/ssm-sap/model/DeregisterApplicationRequest.h>
#include <aws/ssm-sap/model/DeregisterApplicationResult.h>
#include <aws/ssm-sap/model/Filter.h>
#include <aws/ssm-sap/model/FilterOperator.h>
#include <aws/ssm-sap/model/GetApplicationRequest.h>
#include <aws/ssm-sap/model/GetApplicationResult.h>
#include <aws/ssm-sap/model/GetComponentRequest.h>
#include <aws/ssm-sap/model/GetComponentResult.h>
#include <aws/ssm-sap/model/GetConfigurationCheckOperationRequest.h>
#include <aws/ssm-sap/model/GetConfigurationCheckOperationResult.h>
#include <aws/ssm-sap/model/GetDatabaseRequest.h>
#include <aws/ssm-sap/model/GetDatabaseResult.h>
#include <aws/ssm-sap/model/GetOperationRequest.h>
#include <aws/ssm-sap/model/GetOperationResult.h>
#include <aws/ssm-sap/model/GetResourcePermissionRequest.h>
#include <aws/ssm-sap/model/GetResourcePermissionResult.h>
#include <aws/ssm-sap/model/Host.h>
#include <aws/ssm-sap/model/HostRole.h>
#include <aws/ssm-sap/model/IpAddressMember.h>
#include <aws/ssm-sap/model/ListApplicationsRequest.h>
#include <aws/ssm-sap/model/ListApplicationsResult.h>
#include <aws/ssm-sap/model/ListComponentsRequest.h>
#include <aws/ssm-sap/model/ListComponentsResult.h>
#include <aws/ssm-sap/model/ListConfigurationCheckDefinitionsRequest.h>
#include <aws/ssm-sap/model/ListConfigurationCheckDefinitionsResult.h>
#include <aws/ssm-sap/model/ListConfigurationCheckOperationsRequest.h>
#include <aws/ssm-sap/model/ListConfigurationCheckOperationsResult.h>
#include <aws/ssm-sap/model/ListDatabasesRequest.h>
#include <aws/ssm-sap/model/ListDatabasesResult.h>
#include <aws/ssm-sap/model/ListOperationEventsRequest.h>
#include <aws/ssm-sap/model/ListOperationEventsResult.h>
#include <aws/ssm-sap/model/ListOperationsRequest.h>
#include <aws/ssm-sap/model/ListOperationsResult.h>
#include <aws/ssm-sap/model/ListSubCheckResultsRequest.h>
#include <aws/ssm-sap/model/ListSubCheckResultsResult.h>
#include <aws/ssm-sap/model/ListSubCheckRuleResultsRequest.h>
#include <aws/ssm-sap/model/ListSubCheckRuleResultsResult.h>
#include <aws/ssm-sap/model/ListTagsForResourceRequest.h>
#include <aws/ssm-sap/model/ListTagsForResourceResult.h>
#include <aws/ssm-sap/model/Operation.h>
#include <aws/ssm-sap/model/OperationEvent.h>
#include <aws/ssm-sap/model/OperationEventStatus.h>
#include <aws/ssm-sap/model/OperationMode.h>
#include <aws/ssm-sap/model/OperationStatus.h>
#include <aws/ssm-sap/model/PermissionActionType.h>
#include <aws/ssm-sap/model/PutResourcePermissionRequest.h>
#include <aws/ssm-sap/model/PutResourcePermissionResult.h>
#include <aws/ssm-sap/model/RegisterApplicationRequest.h>
#include <aws/ssm-sap/model/RegisterApplicationResult.h>
#include <aws/ssm-sap/model/ReplicationMode.h>
#include <aws/ssm-sap/model/Resilience.h>
#include <aws/ssm-sap/model/Resource.h>
#include <aws/ssm-sap/model/RuleResult.h>
#include <aws/ssm-sap/model/RuleResultStatus.h>
#include <aws/ssm-sap/model/RuleStatusCounts.h>
#include <aws/ssm-sap/model/StartApplicationRefreshRequest.h>
#include <aws/ssm-sap/model/StartApplicationRefreshResult.h>
#include <aws/ssm-sap/model/StartApplicationRequest.h>
#include <aws/ssm-sap/model/StartApplicationResult.h>
#include <aws/ssm-sap/model/StartConfigurationChecksRequest.h>
#include <aws/ssm-sap/model/StartConfigurationChecksResult.h>
#include <aws/ssm-sap/model/StopApplicationRequest.h>
#include <aws/ssm-sap/model/StopApplicationResult.h>
#include <aws/ssm-sap/model/SubCheckResult.h>
#include <aws/ssm-sap/model/TagResourceRequest.h>
#include <aws/ssm-sap/model/TagResourceResult.h>
#include <aws/ssm-sap/model/UntagResourceRequest.h>
#include <aws/ssm-sap/model/UntagResourceResult.h>
#include <aws/ssm-sap/model/UpdateApplicationSettingsRequest.h>
#include <aws/ssm-sap/model/UpdateApplicationSettingsResult.h>

using SsmSapIncludeTest = ::testing::Test;

TEST_F(SsmSapIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SsmSap::SsmSapClient>("SsmSapIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
