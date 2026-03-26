/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/uxc/UxcClient.h>
#include <aws/uxc/UxcEndpointProvider.h>
#include <aws/uxc/UxcEndpointRules.h>
#include <aws/uxc/UxcErrorMarshaller.h>
#include <aws/uxc/UxcErrors.h>
#include <aws/uxc/UxcRequest.h>
#include <aws/uxc/UxcServiceClientModel.h>
#include <aws/uxc/Uxc_EXPORTS.h>
#include <aws/uxc/model/AccountColor.h>
#include <aws/uxc/model/GetAccountCustomizationsRequest.h>
#include <aws/uxc/model/GetAccountCustomizationsResult.h>
#include <aws/uxc/model/ListServicesRequest.h>
#include <aws/uxc/model/ListServicesResult.h>
#include <aws/uxc/model/UpdateAccountCustomizationsRequest.h>
#include <aws/uxc/model/UpdateAccountCustomizationsResult.h>
#include <aws/uxc/model/ValidationException.h>
#include <aws/uxc/model/ValidationExceptionField.h>

using UxcIncludeTest = ::testing::Test;

TEST_F(UxcIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::uxc::UxcClient>("UxcIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
