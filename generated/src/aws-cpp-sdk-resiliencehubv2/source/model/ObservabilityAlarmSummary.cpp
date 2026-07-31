/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ObservabilityAlarmSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ObservabilityAlarmSummary::ObservabilityAlarmSummary(JsonView jsonValue) { *this = jsonValue; }

ObservabilityAlarmSummary& ObservabilityAlarmSummary::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ObservabilityAlarmSummary::Jsonize() const {
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

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
