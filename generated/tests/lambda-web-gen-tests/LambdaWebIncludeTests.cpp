/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/lambda-web/LambdaWebClient.h>
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
#include <aws/lambda-web/model/GetWebAccountSettingsRequest.h>
#include <aws/lambda-web/model/GetWebAccountSettingsResult.h>
#include <aws/lambda-web/model/ThrottlingException.h>

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
