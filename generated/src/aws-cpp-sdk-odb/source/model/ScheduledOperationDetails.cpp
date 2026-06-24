/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/ScheduledOperationDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

ScheduledOperationDetails::ScheduledOperationDetails(JsonView jsonValue) { *this = jsonValue; }

ScheduledOperationDetails& ScheduledOperationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dayOfWeek")) {
    m_dayOfWeek = jsonValue.GetObject("dayOfWeek");
    m_dayOfWeekHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheduledStartTime")) {
    m_scheduledStartTime = jsonValue.GetString("scheduledStartTime");
    m_scheduledStartTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheduledStopTime")) {
    m_scheduledStopTime = jsonValue.GetString("scheduledStopTime");
    m_scheduledStopTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduledOperationDetails::Jsonize() const {
  JsonValue payload;

  if (m_dayOfWeekHasBeenSet) {
    payload.WithObject("dayOfWeek", m_dayOfWeek.Jsonize());
  }

  if (m_scheduledStartTimeHasBeenSet) {
    payload.WithString("scheduledStartTime", m_scheduledStartTime);
  }

  if (m_scheduledStopTimeHasBeenSet) {
    payload.WithString("scheduledStopTime", m_scheduledStopTime);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
