/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesClient.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesEndpointProvider.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesEndpointRules.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesErrorMarshaller.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesErrors.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesRequest.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesServiceClientModel.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/model/ApiGatewayEndpointType.h>
#include <aws/migration-hub-refactor-spaces/model/ApiGatewayProxyConfig.h>
#include <aws/migration-hub-refactor-spaces/model/ApiGatewayProxyInput.h>
#include <aws/migration-hub-refactor-spaces/model/ApiGatewayProxySummary.h>
#include <aws/migration-hub-refactor-spaces/model/ApplicationState.h>
#include <aws/migration-hub-refactor-spaces/model/ApplicationSummary.h>
#include <aws/migration-hub-refactor-spaces/model/ConflictException.h>
#include <aws/migration-hub-refactor-spaces/model/CreateApplicationRequest.h>
#include <aws/migration-hub-refactor-spaces/model/CreateApplicationResult.h>
#include <aws/migration-hub-refactor-spaces/model/CreateEnvironmentRequest.h>
#include <aws/migration-hub-refactor-spaces/model/CreateEnvironmentResult.h>
#include <aws/migration-hub-refactor-spaces/model/CreateRouteRequest.h>
#include <aws/migration-hub-refactor-spaces/model/CreateRouteResult.h>
#include <aws/migration-hub-refactor-spaces/model/CreateServiceRequest.h>
#include <aws/migration-hub-refactor-spaces/model/CreateServiceResult.h>
#include <aws/migration-hub-refactor-spaces/model/DefaultRouteInput.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteApplicationRequest.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteApplicationResult.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteEnvironmentRequest.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteEnvironmentResult.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteResourcePolicyRequest.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteResourcePolicyResult.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteRouteRequest.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteRouteResult.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteServiceRequest.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteServiceResult.h>
#include <aws/migration-hub-refactor-spaces/model/EnvironmentState.h>
#include <aws/migration-hub-refactor-spaces/model/EnvironmentSummary.h>
#include <aws/migration-hub-refactor-spaces/model/EnvironmentVpc.h>
#include <aws/migration-hub-refactor-spaces/model/ErrorCode.h>
#include <aws/migration-hub-refactor-spaces/model/ErrorResourceType.h>
#include <aws/migration-hub-refactor-spaces/model/ErrorResponse.h>
#include <aws/migration-hub-refactor-spaces/model/GetApplicationRequest.h>
#include <aws/migration-hub-refactor-spaces/model/GetApplicationResult.h>
#include <aws/migration-hub-refactor-spaces/model/GetEnvironmentRequest.h>
#include <aws/migration-hub-refactor-spaces/model/GetEnvironmentResult.h>
#include <aws/migration-hub-refactor-spaces/model/GetResourcePolicyRequest.h>
#include <aws/migration-hub-refactor-spaces/model/GetResourcePolicyResult.h>
#include <aws/migration-hub-refactor-spaces/model/GetRouteRequest.h>
#include <aws/migration-hub-refactor-spaces/model/GetRouteResult.h>
#include <aws/migration-hub-refactor-spaces/model/GetServiceRequest.h>
#include <aws/migration-hub-refactor-spaces/model/GetServiceResult.h>
#include <aws/migration-hub-refactor-spaces/model/HttpMethod.h>
#include <aws/migration-hub-refactor-spaces/model/LambdaEndpointConfig.h>
#include <aws/migration-hub-refactor-spaces/model/LambdaEndpointInput.h>
#include <aws/migration-hub-refactor-spaces/model/LambdaEndpointSummary.h>
#include <aws/migration-hub-refactor-spaces/model/ListApplicationsRequest.h>
#include <aws/migration-hub-refactor-spaces/model/ListApplicationsResult.h>
#include <aws/migration-hub-refactor-spaces/model/ListEnvironmentVpcsRequest.h>
#include <aws/migration-hub-refactor-spaces/model/ListEnvironmentVpcsResult.h>
#include <aws/migration-hub-refactor-spaces/model/ListEnvironmentsRequest.h>
#include <aws/migration-hub-refactor-spaces/model/ListEnvironmentsResult.h>
#include <aws/migration-hub-refactor-spaces/model/ListRoutesRequest.h>
#include <aws/migration-hub-refactor-spaces/model/ListRoutesResult.h>
#include <aws/migration-hub-refactor-spaces/model/ListServicesRequest.h>
#include <aws/migration-hub-refactor-spaces/model/ListServicesResult.h>
#include <aws/migration-hub-refactor-spaces/model/ListTagsForResourceRequest.h>
#include <aws/migration-hub-refactor-spaces/model/ListTagsForResourceResult.h>
#include <aws/migration-hub-refactor-spaces/model/NetworkFabricType.h>
#include <aws/migration-hub-refactor-spaces/model/ProxyType.h>
#include <aws/migration-hub-refactor-spaces/model/PutResourcePolicyRequest.h>
#include <aws/migration-hub-refactor-spaces/model/PutResourcePolicyResult.h>
#include <aws/migration-hub-refactor-spaces/model/ResourceNotFoundException.h>
#include <aws/migration-hub-refactor-spaces/model/RouteActivationState.h>
#include <aws/migration-hub-refactor-spaces/model/RouteState.h>
#include <aws/migration-hub-refactor-spaces/model/RouteSummary.h>
#include <aws/migration-hub-refactor-spaces/model/RouteType.h>
#include <aws/migration-hub-refactor-spaces/model/ServiceEndpointType.h>
#include <aws/migration-hub-refactor-spaces/model/ServiceQuotaExceededException.h>
#include <aws/migration-hub-refactor-spaces/model/ServiceState.h>
#include <aws/migration-hub-refactor-spaces/model/ServiceSummary.h>
#include <aws/migration-hub-refactor-spaces/model/TagResourceRequest.h>
#include <aws/migration-hub-refactor-spaces/model/TagResourceResult.h>
#include <aws/migration-hub-refactor-spaces/model/ThrottlingException.h>
#include <aws/migration-hub-refactor-spaces/model/UntagResourceRequest.h>
#include <aws/migration-hub-refactor-spaces/model/UntagResourceResult.h>
#include <aws/migration-hub-refactor-spaces/model/UpdateRouteRequest.h>
#include <aws/migration-hub-refactor-spaces/model/UpdateRouteResult.h>
#include <aws/migration-hub-refactor-spaces/model/UriPathRouteInput.h>
#include <aws/migration-hub-refactor-spaces/model/UrlEndpointConfig.h>
#include <aws/migration-hub-refactor-spaces/model/UrlEndpointInput.h>
#include <aws/migration-hub-refactor-spaces/model/UrlEndpointSummary.h>

using MigrationHubRefactorSpacesIncludeTest = ::testing::Test;

TEST_F(MigrationHubRefactorSpacesIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClient>("MigrationHubRefactorSpacesIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
