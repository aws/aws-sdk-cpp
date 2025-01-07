﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/StartEngagementFromOpportunityTaskResult.h>
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

StartEngagementFromOpportunityTaskResult::StartEngagementFromOpportunityTaskResult() : 
    m_reasonCode(ReasonCode::NOT_SET),
    m_taskStatus(TaskStatus::NOT_SET)
{
}

StartEngagementFromOpportunityTaskResult::StartEngagementFromOpportunityTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : StartEngagementFromOpportunityTaskResult()
{
  *this = result;
}

StartEngagementFromOpportunityTaskResult& StartEngagementFromOpportunityTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EngagementId"))
  {
    m_engagementId = jsonValue.GetString("EngagementId");

  }

  if(jsonValue.ValueExists("EngagementInvitationId"))
  {
    m_engagementInvitationId = jsonValue.GetString("EngagementInvitationId");

  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

  }

  if(jsonValue.ValueExists("OpportunityId"))
  {
    m_opportunityId = jsonValue.GetString("OpportunityId");

  }

  if(jsonValue.ValueExists("ReasonCode"))
  {
    m_reasonCode = ReasonCodeMapper::GetReasonCodeForName(jsonValue.GetString("ReasonCode"));

  }

  if(jsonValue.ValueExists("ResourceSnapshotJobId"))
  {
    m_resourceSnapshotJobId = jsonValue.GetString("ResourceSnapshotJobId");

  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetString("StartTime");

  }

  if(jsonValue.ValueExists("TaskArn"))
  {
    m_taskArn = jsonValue.GetString("TaskArn");

  }

  if(jsonValue.ValueExists("TaskId"))
  {
    m_taskId = jsonValue.GetString("TaskId");

  }

  if(jsonValue.ValueExists("TaskStatus"))
  {
    m_taskStatus = TaskStatusMapper::GetTaskStatusForName(jsonValue.GetString("TaskStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
