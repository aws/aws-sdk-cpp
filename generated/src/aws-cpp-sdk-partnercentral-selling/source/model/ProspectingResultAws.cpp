/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/ProspectingResultAws.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

ProspectingResultAws::ProspectingResultAws(JsonView jsonValue) { *this = jsonValue; }

ProspectingResultAws& ProspectingResultAws::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StartTime")) {
    m_startTime = jsonValue.GetString("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTime")) {
    m_endTime = jsonValue.GetString("EndTime");
    m_endTimeHasBeenSet = true;
  }
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
  if (jsonValue.ValueExists("Customer")) {
    m_customer = jsonValue.GetObject("Customer");
    m_customerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Insights")) {
    m_insights = jsonValue.GetObject("Insights");
    m_insightsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProspectingResultAws::Jsonize() const {
  JsonValue payload;

  if (m_startTimeHasBeenSet) {
    payload.WithString("StartTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_endTimeHasBeenSet) {
    payload.WithString("EndTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_taskIdHasBeenSet) {
    payload.WithString("TaskId", m_taskId);
  }

  if (m_taskArnHasBeenSet) {
    payload.WithString("TaskArn", m_taskArn);
  }

  if (m_taskNameHasBeenSet) {
    payload.WithString("TaskName", m_taskName);
  }

  if (m_customerHasBeenSet) {
    payload.WithObject("Customer", m_customer.Jsonize());
  }

  if (m_insightsHasBeenSet) {
    payload.WithObject("Insights", m_insights.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
