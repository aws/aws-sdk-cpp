/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/account/AccountClient.h>
#include <aws/account/AccountEndpointProvider.h>
#include <aws/account/AccountEndpointRules.h>
#include <aws/account/AccountErrorMarshaller.h>
#include <aws/account/AccountErrors.h>
#include <aws/account/AccountRequest.h>
#include <aws/account/AccountServiceClientModel.h>
#include <aws/account/Account_EXPORTS.h>
#include <aws/account/model/AcceptPrimaryEmailUpdateRequest.h>
#include <aws/account/model/AcceptPrimaryEmailUpdateResult.h>
#include <aws/account/model/AccessDeniedException.h>
#include <aws/account/model/AlternateContact.h>
#include <aws/account/model/AlternateContactType.h>
#include <aws/account/model/ConflictException.h>
#include <aws/account/model/ContactInformation.h>
#include <aws/account/model/DeleteAlternateContactRequest.h>
#include <aws/account/model/DisableRegionRequest.h>
#include <aws/account/model/EnableRegionRequest.h>
#include <aws/account/model/GetAccountInformationRequest.h>
#include <aws/account/model/GetAccountInformationResult.h>
#include <aws/account/model/GetAlternateContactRequest.h>
#include <aws/account/model/GetAlternateContactResult.h>
#include <aws/account/model/GetContactInformationRequest.h>
#include <aws/account/model/GetContactInformationResult.h>
#include <aws/account/model/GetPrimaryEmailRequest.h>
#include <aws/account/model/GetPrimaryEmailResult.h>
#include <aws/account/model/GetRegionOptStatusRequest.h>
#include <aws/account/model/GetRegionOptStatusResult.h>
#include <aws/account/model/InternalServerException.h>
#include <aws/account/model/ListRegionsRequest.h>
#include <aws/account/model/ListRegionsResult.h>
#include <aws/account/model/PrimaryEmailUpdateStatus.h>
#include <aws/account/model/PutAccountNameRequest.h>
#include <aws/account/model/PutAlternateContactRequest.h>
#include <aws/account/model/PutContactInformationRequest.h>
#include <aws/account/model/Region.h>
#include <aws/account/model/RegionOptStatus.h>
#include <aws/account/model/ResourceNotFoundException.h>
#include <aws/account/model/StartPrimaryEmailUpdateRequest.h>
#include <aws/account/model/StartPrimaryEmailUpdateResult.h>
#include <aws/account/model/TooManyRequestsException.h>
#include <aws/account/model/ValidationException.h>
#include <aws/account/model/ValidationExceptionField.h>
#include <aws/account/model/ValidationExceptionReason.h>

using AccountIncludeTest = ::testing::Test;

TEST_F(AccountIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Account::AccountClient>("AccountIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
