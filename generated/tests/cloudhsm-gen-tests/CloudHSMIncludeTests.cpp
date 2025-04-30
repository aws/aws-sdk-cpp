/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/cloudhsm/CloudHSMClient.h>
#include <aws/cloudhsm/CloudHSMEndpointProvider.h>
#include <aws/cloudhsm/CloudHSMEndpointRules.h>
#include <aws/cloudhsm/CloudHSMErrorMarshaller.h>
#include <aws/cloudhsm/CloudHSMErrors.h>
#include <aws/cloudhsm/CloudHSMRequest.h>
#include <aws/cloudhsm/CloudHSMServiceClientModel.h>
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/cloudhsm/model/ClientVersion.h>
#include <aws/cloudhsm/model/CloudHsmObjectState.h>
#include <aws/cloudhsm/model/HsmStatus.h>
#include <aws/cloudhsm/model/SubscriptionType.h>
#include <aws/cloudhsm/model/Tag.h>

using CloudHSMIncludeTest = ::testing::Test;

TEST_F(CloudHSMIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::CloudHSM::CloudHSMClient>("CloudHSMIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
