/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/agent-discovery/AgentDiscoveryClient.h>
#include <aws/agent-discovery/AgentDiscoveryClientPagination.h>
#include <aws/agent-discovery/AgentDiscoveryEndpointProvider.h>
#include <aws/agent-discovery/AgentDiscoveryErrorMarshaller.h>
#include <aws/agent-discovery/AgentDiscoveryErrors.h>
#include <aws/agent-discovery/AgentDiscoveryPaginationBase.h>
#include <aws/agent-discovery/AgentDiscoveryRequest.h>
#include <aws/agent-discovery/AgentDiscoveryServiceClientModel.h>
#include <aws/agent-discovery/AgentDiscoveryWaiter.h>
#include <aws/agent-discovery/AgentDiscovery_EXPORTS.h>
#include <aws/agent-discovery/internal/AgentDiscoveryEndpointRules.h>
#include <aws/agent-discovery/model/ArdErrorCode.h>
#include <aws/agent-discovery/model/DescriptorEntry.h>
#include <aws/agent-discovery/model/DescriptorSource.h>
#include <aws/agent-discovery/model/DescriptorSourceUrl.h>
#include <aws/agent-discovery/model/Identifier.h>
#include <aws/agent-discovery/model/InternalServerException.h>
#include <aws/agent-discovery/model/ProvenanceLink.h>
#include <aws/agent-discovery/model/ProvenanceRelation.h>
#include <aws/agent-discovery/model/PublicRecord.h>
#include <aws/agent-discovery/model/RecordType.h>
#include <aws/agent-discovery/model/SearchPublicRecordsPaginationTraits.h>
#include <aws/agent-discovery/model/SearchPublicRecordsRequest.h>
#include <aws/agent-discovery/model/SearchPublicRecordsResult.h>
#include <aws/agent-discovery/model/ThrottlingException.h>
#include <aws/agent-discovery/model/TrustManifest.h>
#include <aws/agent-discovery/model/ValidationException.h>

using AgentDiscoveryIncludeTest = ::testing::Test;

TEST_F(AgentDiscoveryIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::AgentDiscovery::AgentDiscoveryClient>("AgentDiscoveryIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
