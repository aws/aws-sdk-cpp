/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/repostspace/RepostspaceClient.h>
#include <aws/repostspace/RepostspaceEndpointProvider.h>
#include <aws/repostspace/RepostspaceEndpointRules.h>
#include <aws/repostspace/RepostspaceErrorMarshaller.h>
#include <aws/repostspace/RepostspaceErrors.h>
#include <aws/repostspace/RepostspaceRequest.h>
#include <aws/repostspace/RepostspaceServiceClientModel.h>
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/repostspace/model/BatchAddChannelRoleToAccessorsRequest.h>
#include <aws/repostspace/model/BatchAddChannelRoleToAccessorsResult.h>
#include <aws/repostspace/model/BatchAddRoleRequest.h>
#include <aws/repostspace/model/BatchAddRoleResult.h>
#include <aws/repostspace/model/BatchError.h>
#include <aws/repostspace/model/BatchRemoveChannelRoleFromAccessorsRequest.h>
#include <aws/repostspace/model/BatchRemoveChannelRoleFromAccessorsResult.h>
#include <aws/repostspace/model/BatchRemoveRoleRequest.h>
#include <aws/repostspace/model/BatchRemoveRoleResult.h>
#include <aws/repostspace/model/ChannelData.h>
#include <aws/repostspace/model/ChannelRole.h>
#include <aws/repostspace/model/ChannelStatus.h>
#include <aws/repostspace/model/ConfigurationStatus.h>
#include <aws/repostspace/model/ConflictException.h>
#include <aws/repostspace/model/CreateChannelRequest.h>
#include <aws/repostspace/model/CreateChannelResult.h>
#include <aws/repostspace/model/CreateSpaceRequest.h>
#include <aws/repostspace/model/CreateSpaceResult.h>
#include <aws/repostspace/model/DeleteSpaceRequest.h>
#include <aws/repostspace/model/DeregisterAdminRequest.h>
#include <aws/repostspace/model/FeatureEnableParameter.h>
#include <aws/repostspace/model/FeatureEnableStatus.h>
#include <aws/repostspace/model/GetChannelRequest.h>
#include <aws/repostspace/model/GetChannelResult.h>
#include <aws/repostspace/model/GetSpaceRequest.h>
#include <aws/repostspace/model/GetSpaceResult.h>
#include <aws/repostspace/model/InternalServerException.h>
#include <aws/repostspace/model/ListChannelsRequest.h>
#include <aws/repostspace/model/ListChannelsResult.h>
#include <aws/repostspace/model/ListSpacesRequest.h>
#include <aws/repostspace/model/ListSpacesResult.h>
#include <aws/repostspace/model/ListTagsForResourceRequest.h>
#include <aws/repostspace/model/ListTagsForResourceResult.h>
#include <aws/repostspace/model/RegisterAdminRequest.h>
#include <aws/repostspace/model/ResourceNotFoundException.h>
#include <aws/repostspace/model/Role.h>
#include <aws/repostspace/model/SendInvitesRequest.h>
#include <aws/repostspace/model/ServiceQuotaExceededException.h>
#include <aws/repostspace/model/SpaceData.h>
#include <aws/repostspace/model/SupportedEmailDomainsParameters.h>
#include <aws/repostspace/model/SupportedEmailDomainsStatus.h>
#include <aws/repostspace/model/TagResourceRequest.h>
#include <aws/repostspace/model/TagResourceResult.h>
#include <aws/repostspace/model/ThrottlingException.h>
#include <aws/repostspace/model/TierLevel.h>
#include <aws/repostspace/model/UntagResourceRequest.h>
#include <aws/repostspace/model/UntagResourceResult.h>
#include <aws/repostspace/model/UpdateChannelRequest.h>
#include <aws/repostspace/model/UpdateChannelResult.h>
#include <aws/repostspace/model/UpdateSpaceRequest.h>
#include <aws/repostspace/model/ValidationException.h>
#include <aws/repostspace/model/ValidationExceptionField.h>
#include <aws/repostspace/model/ValidationExceptionReason.h>
#include <aws/repostspace/model/VanityDomainStatus.h>

using RepostspaceIncludeTest = ::testing::Test;

TEST_F(RepostspaceIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::repostspace::RepostspaceClient>("RepostspaceIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
