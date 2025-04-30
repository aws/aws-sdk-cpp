/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/rbin/RecycleBinClient.h>
#include <aws/rbin/RecycleBinEndpointProvider.h>
#include <aws/rbin/RecycleBinEndpointRules.h>
#include <aws/rbin/RecycleBinErrorMarshaller.h>
#include <aws/rbin/RecycleBinErrors.h>
#include <aws/rbin/RecycleBinRequest.h>
#include <aws/rbin/RecycleBinServiceClientModel.h>
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/rbin/model/ConflictException.h>
#include <aws/rbin/model/ConflictExceptionReason.h>
#include <aws/rbin/model/CreateRuleRequest.h>
#include <aws/rbin/model/CreateRuleResult.h>
#include <aws/rbin/model/DeleteRuleRequest.h>
#include <aws/rbin/model/DeleteRuleResult.h>
#include <aws/rbin/model/GetRuleRequest.h>
#include <aws/rbin/model/GetRuleResult.h>
#include <aws/rbin/model/ListRulesRequest.h>
#include <aws/rbin/model/ListRulesResult.h>
#include <aws/rbin/model/ListTagsForResourceRequest.h>
#include <aws/rbin/model/ListTagsForResourceResult.h>
#include <aws/rbin/model/LockConfiguration.h>
#include <aws/rbin/model/LockRuleRequest.h>
#include <aws/rbin/model/LockRuleResult.h>
#include <aws/rbin/model/LockState.h>
#include <aws/rbin/model/ResourceNotFoundException.h>
#include <aws/rbin/model/ResourceNotFoundExceptionReason.h>
#include <aws/rbin/model/ResourceTag.h>
#include <aws/rbin/model/ResourceType.h>
#include <aws/rbin/model/RetentionPeriod.h>
#include <aws/rbin/model/RetentionPeriodUnit.h>
#include <aws/rbin/model/RuleStatus.h>
#include <aws/rbin/model/RuleSummary.h>
#include <aws/rbin/model/ServiceQuotaExceededException.h>
#include <aws/rbin/model/ServiceQuotaExceededExceptionReason.h>
#include <aws/rbin/model/Tag.h>
#include <aws/rbin/model/TagResourceRequest.h>
#include <aws/rbin/model/TagResourceResult.h>
#include <aws/rbin/model/UnlockDelay.h>
#include <aws/rbin/model/UnlockDelayUnit.h>
#include <aws/rbin/model/UnlockRuleRequest.h>
#include <aws/rbin/model/UnlockRuleResult.h>
#include <aws/rbin/model/UntagResourceRequest.h>
#include <aws/rbin/model/UntagResourceResult.h>
#include <aws/rbin/model/UpdateRuleRequest.h>
#include <aws/rbin/model/UpdateRuleResult.h>
#include <aws/rbin/model/ValidationException.h>
#include <aws/rbin/model/ValidationExceptionReason.h>

using RecycleBinIncludeTest = ::testing::Test;

TEST_F(RecycleBinIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::RecycleBin::RecycleBinClient>("RecycleBinIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
