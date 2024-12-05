/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ListEngagementByAcceptingInvitationTaskSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

ListEngagementByAcceptingInvitationTaskSummary::ListEngagementByAcceptingInvitationTaskSummary() : 
    m_engagementInvitationIdHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_opportunityIdHasBeenSet(false),
    m_reasonCode(ReasonCode::NOT_SET),
    m_reasonCodeHasBeenSet(false),
    m_resourceSnapshotJobIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_taskArnHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskStatus(TaskStatus::NOT_SET),
    m_taskStatusHasBeenSet(false)
{
}

ListEngagementByAcceptingInvitationTaskSummary::ListEngagementByAcceptingInvitationTaskSummary(JsonView jsonValue)
  : ListEngagementByAcceptingInvitationTaskSummary()
{
  *this = jsonValue;
}

ListEngagementByAcceptingInvitationTaskSummary& ListEngagementByAcceptingInvitationTaskSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EngagementInvitationId"))
  {
    m_engagementInvitationId = jsonValue.GetString("EngagementInvitationId");

    m_engagementInvitationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OpportunityId"))
  {
    m_opportunityId = jsonValue.GetString("OpportunityId");

    m_opportunityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReasonCode"))
  {
    m_reasonCode = ReasonCodeMapper::GetReasonCodeForName(jsonValue.GetString("ReasonCode"));

    m_reasonCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceSnapshotJobId"))
  {
    m_resourceSnapshotJobId = jsonValue.GetString("ResourceSnapshotJobId");

    m_resourceSnapshotJobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetString("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskArn"))
  {
    m_taskArn = jsonValue.GetString("TaskArn");

    m_taskArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskId"))
  {
    m_taskId = jsonValue.GetString("TaskId");

    m_taskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskStatus"))
  {
    m_taskStatus = TaskStatusMapper::GetTaskStatusForName(jsonValue.GetString("TaskStatus"));

    m_taskStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ListEngagementByAcceptingInvitationTaskSummary::Jsonize() const
{
  JsonValue payload;

  if(m_engagementInvitationIdHasBeenSet)
  {
   payload.WithString("EngagementInvitationId", m_engagementInvitationId);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_opportunityIdHasBeenSet)
  {
   payload.WithString("OpportunityId", m_opportunityId);

  }

  if(m_reasonCodeHasBeenSet)
  {
   payload.WithString("ReasonCode", ReasonCodeMapper::GetNameForReasonCode(m_reasonCode));
  }

  if(m_resourceSnapshotJobIdHasBeenSet)
  {
   payload.WithString("ResourceSnapshotJobId", m_resourceSnapshotJobId);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("StartTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_taskArnHasBeenSet)
  {
   payload.WithString("TaskArn", m_taskArn);

  }

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("TaskId", m_taskId);

  }

  if(m_taskStatusHasBeenSet)
  {
   payload.WithString("TaskStatus", TaskStatusMapper::GetNameForTaskStatus(m_taskStatus));
  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
