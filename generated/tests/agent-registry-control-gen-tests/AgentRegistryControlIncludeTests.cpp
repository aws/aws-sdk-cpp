/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/agent-registry-control/AgentRegistryControlClient.h>
#include <aws/agent-registry-control/AgentRegistryControlClientPagination.h>
#include <aws/agent-registry-control/AgentRegistryControlEndpointProvider.h>
#include <aws/agent-registry-control/AgentRegistryControlErrorMarshaller.h>
#include <aws/agent-registry-control/AgentRegistryControlErrors.h>
#include <aws/agent-registry-control/AgentRegistryControlPaginationBase.h>
#include <aws/agent-registry-control/AgentRegistryControlRequest.h>
#include <aws/agent-registry-control/AgentRegistryControlServiceClientModel.h>
#include <aws/agent-registry-control/AgentRegistryControlWaiter.h>
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/internal/AgentRegistryControlEndpointRules.h>
#include <aws/agent-registry-control/model/A2aAgentCardDescriptor.h>
#include <aws/agent-registry-control/model/AgentSkillsAdditionalData.h>
#include <aws/agent-registry-control/model/AgentSkillsDefinitionDescriptor.h>
#include <aws/agent-registry-control/model/AgentSkillsMdDescriptor.h>
#include <aws/agent-registry-control/model/ApprovalConfiguration.h>
#include <aws/agent-registry-control/model/AuthorizerConfiguration.h>
#include <aws/agent-registry-control/model/AuthorizingClaimMatchValueType.h>
#include <aws/agent-registry-control/model/AutoApprovalRule.h>
#include <aws/agent-registry-control/model/ClaimMatchOperatorType.h>
#include <aws/agent-registry-control/model/ClaimMatchValueType.h>
#include <aws/agent-registry-control/model/CreateRegistryRecordRequest.h>
#include <aws/agent-registry-control/model/CreateRegistryRecordResult.h>
#include <aws/agent-registry-control/model/CreateRegistryRequest.h>
#include <aws/agent-registry-control/model/CreateRegistryResult.h>
#include <aws/agent-registry-control/model/CustomClaimValidationType.h>
#include <aws/agent-registry-control/model/CustomDescriptor.h>
#include <aws/agent-registry-control/model/CustomJWTAuthorizerConfiguration.h>
#include <aws/agent-registry-control/model/DeleteRegistryRecordRequest.h>
#include <aws/agent-registry-control/model/DeleteRegistryRecordResult.h>
#include <aws/agent-registry-control/model/DeleteRegistryRequest.h>
#include <aws/agent-registry-control/model/DeleteRegistryResult.h>
#include <aws/agent-registry-control/model/DescriptorSource.h>
#include <aws/agent-registry-control/model/DescriptorSourceFromUrl.h>
#include <aws/agent-registry-control/model/Descriptors.h>
#include <aws/agent-registry-control/model/DiscoveryConfiguration.h>
#include <aws/agent-registry-control/model/EndpointIpAddressType.h>
#include <aws/agent-registry-control/model/GetRegistryRecordRequest.h>
#include <aws/agent-registry-control/model/GetRegistryRecordResult.h>
#include <aws/agent-registry-control/model/GetRegistryRequest.h>
#include <aws/agent-registry-control/model/GetRegistryResult.h>
#include <aws/agent-registry-control/model/InboundTokenClaimValueType.h>
#include <aws/agent-registry-control/model/ListRegistriesPaginationTraits.h>
#include <aws/agent-registry-control/model/ListRegistriesRequest.h>
#include <aws/agent-registry-control/model/ListRegistriesResult.h>
#include <aws/agent-registry-control/model/ListRegistryRecordsPaginationTraits.h>
#include <aws/agent-registry-control/model/ListRegistryRecordsRequest.h>
#include <aws/agent-registry-control/model/ListRegistryRecordsResult.h>
#include <aws/agent-registry-control/model/ListTagsForResourceRequest.h>
#include <aws/agent-registry-control/model/ListTagsForResourceResult.h>
#include <aws/agent-registry-control/model/ManagedVpcResource.h>
#include <aws/agent-registry-control/model/McpServerAdditionalData.h>
#include <aws/agent-registry-control/model/McpServerDescriptor.h>
#include <aws/agent-registry-control/model/McpToolsDescriptor.h>
#include <aws/agent-registry-control/model/PrivateEndpoint.h>
#include <aws/agent-registry-control/model/PrivateEndpointOverride.h>
#include <aws/agent-registry-control/model/RecordType.h>
#include <aws/agent-registry-control/model/RegistryAuthorizerType.h>
#include <aws/agent-registry-control/model/RegistryFilter.h>
#include <aws/agent-registry-control/model/RegistryFilterName.h>
#include <aws/agent-registry-control/model/RegistryRecordCredentialProviderConfiguration.h>
#include <aws/agent-registry-control/model/RegistryRecordCredentialProviderType.h>
#include <aws/agent-registry-control/model/RegistryRecordCredentialProviderUnion.h>
#include <aws/agent-registry-control/model/RegistryRecordFilter.h>
#include <aws/agent-registry-control/model/RegistryRecordFilterName.h>
#include <aws/agent-registry-control/model/RegistryRecordIamCredentialProvider.h>
#include <aws/agent-registry-control/model/RegistryRecordOAuthCredentialProvider.h>
#include <aws/agent-registry-control/model/RegistryRecordOAuthGrantType.h>
#include <aws/agent-registry-control/model/RegistryRecordStatus.h>
#include <aws/agent-registry-control/model/RegistryRecordSummary.h>
#include <aws/agent-registry-control/model/RegistryStatus.h>
#include <aws/agent-registry-control/model/RegistrySummary.h>
#include <aws/agent-registry-control/model/SelfManagedLatticeResource.h>
#include <aws/agent-registry-control/model/SubmitRegistryRecordForApprovalRequest.h>
#include <aws/agent-registry-control/model/SubmitRegistryRecordForApprovalResult.h>
#include <aws/agent-registry-control/model/TagResourceRequest.h>
#include <aws/agent-registry-control/model/TagResourceResult.h>
#include <aws/agent-registry-control/model/UntagResourceRequest.h>
#include <aws/agent-registry-control/model/UntagResourceResult.h>
#include <aws/agent-registry-control/model/UpdateRegistryRecordRequest.h>
#include <aws/agent-registry-control/model/UpdateRegistryRecordResult.h>
#include <aws/agent-registry-control/model/UpdateRegistryRecordStatusRequest.h>
#include <aws/agent-registry-control/model/UpdateRegistryRecordStatusResult.h>
#include <aws/agent-registry-control/model/UpdateRegistryRequest.h>
#include <aws/agent-registry-control/model/UpdateRegistryResult.h>
#include <aws/agent-registry-control/model/UpdatedA2aAgentCardDescriptor.h>
#include <aws/agent-registry-control/model/UpdatedA2aAgentCardDescriptorFields.h>
#include <aws/agent-registry-control/model/UpdatedAgentSkillsAdditionalData.h>
#include <aws/agent-registry-control/model/UpdatedAgentSkillsAdditionalDataFields.h>
#include <aws/agent-registry-control/model/UpdatedAgentSkillsDefinitionDescriptor.h>
#include <aws/agent-registry-control/model/UpdatedAgentSkillsDefinitionDescriptorFields.h>
#include <aws/agent-registry-control/model/UpdatedAgentSkillsMdDescriptor.h>
#include <aws/agent-registry-control/model/UpdatedAgentSkillsMdDescriptorFields.h>
#include <aws/agent-registry-control/model/UpdatedApprovalConfiguration.h>
#include <aws/agent-registry-control/model/UpdatedAuthorizerConfiguration.h>
#include <aws/agent-registry-control/model/UpdatedCustomDescriptor.h>
#include <aws/agent-registry-control/model/UpdatedCustomDescriptorFields.h>
#include <aws/agent-registry-control/model/UpdatedDataSchemaVersion.h>
#include <aws/agent-registry-control/model/UpdatedDescription.h>
#include <aws/agent-registry-control/model/UpdatedDescriptorData.h>
#include <aws/agent-registry-control/model/UpdatedDescriptorSource.h>
#include <aws/agent-registry-control/model/UpdatedDescriptors.h>
#include <aws/agent-registry-control/model/UpdatedDescriptorsFields.h>
#include <aws/agent-registry-control/model/UpdatedDiscoveryConfiguration.h>
#include <aws/agent-registry-control/model/UpdatedDisplayName.h>
#include <aws/agent-registry-control/model/UpdatedMcpServerAdditionalData.h>
#include <aws/agent-registry-control/model/UpdatedMcpServerAdditionalDataFields.h>
#include <aws/agent-registry-control/model/UpdatedMcpServerDescriptor.h>
#include <aws/agent-registry-control/model/UpdatedMcpServerDescriptorFields.h>
#include <aws/agent-registry-control/model/UpdatedMcpToolsDescriptor.h>
#include <aws/agent-registry-control/model/UpdatedMcpToolsDescriptorFields.h>
#include <aws/agent-registry-control/model/ValidationException.h>
#include <aws/agent-registry-control/model/ValidationExceptionField.h>
#include <aws/agent-registry-control/model/ValidationExceptionReason.h>

using AgentRegistryControlIncludeTest = ::testing::Test;

TEST_F(AgentRegistryControlIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::AgentRegistryControl::AgentRegistryControlClient>("AgentRegistryControlIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
