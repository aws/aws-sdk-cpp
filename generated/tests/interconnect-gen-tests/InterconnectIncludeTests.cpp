/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/interconnect/InterconnectClient.h>
#include <aws/interconnect/InterconnectEndpointProvider.h>
#include <aws/interconnect/InterconnectEndpointRules.h>
#include <aws/interconnect/InterconnectErrorMarshaller.h>
#include <aws/interconnect/InterconnectErrors.h>
#include <aws/interconnect/InterconnectRequest.h>
#include <aws/interconnect/InterconnectServiceClientModel.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>
#include <aws/interconnect/model/AcceptConnectionProposalRequest.h>
#include <aws/interconnect/model/AcceptConnectionProposalResult.h>
#include <aws/interconnect/model/AttachPoint.h>
#include <aws/interconnect/model/AttachPointDescriptor.h>
#include <aws/interconnect/model/AttachPointType.h>
#include <aws/interconnect/model/Bandwidths.h>
#include <aws/interconnect/model/Connection.h>
#include <aws/interconnect/model/ConnectionState.h>
#include <aws/interconnect/model/ConnectionSummary.h>
#include <aws/interconnect/model/CreateConnectionRequest.h>
#include <aws/interconnect/model/CreateConnectionResult.h>
#include <aws/interconnect/model/DeleteConnectionRequest.h>
#include <aws/interconnect/model/DeleteConnectionResult.h>
#include <aws/interconnect/model/DescribeConnectionProposalRequest.h>
#include <aws/interconnect/model/DescribeConnectionProposalResult.h>
#include <aws/interconnect/model/Environment.h>
#include <aws/interconnect/model/EnvironmentState.h>
#include <aws/interconnect/model/GetConnectionRequest.h>
#include <aws/interconnect/model/GetConnectionResult.h>
#include <aws/interconnect/model/GetEnvironmentRequest.h>
#include <aws/interconnect/model/GetEnvironmentResult.h>
#include <aws/interconnect/model/ListAttachPointsRequest.h>
#include <aws/interconnect/model/ListAttachPointsResult.h>
#include <aws/interconnect/model/ListConnectionsRequest.h>
#include <aws/interconnect/model/ListConnectionsResult.h>
#include <aws/interconnect/model/ListEnvironmentsRequest.h>
#include <aws/interconnect/model/ListEnvironmentsResult.h>
#include <aws/interconnect/model/ListTagsForResourceRequest.h>
#include <aws/interconnect/model/ListTagsForResourceResult.h>
#include <aws/interconnect/model/Provider.h>
#include <aws/interconnect/model/RemoteAccountIdentifier.h>
#include <aws/interconnect/model/RemoteAccountIdentifierType.h>
#include <aws/interconnect/model/TagResourceRequest.h>
#include <aws/interconnect/model/TagResourceResult.h>
#include <aws/interconnect/model/UntagResourceRequest.h>
#include <aws/interconnect/model/UntagResourceResult.h>
#include <aws/interconnect/model/UpdateConnectionRequest.h>
#include <aws/interconnect/model/UpdateConnectionResult.h>

using InterconnectIncludeTest = ::testing::Test;

TEST_F(InterconnectIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Interconnect::InterconnectClient>("InterconnectIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
