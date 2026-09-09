/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediapackagev2/model/MultiviewConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mediapackagev2 {
namespace Model {

MultiviewConfiguration::MultiviewConfiguration(JsonView jsonValue) { *this = jsonValue; }

MultiviewConfiguration& MultiviewConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AvailableSources")) {
    Aws::Utils::Array<JsonView> availableSourcesJsonList = jsonValue.GetArray("AvailableSources");
    for (unsigned availableSourcesIndex = 0; availableSourcesIndex < availableSourcesJsonList.GetLength(); ++availableSourcesIndex) {
      m_availableSources.push_back(availableSourcesJsonList[availableSourcesIndex].AsString());
    }
    m_availableSourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AvailableLayouts")) {
    Aws::Utils::Array<JsonView> availableLayoutsJsonList = jsonValue.GetArray("AvailableLayouts");
    for (unsigned availableLayoutsIndex = 0; availableLayoutsIndex < availableLayoutsJsonList.GetLength(); ++availableLayoutsIndex) {
      m_availableLayouts.push_back(
          MultiviewLayoutTypeMapper::GetMultiviewLayoutTypeForName(availableLayoutsJsonList[availableLayoutsIndex].AsString()));
    }
    m_availableLayoutsHasBeenSet = true;
  }
  return *this;
}

JsonValue MultiviewConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_availableSourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> availableSourcesJsonList(m_availableSources.size());
    for (unsigned availableSourcesIndex = 0; availableSourcesIndex < availableSourcesJsonList.GetLength(); ++availableSourcesIndex) {
      availableSourcesJsonList[availableSourcesIndex].AsString(m_availableSources[availableSourcesIndex]);
    }
    payload.WithArray("AvailableSources", std::move(availableSourcesJsonList));
  }

  if (m_availableLayoutsHasBeenSet) {
    Aws::Utils::Array<JsonValue> availableLayoutsJsonList(m_availableLayouts.size());
    for (unsigned availableLayoutsIndex = 0; availableLayoutsIndex < availableLayoutsJsonList.GetLength(); ++availableLayoutsIndex) {
      availableLayoutsJsonList[availableLayoutsIndex].AsString(
          MultiviewLayoutTypeMapper::GetNameForMultiviewLayoutType(m_availableLayouts[availableLayoutsIndex]));
    }
    payload.WithArray("AvailableLayouts", std::move(availableLayoutsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
