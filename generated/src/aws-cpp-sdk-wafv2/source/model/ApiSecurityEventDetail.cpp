/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/ApiSecurityEventDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

ApiSecurityEventDetail::ApiSecurityEventDetail(JsonView jsonValue) { *this = jsonValue; }

ApiSecurityEventDetail& ApiSecurityEventDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Label")) {
    m_label = jsonValue.GetString("Label");
    m_labelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Category")) {
    m_category = jsonValue.GetString("Category");
    m_categoryHasBeenSet = true;
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
  if (jsonValue.ValueExists("EventActors")) {
    Aws::Utils::Array<JsonView> eventActorsJsonList = jsonValue.GetArray("EventActors");
    for (unsigned eventActorsIndex = 0; eventActorsIndex < eventActorsJsonList.GetLength(); ++eventActorsIndex) {
      m_eventActors.push_back(eventActorsJsonList[eventActorsIndex].AsObject());
    }
    m_eventActorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Timeline")) {
    Aws::Utils::Array<JsonView> timelineJsonList = jsonValue.GetArray("Timeline");
    for (unsigned timelineIndex = 0; timelineIndex < timelineJsonList.GetLength(); ++timelineIndex) {
      m_timeline.push_back(timelineJsonList[timelineIndex].AsObject());
    }
    m_timelineHasBeenSet = true;
  }
  return *this;
}

JsonValue ApiSecurityEventDetail::Jsonize() const {
  JsonValue payload;

  if (m_labelHasBeenSet) {
    payload.WithString("Label", m_label);
  }

  if (m_categoryHasBeenSet) {
    payload.WithString("Category", m_category);
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

  if (m_eventActorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> eventActorsJsonList(m_eventActors.size());
    for (unsigned eventActorsIndex = 0; eventActorsIndex < eventActorsJsonList.GetLength(); ++eventActorsIndex) {
      eventActorsJsonList[eventActorsIndex].AsObject(m_eventActors[eventActorsIndex].Jsonize());
    }
    payload.WithArray("EventActors", std::move(eventActorsJsonList));
  }

  if (m_timelineHasBeenSet) {
    Aws::Utils::Array<JsonValue> timelineJsonList(m_timeline.size());
    for (unsigned timelineIndex = 0; timelineIndex < timelineJsonList.GetLength(); ++timelineIndex) {
      timelineJsonList[timelineIndex].AsObject(m_timeline[timelineIndex].Jsonize());
    }
    payload.WithArray("Timeline", std::move(timelineJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
