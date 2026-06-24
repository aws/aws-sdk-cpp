/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/signin/SigninClient.h>
#include <aws/signin/SigninEndpointProvider.h>
#include <aws/signin/SigninEndpointRules.h>
#include <aws/signin/SigninErrorMarshaller.h>
#include <aws/signin/SigninErrors.h>
#include <aws/signin/SigninRequest.h>
#include <aws/signin/SigninServiceClientModel.h>
#include <aws/signin/Signin_EXPORTS.h>
#include <aws/signin/model/AccessDeniedException.h>
#include <aws/signin/model/AccessToken.h>
#include <aws/signin/model/ConflictException.h>
#include <aws/signin/model/CreateOAuth2TokenRequest.h>
#include <aws/signin/model/CreateOAuth2TokenRequestBody.h>
#include <aws/signin/model/CreateOAuth2TokenResponseBody.h>
#include <aws/signin/model/CreateOAuth2TokenResult.h>
#include <aws/signin/model/DeleteConsoleAuthorizationConfigurationRequest.h>
#include <aws/signin/model/DeleteConsoleAuthorizationConfigurationResult.h>
#include <aws/signin/model/DeleteResourcePermissionStatementRequest.h>
#include <aws/signin/model/DeleteResourcePermissionStatementResult.h>
#include <aws/signin/model/GetConsoleAuthorizationConfigurationRequest.h>
#include <aws/signin/model/GetConsoleAuthorizationConfigurationResult.h>
#include <aws/signin/model/GetResourcePolicyRequest.h>
#include <aws/signin/model/GetResourcePolicyResult.h>
#include <aws/signin/model/InternalServerException.h>
#include <aws/signin/model/ListResourcePermissionStatementsRequest.h>
#include <aws/signin/model/ListResourcePermissionStatementsResult.h>
#include <aws/signin/model/OAuth2ErrorCode.h>
#include <aws/signin/model/PermissionStatementSummary.h>
#include <aws/signin/model/PolicyStatement.h>
#include <aws/signin/model/PutConsoleAuthorizationConfigurationRequest.h>
#include <aws/signin/model/PutConsoleAuthorizationConfigurationResult.h>
#include <aws/signin/model/PutResourcePermissionStatementRequest.h>
#include <aws/signin/model/PutResourcePermissionStatementResult.h>
#include <aws/signin/model/ResourceNotFoundException.h>
#include <aws/signin/model/ServiceQuotaExceededException.h>
#include <aws/signin/model/SigninResourceBasedPolicy.h>
#include <aws/signin/model/TooManyRequestsError.h>
#include <aws/signin/model/ValidationException.h>

using SigninIncludeTest = ::testing::Test;

TEST_F(SigninIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Signin::SigninClient>("SigninIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
