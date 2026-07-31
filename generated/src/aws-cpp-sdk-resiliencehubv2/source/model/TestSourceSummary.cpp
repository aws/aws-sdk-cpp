/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/TestSourceSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

TestSourceSummary::TestSourceSummary(JsonView jsonValue) { *this = jsonValue; }

TestSourceSummary& TestSourceSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("successCriteriaAlarm")) {
    m_successCriteriaAlarm = jsonValue.GetObject("successCriteriaAlarm");
    m_successCriteriaAlarmHasBeenSet = true;
  }
  if (jsonValue.ValueExists("observabilityAlarm")) {
    m_observabilityAlarm = jsonValue.GetObject("observabilityAlarm");
    m_observabilityAlarmHasBeenSet = true;
  }
  return *this;
}

JsonValue TestSourceSummary::Jsonize() const {
  JsonValue payload;

  if (m_successCriteriaAlarmHasBeenSet) {
    payload.WithObject("successCriteriaAlarm", m_successCriteriaAlarm.Jsonize());
  }

  if (m_observabilityAlarmHasBeenSet) {
    payload.WithObject("observabilityAlarm", m_observabilityAlarm.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
