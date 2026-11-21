/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/KnowledgeBaseScheduleRefreshOnEntity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

KnowledgeBaseScheduleRefreshOnEntity::KnowledgeBaseScheduleRefreshOnEntity(JsonView jsonValue) { *this = jsonValue; }

KnowledgeBaseScheduleRefreshOnEntity& KnowledgeBaseScheduleRefreshOnEntity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DayOfWeek")) {
    m_dayOfWeek = KbDayOfWeekMapper::GetKbDayOfWeekForName(jsonValue.GetString("DayOfWeek"));
    m_dayOfWeekHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DayOfMonth")) {
    m_dayOfMonth = jsonValue.GetString("DayOfMonth");
    m_dayOfMonthHasBeenSet = true;
  }
  return *this;
}

JsonValue KnowledgeBaseScheduleRefreshOnEntity::Jsonize() const {
  JsonValue payload;

  if (m_dayOfWeekHasBeenSet) {
    payload.WithString("DayOfWeek", KbDayOfWeekMapper::GetNameForKbDayOfWeek(m_dayOfWeek));
  }

  if (m_dayOfMonthHasBeenSet) {
    payload.WithString("DayOfMonth", m_dayOfMonth);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
