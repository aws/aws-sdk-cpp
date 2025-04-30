/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/ssm-incidents/SSMIncidentsClient.h>
#include <aws/ssm-incidents/SSMIncidentsEndpointProvider.h>
#include <aws/ssm-incidents/SSMIncidentsEndpointRules.h>
#include <aws/ssm-incidents/SSMIncidentsErrorMarshaller.h>
#include <aws/ssm-incidents/SSMIncidentsErrors.h>
#include <aws/ssm-incidents/SSMIncidentsRequest.h>
#include <aws/ssm-incidents/SSMIncidentsServiceClientModel.h>
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/model/Action.h>
#include <aws/ssm-incidents/model/AddRegionAction.h>
#include <aws/ssm-incidents/model/AttributeValueList.h>
#include <aws/ssm-incidents/model/AutomationExecution.h>
#include <aws/ssm-incidents/model/BatchGetIncidentFindingsError.h>
#include <aws/ssm-incidents/model/BatchGetIncidentFindingsRequest.h>
#include <aws/ssm-incidents/model/BatchGetIncidentFindingsResult.h>
#include <aws/ssm-incidents/model/ChatChannel.h>
#include <aws/ssm-incidents/model/CloudFormationStackUpdate.h>
#include <aws/ssm-incidents/model/CodeDeployDeployment.h>
#include <aws/ssm-incidents/model/Condition.h>
#include <aws/ssm-incidents/model/ConflictException.h>
#include <aws/ssm-incidents/model/CreateReplicationSetRequest.h>
#include <aws/ssm-incidents/model/CreateReplicationSetResult.h>
#include <aws/ssm-incidents/model/CreateResponsePlanRequest.h>
#include <aws/ssm-incidents/model/CreateResponsePlanResult.h>
#include <aws/ssm-incidents/model/CreateTimelineEventRequest.h>
#include <aws/ssm-incidents/model/CreateTimelineEventResult.h>
#include <aws/ssm-incidents/model/DeleteIncidentRecordRequest.h>
#include <aws/ssm-incidents/model/DeleteIncidentRecordResult.h>
#include <aws/ssm-incidents/model/DeleteRegionAction.h>
#include <aws/ssm-incidents/model/DeleteReplicationSetRequest.h>
#include <aws/ssm-incidents/model/DeleteReplicationSetResult.h>
#include <aws/ssm-incidents/model/DeleteResourcePolicyRequest.h>
#include <aws/ssm-incidents/model/DeleteResourcePolicyResult.h>
#include <aws/ssm-incidents/model/DeleteResponsePlanRequest.h>
#include <aws/ssm-incidents/model/DeleteResponsePlanResult.h>
#include <aws/ssm-incidents/model/DeleteTimelineEventRequest.h>
#include <aws/ssm-incidents/model/DeleteTimelineEventResult.h>
#include <aws/ssm-incidents/model/DynamicSsmParameterValue.h>
#include <aws/ssm-incidents/model/EmptyChatChannel.h>
#include <aws/ssm-incidents/model/EventReference.h>
#include <aws/ssm-incidents/model/EventSummary.h>
#include <aws/ssm-incidents/model/Filter.h>
#include <aws/ssm-incidents/model/Finding.h>
#include <aws/ssm-incidents/model/FindingDetails.h>
#include <aws/ssm-incidents/model/FindingSummary.h>
#include <aws/ssm-incidents/model/GetIncidentRecordRequest.h>
#include <aws/ssm-incidents/model/GetIncidentRecordResult.h>
#include <aws/ssm-incidents/model/GetReplicationSetRequest.h>
#include <aws/ssm-incidents/model/GetReplicationSetResult.h>
#include <aws/ssm-incidents/model/GetResourcePoliciesRequest.h>
#include <aws/ssm-incidents/model/GetResourcePoliciesResult.h>
#include <aws/ssm-incidents/model/GetResponsePlanRequest.h>
#include <aws/ssm-incidents/model/GetResponsePlanResult.h>
#include <aws/ssm-incidents/model/GetTimelineEventRequest.h>
#include <aws/ssm-incidents/model/GetTimelineEventResult.h>
#include <aws/ssm-incidents/model/IncidentRecord.h>
#include <aws/ssm-incidents/model/IncidentRecordSource.h>
#include <aws/ssm-incidents/model/IncidentRecordStatus.h>
#include <aws/ssm-incidents/model/IncidentRecordSummary.h>
#include <aws/ssm-incidents/model/IncidentTemplate.h>
#include <aws/ssm-incidents/model/Integration.h>
#include <aws/ssm-incidents/model/ItemIdentifier.h>
#include <aws/ssm-incidents/model/ItemType.h>
#include <aws/ssm-incidents/model/ItemValue.h>
#include <aws/ssm-incidents/model/ListIncidentFindingsRequest.h>
#include <aws/ssm-incidents/model/ListIncidentFindingsResult.h>
#include <aws/ssm-incidents/model/ListIncidentRecordsRequest.h>
#include <aws/ssm-incidents/model/ListIncidentRecordsResult.h>
#include <aws/ssm-incidents/model/ListRelatedItemsRequest.h>
#include <aws/ssm-incidents/model/ListRelatedItemsResult.h>
#include <aws/ssm-incidents/model/ListReplicationSetsRequest.h>
#include <aws/ssm-incidents/model/ListReplicationSetsResult.h>
#include <aws/ssm-incidents/model/ListResponsePlansRequest.h>
#include <aws/ssm-incidents/model/ListResponsePlansResult.h>
#include <aws/ssm-incidents/model/ListTagsForResourceRequest.h>
#include <aws/ssm-incidents/model/ListTagsForResourceResult.h>
#include <aws/ssm-incidents/model/ListTimelineEventsRequest.h>
#include <aws/ssm-incidents/model/ListTimelineEventsResult.h>
#include <aws/ssm-incidents/model/NotificationTargetItem.h>
#include <aws/ssm-incidents/model/PagerDutyConfiguration.h>
#include <aws/ssm-incidents/model/PagerDutyIncidentConfiguration.h>
#include <aws/ssm-incidents/model/PagerDutyIncidentDetail.h>
#include <aws/ssm-incidents/model/PutResourcePolicyRequest.h>
#include <aws/ssm-incidents/model/PutResourcePolicyResult.h>
#include <aws/ssm-incidents/model/RegionInfo.h>
#include <aws/ssm-incidents/model/RegionMapInputValue.h>
#include <aws/ssm-incidents/model/RegionStatus.h>
#include <aws/ssm-incidents/model/RelatedItem.h>
#include <aws/ssm-incidents/model/RelatedItemsUpdate.h>
#include <aws/ssm-incidents/model/ReplicationSet.h>
#include <aws/ssm-incidents/model/ReplicationSetStatus.h>
#include <aws/ssm-incidents/model/ResourceNotFoundException.h>
#include <aws/ssm-incidents/model/ResourcePolicy.h>
#include <aws/ssm-incidents/model/ResourceType.h>
#include <aws/ssm-incidents/model/ResponsePlanSummary.h>
#include <aws/ssm-incidents/model/ServiceCode.h>
#include <aws/ssm-incidents/model/ServiceQuotaExceededException.h>
#include <aws/ssm-incidents/model/SortOrder.h>
#include <aws/ssm-incidents/model/SsmAutomation.h>
#include <aws/ssm-incidents/model/SsmTargetAccount.h>
#include <aws/ssm-incidents/model/StartIncidentRequest.h>
#include <aws/ssm-incidents/model/StartIncidentResult.h>
#include <aws/ssm-incidents/model/TagResourceRequest.h>
#include <aws/ssm-incidents/model/TagResourceResult.h>
#include <aws/ssm-incidents/model/ThrottlingException.h>
#include <aws/ssm-incidents/model/TimelineEvent.h>
#include <aws/ssm-incidents/model/TimelineEventSort.h>
#include <aws/ssm-incidents/model/TriggerDetails.h>
#include <aws/ssm-incidents/model/UntagResourceRequest.h>
#include <aws/ssm-incidents/model/UntagResourceResult.h>
#include <aws/ssm-incidents/model/UpdateDeletionProtectionRequest.h>
#include <aws/ssm-incidents/model/UpdateDeletionProtectionResult.h>
#include <aws/ssm-incidents/model/UpdateIncidentRecordRequest.h>
#include <aws/ssm-incidents/model/UpdateIncidentRecordResult.h>
#include <aws/ssm-incidents/model/UpdateRelatedItemsRequest.h>
#include <aws/ssm-incidents/model/UpdateRelatedItemsResult.h>
#include <aws/ssm-incidents/model/UpdateReplicationSetAction.h>
#include <aws/ssm-incidents/model/UpdateReplicationSetRequest.h>
#include <aws/ssm-incidents/model/UpdateReplicationSetResult.h>
#include <aws/ssm-incidents/model/UpdateResponsePlanRequest.h>
#include <aws/ssm-incidents/model/UpdateResponsePlanResult.h>
#include <aws/ssm-incidents/model/UpdateTimelineEventRequest.h>
#include <aws/ssm-incidents/model/UpdateTimelineEventResult.h>
#include <aws/ssm-incidents/model/VariableType.h>

using SSMIncidentsIncludeTest = ::testing::Test;

TEST_F(SSMIncidentsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SSMIncidents::SSMIncidentsClient>("SSMIncidentsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
