/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/EventActorDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

EventActorDetail::EventActorDetail(JsonView jsonValue) { *this = jsonValue; }

EventActorDetail& EventActorDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Summary")) {
    m_summary = jsonValue.GetObject("Summary");
    m_summaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Events")) {
    Aws::Utils::Array<JsonView> eventsJsonList = jsonValue.GetArray("Events");
    for (unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex) {
      m_events.push_back(eventsJsonList[eventsIndex].AsObject());
    }
    m_eventsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Changes")) {
    Aws::Utils::Array<JsonView> changesJsonList = jsonValue.GetArray("Changes");
    for (unsigned changesIndex = 0; changesIndex < changesJsonList.GetLength(); ++changesIndex) {
      m_changes.push_back(changesJsonList[changesIndex].AsObject());
    }
    m_changesHasBeenSet = true;
  }
  return *this;
}

JsonValue EventActorDetail::Jsonize() const {
  JsonValue payload;

  if (m_summaryHasBeenSet) {
    payload.WithObject("Summary", m_summary.Jsonize());
  }

  if (m_eventsHasBeenSet) {
    Aws::Utils::Array<JsonValue> eventsJsonList(m_events.size());
    for (unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex) {
      eventsJsonList[eventsIndex].AsObject(m_events[eventsIndex].Jsonize());
    }
    payload.WithArray("Events", std::move(eventsJsonList));
  }

  if (m_changesHasBeenSet) {
    Aws::Utils::Array<JsonValue> changesJsonList(m_changes.size());
    for (unsigned changesIndex = 0; changesIndex < changesJsonList.GetLength(); ++changesIndex) {
      changesJsonList[changesIndex].AsObject(m_changes[changesIndex].Jsonize());
    }
    payload.WithArray("Changes", std::move(changesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
