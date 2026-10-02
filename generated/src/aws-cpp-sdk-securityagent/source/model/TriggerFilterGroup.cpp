/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/TriggerFilterGroup.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

TriggerFilterGroup::TriggerFilterGroup(JsonView jsonValue) { *this = jsonValue; }

TriggerFilterGroup& TriggerFilterGroup::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("events")) {
    Aws::Utils::Array<JsonView> eventsJsonList = jsonValue.GetArray("events");
    for (unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex) {
      m_events.push_back(TriggerEventMapper::GetTriggerEventForName(eventsJsonList[eventsIndex].AsString()));
    }
    m_eventsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("filters")) {
    Aws::Utils::Array<JsonView> filtersJsonList = jsonValue.GetArray("filters");
    for (unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex) {
      m_filters.push_back(filtersJsonList[filtersIndex].AsObject());
    }
    m_filtersHasBeenSet = true;
  }
  return *this;
}

JsonValue TriggerFilterGroup::Jsonize() const {
  JsonValue payload;

  if (m_eventsHasBeenSet) {
    Aws::Utils::Array<JsonValue> eventsJsonList(m_events.size());
    for (unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex) {
      eventsJsonList[eventsIndex].AsString(TriggerEventMapper::GetNameForTriggerEvent(m_events[eventsIndex]));
    }
    payload.WithArray("events", std::move(eventsJsonList));
  }

  if (m_filtersHasBeenSet) {
    Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
    for (unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex) {
      filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
    }
    payload.WithArray("filters", std::move(filtersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
