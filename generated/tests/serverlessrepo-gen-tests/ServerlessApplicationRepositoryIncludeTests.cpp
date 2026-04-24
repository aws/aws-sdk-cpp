/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/serverlessrepo/ServerlessApplicationRepositoryClient.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryEndpointProvider.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryEndpointRules.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryErrorMarshaller.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryErrors.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryRequest.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryServiceClientModel.h>
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/serverlessrepo/model/ApplicationDependencySummary.h>
#include <aws/serverlessrepo/model/ApplicationPolicyStatement.h>
#include <aws/serverlessrepo/model/ApplicationSummary.h>
#include <aws/serverlessrepo/model/BadRequestException.h>
#include <aws/serverlessrepo/model/Capability.h>
#include <aws/serverlessrepo/model/ConflictException.h>
#include <aws/serverlessrepo/model/CreateApplicationRequest.h>
#include <aws/serverlessrepo/model/CreateApplicationResult.h>
#include <aws/serverlessrepo/model/CreateApplicationVersionRequest.h>
#include <aws/serverlessrepo/model/CreateApplicationVersionResult.h>
#include <aws/serverlessrepo/model/CreateCloudFormationChangeSetRequest.h>
#include <aws/serverlessrepo/model/CreateCloudFormationChangeSetResult.h>
#include <aws/serverlessrepo/model/CreateCloudFormationTemplateRequest.h>
#include <aws/serverlessrepo/model/CreateCloudFormationTemplateResult.h>
#include <aws/serverlessrepo/model/DeleteApplicationRequest.h>
#include <aws/serverlessrepo/model/ForbiddenException.h>
#include <aws/serverlessrepo/model/GetApplicationPolicyRequest.h>
#include <aws/serverlessrepo/model/GetApplicationPolicyResult.h>
#include <aws/serverlessrepo/model/GetApplicationRequest.h>
#include <aws/serverlessrepo/model/GetApplicationResult.h>
#include <aws/serverlessrepo/model/GetCloudFormationTemplateRequest.h>
#include <aws/serverlessrepo/model/GetCloudFormationTemplateResult.h>
#include <aws/serverlessrepo/model/InternalServerErrorException.h>
#include <aws/serverlessrepo/model/ListApplicationDependenciesRequest.h>
#include <aws/serverlessrepo/model/ListApplicationDependenciesResult.h>
#include <aws/serverlessrepo/model/ListApplicationVersionsRequest.h>
#include <aws/serverlessrepo/model/ListApplicationVersionsResult.h>
#include <aws/serverlessrepo/model/ListApplicationsRequest.h>
#include <aws/serverlessrepo/model/ListApplicationsResult.h>
#include <aws/serverlessrepo/model/NotFoundException.h>
#include <aws/serverlessrepo/model/ParameterDefinition.h>
#include <aws/serverlessrepo/model/ParameterValue.h>
#include <aws/serverlessrepo/model/PutApplicationPolicyRequest.h>
#include <aws/serverlessrepo/model/PutApplicationPolicyResult.h>
#include <aws/serverlessrepo/model/RollbackConfiguration.h>
#include <aws/serverlessrepo/model/RollbackTrigger.h>
#include <aws/serverlessrepo/model/Status.h>
#include <aws/serverlessrepo/model/Tag.h>
#include <aws/serverlessrepo/model/TooManyRequestsException.h>
#include <aws/serverlessrepo/model/UnshareApplicationRequest.h>
#include <aws/serverlessrepo/model/UpdateApplicationRequest.h>
#include <aws/serverlessrepo/model/UpdateApplicationResult.h>
#include <aws/serverlessrepo/model/Version.h>
#include <aws/serverlessrepo/model/VersionSummary.h>

using ServerlessApplicationRepositoryIncludeTest = ::testing::Test;

TEST_F(ServerlessApplicationRepositoryIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ServerlessApplicationRepository::ServerlessApplicationRepositoryClient>("ServerlessApplicationRepositoryIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
