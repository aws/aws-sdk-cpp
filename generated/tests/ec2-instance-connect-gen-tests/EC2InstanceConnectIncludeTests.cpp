/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/ec2-instance-connect/EC2InstanceConnectClient.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectEndpointProvider.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectEndpointRules.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectErrorMarshaller.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectErrors.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectRequest.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectServiceClientModel.h>
#include <aws/ec2-instance-connect/EC2InstanceConnect_EXPORTS.h>
#include <aws/ec2-instance-connect/model/SendSSHPublicKeyRequest.h>
#include <aws/ec2-instance-connect/model/SendSSHPublicKeyResult.h>
#include <aws/ec2-instance-connect/model/SendSerialConsoleSSHPublicKeyRequest.h>
#include <aws/ec2-instance-connect/model/SendSerialConsoleSSHPublicKeyResult.h>

using EC2InstanceConnectIncludeTest = ::testing::Test;

TEST_F(EC2InstanceConnectIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::EC2InstanceConnect::EC2InstanceConnectClient>("EC2InstanceConnectIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
