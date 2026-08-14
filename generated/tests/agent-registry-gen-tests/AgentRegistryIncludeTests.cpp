/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/agent-registry/AgentRegistryClient.h>
#include <aws/agent-registry/AgentRegistryClientPagination.h>
#include <aws/agent-registry/AgentRegistryEndpointProvider.h>
#include <aws/agent-registry/AgentRegistryErrorMarshaller.h>
#include <aws/agent-registry/AgentRegistryErrors.h>
#include <aws/agent-registry/AgentRegistryPaginationBase.h>
#include <aws/agent-registry/AgentRegistryRequest.h>
#include <aws/agent-registry/AgentRegistryServiceClientModel.h>
#include <aws/agent-registry/AgentRegistryWaiter.h>
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/agent-registry/internal/AgentRegistryEndpointRules.h>
#include <aws/agent-registry/model/A2aAgentCardDescriptor.h>
#include <aws/agent-registry/model/AgentSkillsAdditionalData.h>
#include <aws/agent-registry/model/AgentSkillsDefinitionDescriptor.h>
#include <aws/agent-registry/model/AgentSkillsMdDescriptor.h>
#include <aws/agent-registry/model/BatchGetDiscoverableRegistryRecordError.h>
#include <aws/agent-registry/model/BatchGetDiscoverableRegistryRecordErrorCode.h>
#include <aws/agent-registry/model/BatchGetDiscoverableRegistryRecordRequest.h>
#include <aws/agent-registry/model/BatchGetDiscoverableRegistryRecordResult.h>
#include <aws/agent-registry/model/CustomDescriptor.h>
#include <aws/agent-registry/model/DescriptorSource.h>
#include <aws/agent-registry/model/DescriptorSourceFromUrl.h>
#include <aws/agent-registry/model/Descriptors.h>
#include <aws/agent-registry/model/DiscoverableRegistryRecordSummary.h>
#include <aws/agent-registry/model/ListDiscoverableRegistryRecordsPaginationTraits.h>
#include <aws/agent-registry/model/ListDiscoverableRegistryRecordsRequest.h>
#include <aws/agent-registry/model/ListDiscoverableRegistryRecordsResult.h>
#include <aws/agent-registry/model/McpServerAdditionalData.h>
#include <aws/agent-registry/model/McpServerDescriptor.h>
#include <aws/agent-registry/model/McpToolsDescriptor.h>
#include <aws/agent-registry/model/RecordType.h>
#include <aws/agent-registry/model/RegistryRecordFilter.h>
#include <aws/agent-registry/model/RegistryRecordFilterName.h>
#include <aws/agent-registry/model/RegistryRecordStatus.h>
#include <aws/agent-registry/model/RegistryRecordSummary.h>
#include <aws/agent-registry/model/RegistryRecordsEntry.h>
#include <aws/agent-registry/model/SearchDiscoverableRegistryRecordsRequest.h>
#include <aws/agent-registry/model/SearchDiscoverableRegistryRecordsResult.h>
#include <aws/agent-registry/model/ValidationException.h>
#include <aws/agent-registry/model/ValidationExceptionField.h>
#include <aws/agent-registry/model/ValidationExceptionReason.h>

using AgentRegistryIncludeTest = ::testing::Test;

TEST_F(AgentRegistryIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::AgentRegistry::AgentRegistryClient>("AgentRegistryIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
