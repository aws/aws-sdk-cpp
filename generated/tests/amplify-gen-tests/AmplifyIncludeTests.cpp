/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/amplify/AmplifyClient.h>
#include <aws/amplify/AmplifyEndpointProvider.h>
#include <aws/amplify/AmplifyEndpointRules.h>
#include <aws/amplify/AmplifyErrorMarshaller.h>
#include <aws/amplify/AmplifyErrors.h>
#include <aws/amplify/AmplifyRequest.h>
#include <aws/amplify/AmplifyServiceClientModel.h>
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/App.h>
#include <aws/amplify/model/Artifact.h>
#include <aws/amplify/model/AutoBranchCreationConfig.h>
#include <aws/amplify/model/Backend.h>
#include <aws/amplify/model/BackendEnvironment.h>
#include <aws/amplify/model/Branch.h>
#include <aws/amplify/model/BuildComputeType.h>
#include <aws/amplify/model/CacheConfig.h>
#include <aws/amplify/model/CacheConfigType.h>
#include <aws/amplify/model/Certificate.h>
#include <aws/amplify/model/CertificateSettings.h>
#include <aws/amplify/model/CertificateType.h>
#include <aws/amplify/model/CreateAppRequest.h>
#include <aws/amplify/model/CreateAppResult.h>
#include <aws/amplify/model/CreateBackendEnvironmentRequest.h>
#include <aws/amplify/model/CreateBackendEnvironmentResult.h>
#include <aws/amplify/model/CreateBranchRequest.h>
#include <aws/amplify/model/CreateBranchResult.h>
#include <aws/amplify/model/CreateDeploymentRequest.h>
#include <aws/amplify/model/CreateDeploymentResult.h>
#include <aws/amplify/model/CreateDomainAssociationRequest.h>
#include <aws/amplify/model/CreateDomainAssociationResult.h>
#include <aws/amplify/model/CreateWebhookRequest.h>
#include <aws/amplify/model/CreateWebhookResult.h>
#include <aws/amplify/model/CustomRule.h>
#include <aws/amplify/model/DeleteAppRequest.h>
#include <aws/amplify/model/DeleteAppResult.h>
#include <aws/amplify/model/DeleteBackendEnvironmentRequest.h>
#include <aws/amplify/model/DeleteBackendEnvironmentResult.h>
#include <aws/amplify/model/DeleteBranchRequest.h>
#include <aws/amplify/model/DeleteBranchResult.h>
#include <aws/amplify/model/DeleteDomainAssociationRequest.h>
#include <aws/amplify/model/DeleteDomainAssociationResult.h>
#include <aws/amplify/model/DeleteJobRequest.h>
#include <aws/amplify/model/DeleteJobResult.h>
#include <aws/amplify/model/DeleteWebhookRequest.h>
#include <aws/amplify/model/DeleteWebhookResult.h>
#include <aws/amplify/model/DomainAssociation.h>
#include <aws/amplify/model/DomainStatus.h>
#include <aws/amplify/model/GenerateAccessLogsRequest.h>
#include <aws/amplify/model/GenerateAccessLogsResult.h>
#include <aws/amplify/model/GetAppRequest.h>
#include <aws/amplify/model/GetAppResult.h>
#include <aws/amplify/model/GetArtifactUrlRequest.h>
#include <aws/amplify/model/GetArtifactUrlResult.h>
#include <aws/amplify/model/GetBackendEnvironmentRequest.h>
#include <aws/amplify/model/GetBackendEnvironmentResult.h>
#include <aws/amplify/model/GetBranchRequest.h>
#include <aws/amplify/model/GetBranchResult.h>
#include <aws/amplify/model/GetDomainAssociationRequest.h>
#include <aws/amplify/model/GetDomainAssociationResult.h>
#include <aws/amplify/model/GetJobRequest.h>
#include <aws/amplify/model/GetJobResult.h>
#include <aws/amplify/model/GetWebhookRequest.h>
#include <aws/amplify/model/GetWebhookResult.h>
#include <aws/amplify/model/Job.h>
#include <aws/amplify/model/JobConfig.h>
#include <aws/amplify/model/JobStatus.h>
#include <aws/amplify/model/JobSummary.h>
#include <aws/amplify/model/JobType.h>
#include <aws/amplify/model/ListAppsRequest.h>
#include <aws/amplify/model/ListAppsResult.h>
#include <aws/amplify/model/ListArtifactsRequest.h>
#include <aws/amplify/model/ListArtifactsResult.h>
#include <aws/amplify/model/ListBackendEnvironmentsRequest.h>
#include <aws/amplify/model/ListBackendEnvironmentsResult.h>
#include <aws/amplify/model/ListBranchesRequest.h>
#include <aws/amplify/model/ListBranchesResult.h>
#include <aws/amplify/model/ListDomainAssociationsRequest.h>
#include <aws/amplify/model/ListDomainAssociationsResult.h>
#include <aws/amplify/model/ListJobsRequest.h>
#include <aws/amplify/model/ListJobsResult.h>
#include <aws/amplify/model/ListTagsForResourceRequest.h>
#include <aws/amplify/model/ListTagsForResourceResult.h>
#include <aws/amplify/model/ListWebhooksRequest.h>
#include <aws/amplify/model/ListWebhooksResult.h>
#include <aws/amplify/model/Platform.h>
#include <aws/amplify/model/ProductionBranch.h>
#include <aws/amplify/model/RepositoryCloneMethod.h>
#include <aws/amplify/model/ResourceNotFoundException.h>
#include <aws/amplify/model/SourceUrlType.h>
#include <aws/amplify/model/Stage.h>
#include <aws/amplify/model/StartDeploymentRequest.h>
#include <aws/amplify/model/StartDeploymentResult.h>
#include <aws/amplify/model/StartJobRequest.h>
#include <aws/amplify/model/StartJobResult.h>
#include <aws/amplify/model/Step.h>
#include <aws/amplify/model/StopJobRequest.h>
#include <aws/amplify/model/StopJobResult.h>
#include <aws/amplify/model/SubDomain.h>
#include <aws/amplify/model/SubDomainSetting.h>
#include <aws/amplify/model/TagResourceRequest.h>
#include <aws/amplify/model/TagResourceResult.h>
#include <aws/amplify/model/UntagResourceRequest.h>
#include <aws/amplify/model/UntagResourceResult.h>
#include <aws/amplify/model/UpdateAppRequest.h>
#include <aws/amplify/model/UpdateAppResult.h>
#include <aws/amplify/model/UpdateBranchRequest.h>
#include <aws/amplify/model/UpdateBranchResult.h>
#include <aws/amplify/model/UpdateDomainAssociationRequest.h>
#include <aws/amplify/model/UpdateDomainAssociationResult.h>
#include <aws/amplify/model/UpdateStatus.h>
#include <aws/amplify/model/UpdateWebhookRequest.h>
#include <aws/amplify/model/UpdateWebhookResult.h>
#include <aws/amplify/model/WafConfiguration.h>
#include <aws/amplify/model/WafStatus.h>
#include <aws/amplify/model/Webhook.h>

using AmplifyIncludeTest = ::testing::Test;

TEST_F(AmplifyIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Amplify::AmplifyClient>("AmplifyIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
