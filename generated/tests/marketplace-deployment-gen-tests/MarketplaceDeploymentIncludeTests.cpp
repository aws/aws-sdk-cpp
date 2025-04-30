/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/marketplace-deployment/MarketplaceDeploymentClient.h>
#include <aws/marketplace-deployment/MarketplaceDeploymentEndpointProvider.h>
#include <aws/marketplace-deployment/MarketplaceDeploymentEndpointRules.h>
#include <aws/marketplace-deployment/MarketplaceDeploymentErrorMarshaller.h>
#include <aws/marketplace-deployment/MarketplaceDeploymentErrors.h>
#include <aws/marketplace-deployment/MarketplaceDeploymentRequest.h>
#include <aws/marketplace-deployment/MarketplaceDeploymentServiceClientModel.h>
#include <aws/marketplace-deployment/MarketplaceDeployment_EXPORTS.h>
#include <aws/marketplace-deployment/model/ConflictException.h>
#include <aws/marketplace-deployment/model/DeploymentParameterInput.h>
#include <aws/marketplace-deployment/model/ListTagsForResourceRequest.h>
#include <aws/marketplace-deployment/model/ListTagsForResourceResult.h>
#include <aws/marketplace-deployment/model/PutDeploymentParameterRequest.h>
#include <aws/marketplace-deployment/model/PutDeploymentParameterResult.h>
#include <aws/marketplace-deployment/model/TagResourceRequest.h>
#include <aws/marketplace-deployment/model/TagResourceResult.h>
#include <aws/marketplace-deployment/model/UntagResourceRequest.h>
#include <aws/marketplace-deployment/model/UntagResourceResult.h>
#include <aws/marketplace-deployment/model/ValidationException.h>

using MarketplaceDeploymentIncludeTest = ::testing::Test;

TEST_F(MarketplaceDeploymentIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::MarketplaceDeployment::MarketplaceDeploymentClient>("MarketplaceDeploymentIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
