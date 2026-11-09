/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/account-access-runtime/AccountAccessRuntimeClient.h>
#include <aws/account-access-runtime/AccountAccessRuntimeClientPagination.h>
#include <aws/account-access-runtime/AccountAccessRuntimeEndpointProvider.h>
#include <aws/account-access-runtime/AccountAccessRuntimeErrorMarshaller.h>
#include <aws/account-access-runtime/AccountAccessRuntimeErrors.h>
#include <aws/account-access-runtime/AccountAccessRuntimePaginationBase.h>
#include <aws/account-access-runtime/AccountAccessRuntimeRequest.h>
#include <aws/account-access-runtime/AccountAccessRuntimeServiceClientModel.h>
#include <aws/account-access-runtime/AccountAccessRuntimeWaiter.h>
#include <aws/account-access-runtime/AccountAccessRuntime_EXPORTS.h>
#include <aws/account-access-runtime/internal/AccountAccessRuntimeEndpointRules.h>
#include <aws/account-access-runtime/model/AccessDetails.h>
#include <aws/account-access-runtime/model/AccessType.h>
#include <aws/account-access-runtime/model/CredentialsDetails.h>
#include <aws/account-access-runtime/model/GetRoleCredentialsRequest.h>
#include <aws/account-access-runtime/model/GetRoleCredentialsResult.h>
#include <aws/account-access-runtime/model/ListRolesPaginationTraits.h>
#include <aws/account-access-runtime/model/ListRolesRequest.h>
#include <aws/account-access-runtime/model/ListRolesResult.h>
#include <aws/account-access-runtime/model/ProgrammaticAccessDetails.h>

using AccountAccessRuntimeIncludeTest = ::testing::Test;

TEST_F(AccountAccessRuntimeIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::AccountAccessRuntime::AccountAccessRuntimeClient>("AccountAccessRuntimeIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
