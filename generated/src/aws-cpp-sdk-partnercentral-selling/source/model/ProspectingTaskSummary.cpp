/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/ProspectingTaskSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

ProspectingTaskSummary::ProspectingTaskSummary(JsonView jsonValue) { *this = jsonValue; }

ProspectingTaskSummary& ProspectingTaskSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TaskId")) {
    m_taskId = jsonValue.GetString("TaskId");
    m_taskIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TaskArn")) {
    m_taskArn = jsonValue.GetString("TaskArn");
    m_taskArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TaskName")) {
    m_taskName = jsonValue.GetString("TaskName");
    m_taskNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartTime")) {
    m_startTime = jsonValue.GetString("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTime")) {
    m_endTime = jsonValue.GetString("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalEngagementCount")) {
    m_totalEngagementCount = jsonValue.GetInteger("TotalEngagementCount");
    m_totalEngagementCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CompletedEngagementCount")) {
    m_completedEngagementCount = jsonValue.GetInteger("CompletedEngagementCount");
    m_completedEngagementCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailedEngagementCount")) {
    m_failedEngagementCount = jsonValue.GetInteger("FailedEngagementCount");
    m_failedEngagementCountHasBeenSet = true;
  }
  return *this;
}

JsonValue ProspectingTaskSummary::Jsonize() const {
  JsonValue payload;

  if (m_taskIdHasBeenSet) {
    payload.WithString("TaskId", m_taskId);
  }

  if (m_taskArnHasBeenSet) {
    payload.WithString("TaskArn", m_taskArn);
  }

  if (m_taskNameHasBeenSet) {
    payload.WithString("TaskName", m_taskName);
  }

  if (m_startTimeHasBeenSet) {
    payload.WithString("StartTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_endTimeHasBeenSet) {
    payload.WithString("EndTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_totalEngagementCountHasBeenSet) {
    payload.WithInteger("TotalEngagementCount", m_totalEngagementCount);
  }

  if (m_completedEngagementCountHasBeenSet) {
    payload.WithInteger("CompletedEngagementCount", m_completedEngagementCount);
  }

  if (m_failedEngagementCountHasBeenSet) {
    payload.WithInteger("FailedEngagementCount", m_failedEngagementCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
