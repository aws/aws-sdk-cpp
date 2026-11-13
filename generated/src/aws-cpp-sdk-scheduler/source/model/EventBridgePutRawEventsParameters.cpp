/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/scheduler/model/EventBridgePutRawEventsParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Scheduler {
namespace Model {

EventBridgePutRawEventsParameters::EventBridgePutRawEventsParameters(JsonView jsonValue) { *this = jsonValue; }

EventBridgePutRawEventsParameters& EventBridgePutRawEventsParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Metadata")) {
    Aws::Map<Aws::String, JsonView> metadataJsonMap = jsonValue.GetObject("Metadata").GetAllObjects();
    for (auto& metadataItem : metadataJsonMap) {
      m_metadata[metadataItem.first] = metadataItem.second.AsString();
    }
    m_metadataHasBeenSet = true;
  }
  return *this;
}

JsonValue EventBridgePutRawEventsParameters::Jsonize() const {
  JsonValue payload;

  if (m_metadataHasBeenSet) {
    JsonValue metadataJsonMap;
    for (auto& metadataItem : m_metadata) {
      metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
    }
    payload.WithObject("Metadata", std::move(metadataJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Scheduler
}  // namespace Aws
