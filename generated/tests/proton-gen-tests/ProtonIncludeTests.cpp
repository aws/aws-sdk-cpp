/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/proton/ProtonClient.h>
#include <aws/proton/ProtonEndpointProvider.h>
#include <aws/proton/ProtonEndpointRules.h>
#include <aws/proton/ProtonErrorMarshaller.h>
#include <aws/proton/ProtonErrors.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/proton/ProtonServiceClientModel.h>
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/AccountSettings.h>
#include <aws/proton/model/BlockerStatus.h>
#include <aws/proton/model/BlockerType.h>
#include <aws/proton/model/CompatibleEnvironmentTemplate.h>
#include <aws/proton/model/CompatibleEnvironmentTemplateInput.h>
#include <aws/proton/model/Component.h>
#include <aws/proton/model/ComponentDeploymentUpdateType.h>
#include <aws/proton/model/ComponentState.h>
#include <aws/proton/model/ComponentSummary.h>
#include <aws/proton/model/CountsSummary.h>
#include <aws/proton/model/Deployment.h>
#include <aws/proton/model/DeploymentState.h>
#include <aws/proton/model/DeploymentStatus.h>
#include <aws/proton/model/DeploymentSummary.h>
#include <aws/proton/model/DeploymentTargetResourceType.h>
#include <aws/proton/model/DeploymentUpdateType.h>
#include <aws/proton/model/Environment.h>
#include <aws/proton/model/EnvironmentAccountConnection.h>
#include <aws/proton/model/EnvironmentAccountConnectionRequesterAccountType.h>
#include <aws/proton/model/EnvironmentAccountConnectionStatus.h>
#include <aws/proton/model/EnvironmentAccountConnectionSummary.h>
#include <aws/proton/model/EnvironmentState.h>
#include <aws/proton/model/EnvironmentSummary.h>
#include <aws/proton/model/EnvironmentTemplate.h>
#include <aws/proton/model/EnvironmentTemplateFilter.h>
#include <aws/proton/model/EnvironmentTemplateSummary.h>
#include <aws/proton/model/EnvironmentTemplateVersion.h>
#include <aws/proton/model/EnvironmentTemplateVersionSummary.h>
#include <aws/proton/model/ListServiceInstancesFilter.h>
#include <aws/proton/model/ListServiceInstancesFilterBy.h>
#include <aws/proton/model/ListServiceInstancesSortBy.h>
#include <aws/proton/model/Output.h>
#include <aws/proton/model/ProvisionedResource.h>
#include <aws/proton/model/ProvisionedResourceEngine.h>
#include <aws/proton/model/Provisioning.h>
#include <aws/proton/model/Repository.h>
#include <aws/proton/model/RepositoryBranch.h>
#include <aws/proton/model/RepositoryBranchInput.h>
#include <aws/proton/model/RepositoryProvider.h>
#include <aws/proton/model/RepositorySummary.h>
#include <aws/proton/model/RepositorySyncAttempt.h>
#include <aws/proton/model/RepositorySyncDefinition.h>
#include <aws/proton/model/RepositorySyncEvent.h>
#include <aws/proton/model/RepositorySyncStatus.h>
#include <aws/proton/model/ResourceCountsSummary.h>
#include <aws/proton/model/ResourceDeploymentStatus.h>
#include <aws/proton/model/ResourceSyncAttempt.h>
#include <aws/proton/model/ResourceSyncEvent.h>
#include <aws/proton/model/ResourceSyncStatus.h>
#include <aws/proton/model/Revision.h>
#include <aws/proton/model/S3ObjectSource.h>
#include <aws/proton/model/Service.h>
#include <aws/proton/model/ServiceInstance.h>
#include <aws/proton/model/ServiceInstanceState.h>
#include <aws/proton/model/ServiceInstanceSummary.h>
#include <aws/proton/model/ServicePipeline.h>
#include <aws/proton/model/ServicePipelineState.h>
#include <aws/proton/model/ServiceStatus.h>
#include <aws/proton/model/ServiceSummary.h>
#include <aws/proton/model/ServiceSyncBlockerSummary.h>
#include <aws/proton/model/ServiceSyncConfig.h>
#include <aws/proton/model/ServiceTemplate.h>
#include <aws/proton/model/ServiceTemplateSummary.h>
#include <aws/proton/model/ServiceTemplateSupportedComponentSourceType.h>
#include <aws/proton/model/ServiceTemplateVersion.h>
#include <aws/proton/model/ServiceTemplateVersionSummary.h>
#include <aws/proton/model/SortOrder.h>
#include <aws/proton/model/SyncBlocker.h>
#include <aws/proton/model/SyncBlockerContext.h>
#include <aws/proton/model/SyncType.h>
#include <aws/proton/model/Tag.h>
#include <aws/proton/model/TemplateSyncConfig.h>
#include <aws/proton/model/TemplateType.h>
#include <aws/proton/model/TemplateVersionSourceInput.h>
#include <aws/proton/model/TemplateVersionStatus.h>

using ProtonIncludeTest = ::testing::Test;

TEST_F(ProtonIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Proton::ProtonClient>("ProtonIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
