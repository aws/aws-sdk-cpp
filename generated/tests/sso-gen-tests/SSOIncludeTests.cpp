/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/sso/SSOClient.h>
#include <aws/sso/SSOEndpointProvider.h>
#include <aws/sso/SSOEndpointRules.h>
#include <aws/sso/SSOErrorMarshaller.h>
#include <aws/sso/SSOErrors.h>
#include <aws/sso/SSORequest.h>
#include <aws/sso/SSOServiceClientModel.h>
#include <aws/sso/SSO_EXPORTS.h>
#include <aws/sso/model/AccountInfo.h>
#include <aws/sso/model/GetRoleCredentialsRequest.h>
#include <aws/sso/model/GetRoleCredentialsResult.h>
#include <aws/sso/model/ListAccountRolesRequest.h>
#include <aws/sso/model/ListAccountRolesResult.h>
#include <aws/sso/model/ListAccountsRequest.h>
#include <aws/sso/model/ListAccountsResult.h>
#include <aws/sso/model/LogoutRequest.h>
#include <aws/sso/model/RoleCredentials.h>
#include <aws/sso/model/RoleInfo.h>

using SSOIncludeTest = ::testing::Test;

TEST_F(SSOIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SSO::SSOClient>("SSOIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
