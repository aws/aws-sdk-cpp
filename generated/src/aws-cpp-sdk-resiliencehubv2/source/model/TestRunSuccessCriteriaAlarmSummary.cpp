/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/TestRunSuccessCriteriaAlarmSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

TestRunSuccessCriteriaAlarmSummary::TestRunSuccessCriteriaAlarmSummary(JsonView jsonValue) { *this = jsonValue; }

TestRunSuccessCriteriaAlarmSummary& TestRunSuccessCriteriaAlarmSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("alarmArn")) {
    m_alarmArn = jsonValue.GetString("alarmArn");
    m_alarmArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("alarmName")) {
    m_alarmName = jsonValue.GetString("alarmName");
    m_alarmNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("region")) {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outcome")) {
    m_outcome = TestSourceOutcomeMapper::GetTestSourceOutcomeForName(jsonValue.GetString("outcome"));
    m_outcomeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outcomeReason")) {
    m_outcomeReason = jsonValue.GetString("outcomeReason");
    m_outcomeReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue TestRunSuccessCriteriaAlarmSummary::Jsonize() const {
  JsonValue payload;

  if (m_alarmArnHasBeenSet) {
    payload.WithString("alarmArn", m_alarmArn);
  }

  if (m_alarmNameHasBeenSet) {
    payload.WithString("alarmName", m_alarmName);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("region", m_region);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_outcomeHasBeenSet) {
    payload.WithString("outcome", TestSourceOutcomeMapper::GetNameForTestSourceOutcome(m_outcome));
  }

  if (m_outcomeReasonHasBeenSet) {
    payload.WithString("outcomeReason", m_outcomeReason);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
