/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/dlm/DLMClient.h>
#include <aws/dlm/DLMEndpointProvider.h>
#include <aws/dlm/DLMEndpointRules.h>
#include <aws/dlm/DLMErrorMarshaller.h>
#include <aws/dlm/DLMErrors.h>
#include <aws/dlm/DLMRequest.h>
#include <aws/dlm/DLMServiceClientModel.h>
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/dlm/model/Action.h>
#include <aws/dlm/model/ArchiveRetainRule.h>
#include <aws/dlm/model/ArchiveRule.h>
#include <aws/dlm/model/CreateLifecyclePolicyRequest.h>
#include <aws/dlm/model/CreateLifecyclePolicyResult.h>
#include <aws/dlm/model/CreateRule.h>
#include <aws/dlm/model/CrossRegionCopyAction.h>
#include <aws/dlm/model/CrossRegionCopyDeprecateRule.h>
#include <aws/dlm/model/CrossRegionCopyRetainRule.h>
#include <aws/dlm/model/CrossRegionCopyRule.h>
#include <aws/dlm/model/CrossRegionCopyTarget.h>
#include <aws/dlm/model/DefaultPoliciesTypeValues.h>
#include <aws/dlm/model/DefaultPolicyTypeValues.h>
#include <aws/dlm/model/DeleteLifecyclePolicyRequest.h>
#include <aws/dlm/model/DeleteLifecyclePolicyResult.h>
#include <aws/dlm/model/DeprecateRule.h>
#include <aws/dlm/model/EncryptionConfiguration.h>
#include <aws/dlm/model/EventParameters.h>
#include <aws/dlm/model/EventSource.h>
#include <aws/dlm/model/EventSourceValues.h>
#include <aws/dlm/model/EventTypeValues.h>
#include <aws/dlm/model/Exclusions.h>
#include <aws/dlm/model/ExecutionHandlerServiceValues.h>
#include <aws/dlm/model/FastRestoreRule.h>
#include <aws/dlm/model/GetLifecyclePoliciesRequest.h>
#include <aws/dlm/model/GetLifecyclePoliciesResult.h>
#include <aws/dlm/model/GetLifecyclePolicyRequest.h>
#include <aws/dlm/model/GetLifecyclePolicyResult.h>
#include <aws/dlm/model/GettablePolicyStateValues.h>
#include <aws/dlm/model/InternalServerException.h>
#include <aws/dlm/model/IntervalUnitValues.h>
#include <aws/dlm/model/InvalidRequestException.h>
#include <aws/dlm/model/LifecyclePolicy.h>
#include <aws/dlm/model/LifecyclePolicySummary.h>
#include <aws/dlm/model/LimitExceededException.h>
#include <aws/dlm/model/ListTagsForResourceRequest.h>
#include <aws/dlm/model/ListTagsForResourceResult.h>
#include <aws/dlm/model/LocationValues.h>
#include <aws/dlm/model/Parameters.h>
#include <aws/dlm/model/PolicyDetails.h>
#include <aws/dlm/model/PolicyLanguageValues.h>
#include <aws/dlm/model/PolicyTypeValues.h>
#include <aws/dlm/model/ResourceLocationValues.h>
#include <aws/dlm/model/ResourceNotFoundException.h>
#include <aws/dlm/model/ResourceTypeValues.h>
#include <aws/dlm/model/RetainRule.h>
#include <aws/dlm/model/RetentionArchiveTier.h>
#include <aws/dlm/model/RetentionIntervalUnitValues.h>
#include <aws/dlm/model/Schedule.h>
#include <aws/dlm/model/Script.h>
#include <aws/dlm/model/SettablePolicyStateValues.h>
#include <aws/dlm/model/ShareRule.h>
#include <aws/dlm/model/StageValues.h>
#include <aws/dlm/model/Tag.h>
#include <aws/dlm/model/TagResourceRequest.h>
#include <aws/dlm/model/TagResourceResult.h>
#include <aws/dlm/model/UntagResourceRequest.h>
#include <aws/dlm/model/UntagResourceResult.h>
#include <aws/dlm/model/UpdateLifecyclePolicyRequest.h>
#include <aws/dlm/model/UpdateLifecyclePolicyResult.h>

using DLMIncludeTest = ::testing::Test;

TEST_F(DLMIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::DLM::DLMClient>("DLMIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
