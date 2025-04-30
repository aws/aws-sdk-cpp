/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/appconfig/AppConfigClient.h>
#include <aws/appconfig/AppConfigEndpointProvider.h>
#include <aws/appconfig/AppConfigEndpointRules.h>
#include <aws/appconfig/AppConfigErrorMarshaller.h>
#include <aws/appconfig/AppConfigErrors.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/appconfig/AppConfigServiceClientModel.h>
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/Action.h>
#include <aws/appconfig/model/ActionInvocation.h>
#include <aws/appconfig/model/ActionPoint.h>
#include <aws/appconfig/model/Application.h>
#include <aws/appconfig/model/AppliedExtension.h>
#include <aws/appconfig/model/BadRequestDetails.h>
#include <aws/appconfig/model/BadRequestException.h>
#include <aws/appconfig/model/BadRequestReason.h>
#include <aws/appconfig/model/BytesMeasure.h>
#include <aws/appconfig/model/ConfigurationProfileSummary.h>
#include <aws/appconfig/model/CreateApplicationRequest.h>
#include <aws/appconfig/model/CreateApplicationResult.h>
#include <aws/appconfig/model/CreateConfigurationProfileRequest.h>
#include <aws/appconfig/model/CreateConfigurationProfileResult.h>
#include <aws/appconfig/model/CreateDeploymentStrategyRequest.h>
#include <aws/appconfig/model/CreateDeploymentStrategyResult.h>
#include <aws/appconfig/model/CreateEnvironmentRequest.h>
#include <aws/appconfig/model/CreateEnvironmentResult.h>
#include <aws/appconfig/model/CreateExtensionAssociationRequest.h>
#include <aws/appconfig/model/CreateExtensionAssociationResult.h>
#include <aws/appconfig/model/CreateExtensionRequest.h>
#include <aws/appconfig/model/CreateExtensionResult.h>
#include <aws/appconfig/model/CreateHostedConfigurationVersionRequest.h>
#include <aws/appconfig/model/CreateHostedConfigurationVersionResult.h>
#include <aws/appconfig/model/DeleteApplicationRequest.h>
#include <aws/appconfig/model/DeleteConfigurationProfileRequest.h>
#include <aws/appconfig/model/DeleteDeploymentStrategyRequest.h>
#include <aws/appconfig/model/DeleteEnvironmentRequest.h>
#include <aws/appconfig/model/DeleteExtensionAssociationRequest.h>
#include <aws/appconfig/model/DeleteExtensionRequest.h>
#include <aws/appconfig/model/DeleteHostedConfigurationVersionRequest.h>
#include <aws/appconfig/model/DeletionProtectionCheck.h>
#include <aws/appconfig/model/DeletionProtectionSettings.h>
#include <aws/appconfig/model/DeploymentEvent.h>
#include <aws/appconfig/model/DeploymentEventType.h>
#include <aws/appconfig/model/DeploymentState.h>
#include <aws/appconfig/model/DeploymentStrategy.h>
#include <aws/appconfig/model/DeploymentSummary.h>
#include <aws/appconfig/model/Environment.h>
#include <aws/appconfig/model/EnvironmentState.h>
#include <aws/appconfig/model/ExtensionAssociationSummary.h>
#include <aws/appconfig/model/ExtensionSummary.h>
#include <aws/appconfig/model/GetAccountSettingsRequest.h>
#include <aws/appconfig/model/GetAccountSettingsResult.h>
#include <aws/appconfig/model/GetApplicationRequest.h>
#include <aws/appconfig/model/GetApplicationResult.h>
#include <aws/appconfig/model/GetConfigurationProfileRequest.h>
#include <aws/appconfig/model/GetConfigurationProfileResult.h>
#include <aws/appconfig/model/GetDeploymentRequest.h>
#include <aws/appconfig/model/GetDeploymentResult.h>
#include <aws/appconfig/model/GetDeploymentStrategyRequest.h>
#include <aws/appconfig/model/GetDeploymentStrategyResult.h>
#include <aws/appconfig/model/GetEnvironmentRequest.h>
#include <aws/appconfig/model/GetEnvironmentResult.h>
#include <aws/appconfig/model/GetExtensionAssociationRequest.h>
#include <aws/appconfig/model/GetExtensionAssociationResult.h>
#include <aws/appconfig/model/GetExtensionRequest.h>
#include <aws/appconfig/model/GetExtensionResult.h>
#include <aws/appconfig/model/GetHostedConfigurationVersionRequest.h>
#include <aws/appconfig/model/GetHostedConfigurationVersionResult.h>
#include <aws/appconfig/model/GrowthType.h>
#include <aws/appconfig/model/HostedConfigurationVersionSummary.h>
#include <aws/appconfig/model/InvalidConfigurationDetail.h>
#include <aws/appconfig/model/ListApplicationsRequest.h>
#include <aws/appconfig/model/ListApplicationsResult.h>
#include <aws/appconfig/model/ListConfigurationProfilesRequest.h>
#include <aws/appconfig/model/ListConfigurationProfilesResult.h>
#include <aws/appconfig/model/ListDeploymentStrategiesRequest.h>
#include <aws/appconfig/model/ListDeploymentStrategiesResult.h>
#include <aws/appconfig/model/ListDeploymentsRequest.h>
#include <aws/appconfig/model/ListDeploymentsResult.h>
#include <aws/appconfig/model/ListEnvironmentsRequest.h>
#include <aws/appconfig/model/ListEnvironmentsResult.h>
#include <aws/appconfig/model/ListExtensionAssociationsRequest.h>
#include <aws/appconfig/model/ListExtensionAssociationsResult.h>
#include <aws/appconfig/model/ListExtensionsRequest.h>
#include <aws/appconfig/model/ListExtensionsResult.h>
#include <aws/appconfig/model/ListHostedConfigurationVersionsRequest.h>
#include <aws/appconfig/model/ListHostedConfigurationVersionsResult.h>
#include <aws/appconfig/model/ListTagsForResourceRequest.h>
#include <aws/appconfig/model/ListTagsForResourceResult.h>
#include <aws/appconfig/model/Monitor.h>
#include <aws/appconfig/model/Parameter.h>
#include <aws/appconfig/model/PayloadTooLargeException.h>
#include <aws/appconfig/model/ReplicateTo.h>
#include <aws/appconfig/model/ResourceNotFoundException.h>
#include <aws/appconfig/model/StartDeploymentRequest.h>
#include <aws/appconfig/model/StartDeploymentResult.h>
#include <aws/appconfig/model/StopDeploymentRequest.h>
#include <aws/appconfig/model/StopDeploymentResult.h>
#include <aws/appconfig/model/TagResourceRequest.h>
#include <aws/appconfig/model/TriggeredBy.h>
#include <aws/appconfig/model/UntagResourceRequest.h>
#include <aws/appconfig/model/UpdateAccountSettingsRequest.h>
#include <aws/appconfig/model/UpdateAccountSettingsResult.h>
#include <aws/appconfig/model/UpdateApplicationRequest.h>
#include <aws/appconfig/model/UpdateApplicationResult.h>
#include <aws/appconfig/model/UpdateConfigurationProfileRequest.h>
#include <aws/appconfig/model/UpdateConfigurationProfileResult.h>
#include <aws/appconfig/model/UpdateDeploymentStrategyRequest.h>
#include <aws/appconfig/model/UpdateDeploymentStrategyResult.h>
#include <aws/appconfig/model/UpdateEnvironmentRequest.h>
#include <aws/appconfig/model/UpdateEnvironmentResult.h>
#include <aws/appconfig/model/UpdateExtensionAssociationRequest.h>
#include <aws/appconfig/model/UpdateExtensionAssociationResult.h>
#include <aws/appconfig/model/UpdateExtensionRequest.h>
#include <aws/appconfig/model/UpdateExtensionResult.h>
#include <aws/appconfig/model/ValidateConfigurationRequest.h>
#include <aws/appconfig/model/Validator.h>
#include <aws/appconfig/model/ValidatorType.h>

using AppConfigIncludeTest = ::testing::Test;

TEST_F(AppConfigIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::AppConfig::AppConfigClient>("AppConfigIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
