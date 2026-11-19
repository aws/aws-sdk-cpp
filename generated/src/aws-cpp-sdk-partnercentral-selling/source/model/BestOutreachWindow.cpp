/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/BestOutreachWindow.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

BestOutreachWindow::BestOutreachWindow(JsonView jsonValue) { *this = jsonValue; }

BestOutreachWindow& BestOutreachWindow::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Day")) {
    m_day = DayOfWeekMapper::GetDayOfWeekForName(jsonValue.GetString("Day"));
    m_dayHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartTimeUtc")) {
    m_startTimeUtc = jsonValue.GetString("StartTimeUtc");
    m_startTimeUtcHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTimeUtc")) {
    m_endTimeUtc = jsonValue.GetString("EndTimeUtc");
    m_endTimeUtcHasBeenSet = true;
  }
  return *this;
}

JsonValue BestOutreachWindow::Jsonize() const {
  JsonValue payload;

  if (m_dayHasBeenSet) {
    payload.WithString("Day", DayOfWeekMapper::GetNameForDayOfWeek(m_day));
  }

  if (m_startTimeUtcHasBeenSet) {
    payload.WithString("StartTimeUtc", m_startTimeUtc);
  }

  if (m_endTimeUtcHasBeenSet) {
    payload.WithString("EndTimeUtc", m_endTimeUtc);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
