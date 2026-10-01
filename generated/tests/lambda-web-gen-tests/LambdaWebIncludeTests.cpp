/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/lambda-web/LambdaWebClient.h>
#include <aws/lambda-web/LambdaWebClientPagination.h>
#include <aws/lambda-web/LambdaWebEndpointProvider.h>
#include <aws/lambda-web/LambdaWebErrorMarshaller.h>
#include <aws/lambda-web/LambdaWebErrors.h>
#include <aws/lambda-web/LambdaWebPaginationBase.h>
#include <aws/lambda-web/LambdaWebRequest.h>
#include <aws/lambda-web/LambdaWebServiceClientModel.h>
#include <aws/lambda-web/LambdaWebWaiter.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/internal/LambdaWebEndpointRules.h>
#include <aws/lambda-web/model/AccountQuotas.h>
#include <aws/lambda-web/model/AccountUsage.h>
#include <aws/lambda-web/model/ApplicationLogLevel.h>
#include <aws/lambda-web/model/AuthType.h>
#include <aws/lambda-web/model/AutoDeploymentMode.h>
#include <aws/lambda-web/model/BuildConfig.h>
#include <aws/lambda-web/model/CodeConfig.h>
#include <aws/lambda-web/model/ConflictException.h>
#include <aws/lambda-web/model/CreateWebFunctionEndpointRequest.h>
#include <aws/lambda-web/model/CreateWebFunctionEndpointResult.h>
#include <aws/lambda-web/model/CreateWebFunctionRequest.h>
#include <aws/lambda-web/model/CreateWebFunctionResult.h>
#include <aws/lambda-web/model/CreateWebFunctionRevisionRequest.h>
#include <aws/lambda-web/model/CreateWebFunctionRevisionResult.h>
#include <aws/lambda-web/model/DeleteResourcePolicyRequest.h>
#include <aws/lambda-web/model/DeleteWebFunctionEndpointRequest.h>
#include <aws/lambda-web/model/DeleteWebFunctionRequest.h>
#include <aws/lambda-web/model/DeleteWebFunctionRevisionRequest.h>
#include <aws/lambda-web/model/EndpointConfig.h>
#include <aws/lambda-web/model/EndpointState.h>
#include <aws/lambda-web/model/EndpointType.h>
#include <aws/lambda-web/model/EndpointUpdateStatus.h>
#include <aws/lambda-web/model/Filter.h>
#include <aws/lambda-web/model/FunctionEndpointSummary.h>
#include <aws/lambda-web/model/FunctionRevisionSummary.h>
#include <aws/lambda-web/model/FunctionState.h>
#include <aws/lambda-web/model/FunctionSummary.h>
#include <aws/lambda-web/model/GetResourcePolicyRequest.h>
#include <aws/lambda-web/model/GetResourcePolicyResult.h>
#include <aws/lambda-web/model/GetWebAccountSettingsRequest.h>
#include <aws/lambda-web/model/GetWebAccountSettingsResult.h>
#include <aws/lambda-web/model/GetWebFunctionEndpointRequest.h>
#include <aws/lambda-web/model/GetWebFunctionEndpointResult.h>
#include <aws/lambda-web/model/GetWebFunctionRequest.h>
#include <aws/lambda-web/model/GetWebFunctionResult.h>
#include <aws/lambda-web/model/GetWebFunctionRevisionRequest.h>
#include <aws/lambda-web/model/GetWebFunctionRevisionResult.h>
#include <aws/lambda-web/model/ListTagsRequest.h>
#include <aws/lambda-web/model/ListTagsResult.h>
#include <aws/lambda-web/model/ListWebFunctionEndpointsPaginationTraits.h>
#include <aws/lambda-web/model/ListWebFunctionEndpointsRequest.h>
#include <aws/lambda-web/model/ListWebFunctionEndpointsResult.h>
#include <aws/lambda-web/model/ListWebFunctionRevisionsPaginationTraits.h>
#include <aws/lambda-web/model/ListWebFunctionRevisionsRequest.h>
#include <aws/lambda-web/model/ListWebFunctionRevisionsResult.h>
#include <aws/lambda-web/model/ListWebFunctionsPaginationTraits.h>
#include <aws/lambda-web/model/ListWebFunctionsRequest.h>
#include <aws/lambda-web/model/ListWebFunctionsResult.h>
#include <aws/lambda-web/model/LoggingConfig.h>
#include <aws/lambda-web/model/PutResourcePolicyRequest.h>
#include <aws/lambda-web/model/PutResourcePolicyResult.h>
#include <aws/lambda-web/model/RegionalEndpoint.h>
#include <aws/lambda-web/model/ResourceNotFoundException.h>
#include <aws/lambda-web/model/RevisionConfig.h>
#include <aws/lambda-web/model/RevisionError.h>
#include <aws/lambda-web/model/RevisionState.h>
#include <aws/lambda-web/model/RevisionWeight.h>
#include <aws/lambda-web/model/RuntimeConfig.h>
#include <aws/lambda-web/model/S3Object.h>
#include <aws/lambda-web/model/ScalingConfig.h>
#include <aws/lambda-web/model/ServiceConfig.h>
#include <aws/lambda-web/model/ServiceQuotaExceededException.h>
#include <aws/lambda-web/model/SystemLogLevel.h>
#include <aws/lambda-web/model/TagResourceRequest.h>
#include <aws/lambda-web/model/TelemetryConfig.h>
#include <aws/lambda-web/model/ThrottleConfig.h>
#include <aws/lambda-web/model/ThrottlingException.h>
#include <aws/lambda-web/model/UntagResourceRequest.h>
#include <aws/lambda-web/model/UpdateWebFunctionEndpointRequest.h>
#include <aws/lambda-web/model/UpdateWebFunctionEndpointResult.h>

using LambdaWebIncludeTest = ::testing::Test;

TEST_F(LambdaWebIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::LambdaWeb::LambdaWebClient>("LambdaWebIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
