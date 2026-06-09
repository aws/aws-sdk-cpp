/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/ModelSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

ModelSummary::ModelSummary(JsonView jsonValue) { *this = jsonValue; }

ModelSummary& ModelSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("modelId")) {
    m_modelId = jsonValue.GetString("modelId");
    m_modelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("crossRegionStatus")) {
    m_crossRegionStatus = CrossRegionStatusMapper::GetCrossRegionStatusForName(jsonValue.GetString("crossRegionStatus"));
    m_crossRegionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportsPromptCaching")) {
    m_supportsPromptCaching = jsonValue.GetBool("supportsPromptCaching");
    m_supportsPromptCachingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportedAIPromptTypes")) {
    Aws::Utils::Array<JsonView> supportedAIPromptTypesJsonList = jsonValue.GetArray("supportedAIPromptTypes");
    for (unsigned supportedAIPromptTypesIndex = 0; supportedAIPromptTypesIndex < supportedAIPromptTypesJsonList.GetLength();
         ++supportedAIPromptTypesIndex) {
      m_supportedAIPromptTypes.push_back(
          AIPromptTypeMapper::GetAIPromptTypeForName(supportedAIPromptTypesJsonList[supportedAIPromptTypesIndex].AsString()));
    }
    m_supportedAIPromptTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("modelLifecycle")) {
    m_modelLifecycle = ModelLifecycleMapper::GetModelLifecycleForName(jsonValue.GetString("modelLifecycle"));
    m_modelLifecycleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("legacyTimestamp")) {
    m_legacyTimestamp = jsonValue.GetDouble("legacyTimestamp");
    m_legacyTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endOfLifeTimestamp")) {
    m_endOfLifeTimestamp = jsonValue.GetDouble("endOfLifeTimestamp");
    m_endOfLifeTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelSummary::Jsonize() const {
  JsonValue payload;

  if (m_modelIdHasBeenSet) {
    payload.WithString("modelId", m_modelId);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_crossRegionStatusHasBeenSet) {
    payload.WithString("crossRegionStatus", CrossRegionStatusMapper::GetNameForCrossRegionStatus(m_crossRegionStatus));
  }

  if (m_supportsPromptCachingHasBeenSet) {
    payload.WithBool("supportsPromptCaching", m_supportsPromptCaching);
  }

  if (m_supportedAIPromptTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> supportedAIPromptTypesJsonList(m_supportedAIPromptTypes.size());
    for (unsigned supportedAIPromptTypesIndex = 0; supportedAIPromptTypesIndex < supportedAIPromptTypesJsonList.GetLength();
         ++supportedAIPromptTypesIndex) {
      supportedAIPromptTypesJsonList[supportedAIPromptTypesIndex].AsString(
          AIPromptTypeMapper::GetNameForAIPromptType(m_supportedAIPromptTypes[supportedAIPromptTypesIndex]));
    }
    payload.WithArray("supportedAIPromptTypes", std::move(supportedAIPromptTypesJsonList));
  }

  if (m_modelLifecycleHasBeenSet) {
    payload.WithString("modelLifecycle", ModelLifecycleMapper::GetNameForModelLifecycle(m_modelLifecycle));
  }

  if (m_legacyTimestampHasBeenSet) {
    payload.WithDouble("legacyTimestamp", m_legacyTimestamp.SecondsWithMSPrecision());
  }

  if (m_endOfLifeTimestampHasBeenSet) {
    payload.WithDouble("endOfLifeTimestamp", m_endOfLifeTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
