/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/EventTimelineEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

EventTimelineEntry::EventTimelineEntry(JsonView jsonValue) { *this = jsonValue; }

EventTimelineEntry& EventTimelineEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ChangeTime")) {
    m_changeTime = jsonValue.GetDouble("ChangeTime");
    m_changeTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Label")) {
    m_label = jsonValue.GetString("Label");
    m_labelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Confidence")) {
    m_confidence = ConfidenceMapper::GetConfidenceForName(jsonValue.GetString("Confidence"));
    m_confidenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ApiPatterns")) {
    Aws::Utils::Array<JsonView> apiPatternsJsonList = jsonValue.GetArray("ApiPatterns");
    for (unsigned apiPatternsIndex = 0; apiPatternsIndex < apiPatternsJsonList.GetLength(); ++apiPatternsIndex) {
      m_apiPatterns.push_back(apiPatternsJsonList[apiPatternsIndex].AsObject());
    }
    m_apiPatternsHasBeenSet = true;
  }
  return *this;
}

JsonValue EventTimelineEntry::Jsonize() const {
  JsonValue payload;

  if (m_changeTimeHasBeenSet) {
    payload.WithDouble("ChangeTime", m_changeTime.SecondsWithMSPrecision());
  }

  if (m_labelHasBeenSet) {
    payload.WithString("Label", m_label);
  }

  if (m_confidenceHasBeenSet) {
    payload.WithString("Confidence", ConfidenceMapper::GetNameForConfidence(m_confidence));
  }

  if (m_apiPatternsHasBeenSet) {
    Aws::Utils::Array<JsonValue> apiPatternsJsonList(m_apiPatterns.size());
    for (unsigned apiPatternsIndex = 0; apiPatternsIndex < apiPatternsJsonList.GetLength(); ++apiPatternsIndex) {
      apiPatternsJsonList[apiPatternsIndex].AsObject(m_apiPatterns[apiPatternsIndex].Jsonize());
    }
    payload.WithArray("ApiPatterns", std::move(apiPatternsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
