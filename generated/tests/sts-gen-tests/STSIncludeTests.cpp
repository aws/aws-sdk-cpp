/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/sts/STSClient.h>
#include <aws/sts/STSEndpointProvider.h>
#include <aws/sts/STSEndpointRules.h>
#include <aws/sts/STSErrorMarshaller.h>
#include <aws/sts/STSErrors.h>
#include <aws/sts/STSRequest.h>
#include <aws/sts/STSServiceClientModel.h>
#include <aws/sts/STS_EXPORTS.h>
#include <aws/sts/model/AssumeRoleRequest.h>
#include <aws/sts/model/AssumeRoleResult.h>
#include <aws/sts/model/AssumeRoleWithSAMLRequest.h>
#include <aws/sts/model/AssumeRoleWithSAMLResult.h>
#include <aws/sts/model/AssumeRoleWithWebIdentityRequest.h>
#include <aws/sts/model/AssumeRoleWithWebIdentityResult.h>
#include <aws/sts/model/AssumeRootRequest.h>
#include <aws/sts/model/AssumeRootResult.h>
#include <aws/sts/model/AssumedRoleUser.h>
#include <aws/sts/model/Credentials.h>
#include <aws/sts/model/DecodeAuthorizationMessageRequest.h>
#include <aws/sts/model/DecodeAuthorizationMessageResult.h>
#include <aws/sts/model/FederatedUser.h>
#include <aws/sts/model/GetAccessKeyInfoRequest.h>
#include <aws/sts/model/GetAccessKeyInfoResult.h>
#include <aws/sts/model/GetCallerIdentityRequest.h>
#include <aws/sts/model/GetCallerIdentityResult.h>
#include <aws/sts/model/GetFederationTokenRequest.h>
#include <aws/sts/model/GetFederationTokenResult.h>
#include <aws/sts/model/GetSessionTokenRequest.h>
#include <aws/sts/model/GetSessionTokenResult.h>
#include <aws/sts/model/PolicyDescriptorType.h>
#include <aws/sts/model/ProvidedContext.h>
#include <aws/sts/model/ResponseMetadata.h>
#include <aws/sts/model/Tag.h>

using STSIncludeTest = ::testing::Test;

TEST_F(STSIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::STS::STSClient>("STSIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
