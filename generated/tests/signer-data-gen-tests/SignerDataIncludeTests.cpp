/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/signer-data/SignerDataClient.h>
#include <aws/signer-data/SignerDataEndpointProvider.h>
#include <aws/signer-data/SignerDataEndpointRules.h>
#include <aws/signer-data/SignerDataErrorMarshaller.h>
#include <aws/signer-data/SignerDataErrors.h>
#include <aws/signer-data/SignerDataRequest.h>
#include <aws/signer-data/SignerDataServiceClientModel.h>
#include <aws/signer-data/SignerData_EXPORTS.h>
#include <aws/signer-data/model/AccessDeniedException.h>
#include <aws/signer-data/model/GetRevocationStatusRequest.h>
#include <aws/signer-data/model/GetRevocationStatusResult.h>
#include <aws/signer-data/model/InternalServiceErrorException.h>
#include <aws/signer-data/model/TooManyRequestsException.h>
#include <aws/signer-data/model/ValidationException.h>

using SignerDataIncludeTest = ::testing::Test;

TEST_F(SignerDataIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SignerData::SignerDataClient>("SignerDataIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
