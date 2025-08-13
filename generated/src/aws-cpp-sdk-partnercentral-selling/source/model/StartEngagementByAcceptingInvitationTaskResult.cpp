/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/StartEngagementByAcceptingInvitationTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartEngagementByAcceptingInvitationTaskResult::StartEngagementByAcceptingInvitationTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartEngagementByAcceptingInvitationTaskResult& StartEngagementByAcceptingInvitationTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TaskId"))
  {
    m_taskId = jsonValue.GetString("TaskId");
    m_taskIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaskArn"))
  {
    m_taskArn = jsonValue.GetString("TaskArn");
    m_taskArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetString("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaskStatus"))
  {
    m_taskStatus = TaskStatusMapper::GetTaskStatusForName(jsonValue.GetString("TaskStatus"));
    m_taskStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReasonCode"))
  {
    m_reasonCode = ReasonCodeMapper::GetReasonCodeForName(jsonValue.GetString("ReasonCode"));
    m_reasonCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OpportunityId"))
  {
    m_opportunityId = jsonValue.GetString("OpportunityId");
    m_opportunityIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceSnapshotJobId"))
  {
    m_resourceSnapshotJobId = jsonValue.GetString("ResourceSnapshotJobId");
    m_resourceSnapshotJobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EngagementInvitationId"))
  {
    m_engagementInvitationId = jsonValue.GetString("EngagementInvitationId");
    m_engagementInvitationIdHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
