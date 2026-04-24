/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/eks-auth/EKSAuthClient.h>
#include <aws/eks-auth/EKSAuthEndpointProvider.h>
#include <aws/eks-auth/EKSAuthEndpointRules.h>
#include <aws/eks-auth/EKSAuthErrorMarshaller.h>
#include <aws/eks-auth/EKSAuthErrors.h>
#include <aws/eks-auth/EKSAuthRequest.h>
#include <aws/eks-auth/EKSAuthServiceClientModel.h>
#include <aws/eks-auth/EKSAuth_EXPORTS.h>
#include <aws/eks-auth/model/AssumeRoleForPodIdentityRequest.h>
#include <aws/eks-auth/model/AssumeRoleForPodIdentityResult.h>
#include <aws/eks-auth/model/AssumedRoleUser.h>
#include <aws/eks-auth/model/Credentials.h>
#include <aws/eks-auth/model/PodIdentityAssociation.h>
#include <aws/eks-auth/model/Subject.h>

using EKSAuthIncludeTest = ::testing::Test;

TEST_F(EKSAuthIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::EKSAuth::EKSAuthClient>("EKSAuthIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
