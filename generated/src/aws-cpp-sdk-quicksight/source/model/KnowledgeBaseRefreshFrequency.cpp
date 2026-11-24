/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/KnowledgeBaseRefreshFrequency.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

KnowledgeBaseRefreshFrequency::KnowledgeBaseRefreshFrequency(JsonView jsonValue) { *this = jsonValue; }

KnowledgeBaseRefreshFrequency& KnowledgeBaseRefreshFrequency::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Interval")) {
    m_interval = KbRefreshIntervalMapper::GetKbRefreshIntervalForName(jsonValue.GetString("Interval"));
    m_intervalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RefreshOnDay")) {
    m_refreshOnDay = jsonValue.GetObject("RefreshOnDay");
    m_refreshOnDayHasBeenSet = true;
  }
  return *this;
}

JsonValue KnowledgeBaseRefreshFrequency::Jsonize() const {
  JsonValue payload;

  if (m_intervalHasBeenSet) {
    payload.WithString("Interval", KbRefreshIntervalMapper::GetNameForKbRefreshInterval(m_interval));
  }

  if (m_refreshOnDayHasBeenSet) {
    payload.WithObject("RefreshOnDay", m_refreshOnDay.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
