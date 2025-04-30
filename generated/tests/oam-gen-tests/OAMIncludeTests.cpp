/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/oam/OAMClient.h>
#include <aws/oam/OAMEndpointProvider.h>
#include <aws/oam/OAMEndpointRules.h>
#include <aws/oam/OAMErrorMarshaller.h>
#include <aws/oam/OAMErrors.h>
#include <aws/oam/OAMRequest.h>
#include <aws/oam/OAMServiceClientModel.h>
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/oam/model/ConflictException.h>
#include <aws/oam/model/CreateLinkRequest.h>
#include <aws/oam/model/CreateLinkResult.h>
#include <aws/oam/model/CreateSinkRequest.h>
#include <aws/oam/model/CreateSinkResult.h>
#include <aws/oam/model/DeleteLinkRequest.h>
#include <aws/oam/model/DeleteLinkResult.h>
#include <aws/oam/model/DeleteSinkRequest.h>
#include <aws/oam/model/DeleteSinkResult.h>
#include <aws/oam/model/GetLinkRequest.h>
#include <aws/oam/model/GetLinkResult.h>
#include <aws/oam/model/GetSinkPolicyRequest.h>
#include <aws/oam/model/GetSinkPolicyResult.h>
#include <aws/oam/model/GetSinkRequest.h>
#include <aws/oam/model/GetSinkResult.h>
#include <aws/oam/model/InternalServiceFault.h>
#include <aws/oam/model/InvalidParameterException.h>
#include <aws/oam/model/LinkConfiguration.h>
#include <aws/oam/model/ListAttachedLinksItem.h>
#include <aws/oam/model/ListAttachedLinksRequest.h>
#include <aws/oam/model/ListAttachedLinksResult.h>
#include <aws/oam/model/ListLinksItem.h>
#include <aws/oam/model/ListLinksRequest.h>
#include <aws/oam/model/ListLinksResult.h>
#include <aws/oam/model/ListSinksItem.h>
#include <aws/oam/model/ListSinksRequest.h>
#include <aws/oam/model/ListSinksResult.h>
#include <aws/oam/model/ListTagsForResourceRequest.h>
#include <aws/oam/model/ListTagsForResourceResult.h>
#include <aws/oam/model/LogGroupConfiguration.h>
#include <aws/oam/model/MetricConfiguration.h>
#include <aws/oam/model/MissingRequiredParameterException.h>
#include <aws/oam/model/PutSinkPolicyRequest.h>
#include <aws/oam/model/PutSinkPolicyResult.h>
#include <aws/oam/model/ResourceNotFoundException.h>
#include <aws/oam/model/ResourceType.h>
#include <aws/oam/model/ServiceQuotaExceededException.h>
#include <aws/oam/model/TagResourceRequest.h>
#include <aws/oam/model/TagResourceResult.h>
#include <aws/oam/model/UntagResourceRequest.h>
#include <aws/oam/model/UntagResourceResult.h>
#include <aws/oam/model/UpdateLinkRequest.h>
#include <aws/oam/model/UpdateLinkResult.h>

using OAMIncludeTest = ::testing::Test;

TEST_F(OAMIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::OAM::OAMClient>("OAMIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
