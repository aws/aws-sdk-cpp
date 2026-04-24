/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/shield/ShieldClient.h>
#include <aws/shield/ShieldEndpointProvider.h>
#include <aws/shield/ShieldEndpointRules.h>
#include <aws/shield/ShieldErrorMarshaller.h>
#include <aws/shield/ShieldErrors.h>
#include <aws/shield/ShieldRequest.h>
#include <aws/shield/ShieldServiceClientModel.h>
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/ApplicationLayerAutomaticResponseConfiguration.h>
#include <aws/shield/model/ApplicationLayerAutomaticResponseStatus.h>
#include <aws/shield/model/AssociateDRTLogBucketRequest.h>
#include <aws/shield/model/AssociateDRTLogBucketResult.h>
#include <aws/shield/model/AssociateDRTRoleRequest.h>
#include <aws/shield/model/AssociateDRTRoleResult.h>
#include <aws/shield/model/AssociateHealthCheckRequest.h>
#include <aws/shield/model/AssociateHealthCheckResult.h>
#include <aws/shield/model/AssociateProactiveEngagementDetailsRequest.h>
#include <aws/shield/model/AssociateProactiveEngagementDetailsResult.h>
#include <aws/shield/model/AttackDetail.h>
#include <aws/shield/model/AttackLayer.h>
#include <aws/shield/model/AttackProperty.h>
#include <aws/shield/model/AttackPropertyIdentifier.h>
#include <aws/shield/model/AttackStatisticsDataItem.h>
#include <aws/shield/model/AttackSummary.h>
#include <aws/shield/model/AttackVectorDescription.h>
#include <aws/shield/model/AttackVolume.h>
#include <aws/shield/model/AttackVolumeStatistics.h>
#include <aws/shield/model/AutoRenew.h>
#include <aws/shield/model/BlockAction.h>
#include <aws/shield/model/Contributor.h>
#include <aws/shield/model/CountAction.h>
#include <aws/shield/model/CreateProtectionGroupRequest.h>
#include <aws/shield/model/CreateProtectionGroupResult.h>
#include <aws/shield/model/CreateProtectionRequest.h>
#include <aws/shield/model/CreateProtectionResult.h>
#include <aws/shield/model/CreateSubscriptionRequest.h>
#include <aws/shield/model/CreateSubscriptionResult.h>
#include <aws/shield/model/DeleteProtectionGroupRequest.h>
#include <aws/shield/model/DeleteProtectionGroupResult.h>
#include <aws/shield/model/DeleteProtectionRequest.h>
#include <aws/shield/model/DeleteProtectionResult.h>
#include <aws/shield/model/DescribeAttackRequest.h>
#include <aws/shield/model/DescribeAttackResult.h>
#include <aws/shield/model/DescribeAttackStatisticsRequest.h>
#include <aws/shield/model/DescribeAttackStatisticsResult.h>
#include <aws/shield/model/DescribeDRTAccessRequest.h>
#include <aws/shield/model/DescribeDRTAccessResult.h>
#include <aws/shield/model/DescribeEmergencyContactSettingsRequest.h>
#include <aws/shield/model/DescribeEmergencyContactSettingsResult.h>
#include <aws/shield/model/DescribeProtectionGroupRequest.h>
#include <aws/shield/model/DescribeProtectionGroupResult.h>
#include <aws/shield/model/DescribeProtectionRequest.h>
#include <aws/shield/model/DescribeProtectionResult.h>
#include <aws/shield/model/DescribeSubscriptionRequest.h>
#include <aws/shield/model/DescribeSubscriptionResult.h>
#include <aws/shield/model/DisableApplicationLayerAutomaticResponseRequest.h>
#include <aws/shield/model/DisableApplicationLayerAutomaticResponseResult.h>
#include <aws/shield/model/DisableProactiveEngagementRequest.h>
#include <aws/shield/model/DisableProactiveEngagementResult.h>
#include <aws/shield/model/DisassociateDRTLogBucketRequest.h>
#include <aws/shield/model/DisassociateDRTLogBucketResult.h>
#include <aws/shield/model/DisassociateDRTRoleRequest.h>
#include <aws/shield/model/DisassociateDRTRoleResult.h>
#include <aws/shield/model/DisassociateHealthCheckRequest.h>
#include <aws/shield/model/DisassociateHealthCheckResult.h>
#include <aws/shield/model/EmergencyContact.h>
#include <aws/shield/model/EnableApplicationLayerAutomaticResponseRequest.h>
#include <aws/shield/model/EnableApplicationLayerAutomaticResponseResult.h>
#include <aws/shield/model/EnableProactiveEngagementRequest.h>
#include <aws/shield/model/EnableProactiveEngagementResult.h>
#include <aws/shield/model/GetSubscriptionStateRequest.h>
#include <aws/shield/model/GetSubscriptionStateResult.h>
#include <aws/shield/model/InclusionProtectionFilters.h>
#include <aws/shield/model/InclusionProtectionGroupFilters.h>
#include <aws/shield/model/InvalidParameterException.h>
#include <aws/shield/model/Limit.h>
#include <aws/shield/model/LimitsExceededException.h>
#include <aws/shield/model/ListAttacksRequest.h>
#include <aws/shield/model/ListAttacksResult.h>
#include <aws/shield/model/ListProtectionGroupsRequest.h>
#include <aws/shield/model/ListProtectionGroupsResult.h>
#include <aws/shield/model/ListProtectionsRequest.h>
#include <aws/shield/model/ListProtectionsResult.h>
#include <aws/shield/model/ListResourcesInProtectionGroupRequest.h>
#include <aws/shield/model/ListResourcesInProtectionGroupResult.h>
#include <aws/shield/model/ListTagsForResourceRequest.h>
#include <aws/shield/model/ListTagsForResourceResult.h>
#include <aws/shield/model/Mitigation.h>
#include <aws/shield/model/ProactiveEngagementStatus.h>
#include <aws/shield/model/ProtectedResourceType.h>
#include <aws/shield/model/Protection.h>
#include <aws/shield/model/ProtectionGroup.h>
#include <aws/shield/model/ProtectionGroupAggregation.h>
#include <aws/shield/model/ProtectionGroupArbitraryPatternLimits.h>
#include <aws/shield/model/ProtectionGroupLimits.h>
#include <aws/shield/model/ProtectionGroupPattern.h>
#include <aws/shield/model/ProtectionGroupPatternTypeLimits.h>
#include <aws/shield/model/ProtectionLimits.h>
#include <aws/shield/model/ResourceAlreadyExistsException.h>
#include <aws/shield/model/ResourceNotFoundException.h>
#include <aws/shield/model/ResponseAction.h>
#include <aws/shield/model/SubResourceSummary.h>
#include <aws/shield/model/SubResourceType.h>
#include <aws/shield/model/Subscription.h>
#include <aws/shield/model/SubscriptionLimits.h>
#include <aws/shield/model/SubscriptionState.h>
#include <aws/shield/model/SummarizedAttackVector.h>
#include <aws/shield/model/SummarizedCounter.h>
#include <aws/shield/model/Tag.h>
#include <aws/shield/model/TagResourceRequest.h>
#include <aws/shield/model/TagResourceResult.h>
#include <aws/shield/model/TimeRange.h>
#include <aws/shield/model/Unit.h>
#include <aws/shield/model/UntagResourceRequest.h>
#include <aws/shield/model/UntagResourceResult.h>
#include <aws/shield/model/UpdateApplicationLayerAutomaticResponseRequest.h>
#include <aws/shield/model/UpdateApplicationLayerAutomaticResponseResult.h>
#include <aws/shield/model/UpdateEmergencyContactSettingsRequest.h>
#include <aws/shield/model/UpdateEmergencyContactSettingsResult.h>
#include <aws/shield/model/UpdateProtectionGroupRequest.h>
#include <aws/shield/model/UpdateProtectionGroupResult.h>
#include <aws/shield/model/UpdateSubscriptionRequest.h>
#include <aws/shield/model/UpdateSubscriptionResult.h>
#include <aws/shield/model/ValidationExceptionField.h>
#include <aws/shield/model/ValidationExceptionReason.h>

using ShieldIncludeTest = ::testing::Test;

TEST_F(ShieldIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Shield::ShieldClient>("ShieldIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
