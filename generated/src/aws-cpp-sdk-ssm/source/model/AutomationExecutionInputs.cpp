/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm/model/AutomationExecutionInputs.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SSM {
namespace Model {

AutomationExecutionInputs::AutomationExecutionInputs(JsonView jsonValue) { *this = jsonValue; }

AutomationExecutionInputs& AutomationExecutionInputs::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Parameters")) {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for (auto& parametersItem : parametersJsonMap) {
      Aws::Utils::Array<JsonView> automationParameterValueList2JsonList = parametersItem.second.AsArray();
      Aws::Vector<Aws::String> automationParameterValueList2List;
      automationParameterValueList2List.reserve((size_t)automationParameterValueList2JsonList.GetLength());
      for (unsigned automationParameterValueList2Index = 0;
           automationParameterValueList2Index < automationParameterValueList2JsonList.GetLength(); ++automationParameterValueList2Index) {
        automationParameterValueList2List.push_back(automationParameterValueList2JsonList[automationParameterValueList2Index].AsString());
      }
      m_parameters[parametersItem.first] = std::move(automationParameterValueList2List);
    }
    m_parametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetParameterName")) {
    m_targetParameterName = jsonValue.GetString("TargetParameterName");
    m_targetParameterNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Targets")) {
    Aws::Utils::Array<JsonView> targetsJsonList = jsonValue.GetArray("Targets");
    for (unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex) {
      m_targets.push_back(targetsJsonList[targetsIndex].AsObject());
    }
    m_targetsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetMaps")) {
    Aws::Utils::Array<JsonView> targetMapsJsonList = jsonValue.GetArray("TargetMaps");
    for (unsigned targetMapsIndex = 0; targetMapsIndex < targetMapsJsonList.GetLength(); ++targetMapsIndex) {
      Aws::Map<Aws::String, JsonView> targetMap2JsonMap = targetMapsJsonList[targetMapsIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::Vector<Aws::String>> targetMap2Map;
      for (auto& targetMap2Item : targetMap2JsonMap) {
        Aws::Utils::Array<JsonView> targetMapValueList3JsonList = targetMap2Item.second.AsArray();
        Aws::Vector<Aws::String> targetMapValueList3List;
        targetMapValueList3List.reserve((size_t)targetMapValueList3JsonList.GetLength());
        for (unsigned targetMapValueList3Index = 0; targetMapValueList3Index < targetMapValueList3JsonList.GetLength();
             ++targetMapValueList3Index) {
          targetMapValueList3List.push_back(targetMapValueList3JsonList[targetMapValueList3Index].AsString());
        }
        targetMap2Map[targetMap2Item.first] = std::move(targetMapValueList3List);
      }
      m_targetMaps.push_back(std::move(targetMap2Map));
    }
    m_targetMapsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetLocations")) {
    Aws::Utils::Array<JsonView> targetLocationsJsonList = jsonValue.GetArray("TargetLocations");
    for (unsigned targetLocationsIndex = 0; targetLocationsIndex < targetLocationsJsonList.GetLength(); ++targetLocationsIndex) {
      m_targetLocations.push_back(targetLocationsJsonList[targetLocationsIndex].AsObject());
    }
    m_targetLocationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetLocationsURL")) {
    m_targetLocationsURL = jsonValue.GetString("TargetLocationsURL");
    m_targetLocationsURLHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomationExecutionInputs::Jsonize() const {
  JsonValue payload;

  if (m_parametersHasBeenSet) {
    JsonValue parametersJsonMap;
    for (auto& parametersItem : m_parameters) {
      Aws::Utils::Array<JsonValue> automationParameterValueListJsonList(parametersItem.second.size());
      for (unsigned automationParameterValueListIndex = 0;
           automationParameterValueListIndex < automationParameterValueListJsonList.GetLength(); ++automationParameterValueListIndex) {
        automationParameterValueListJsonList[automationParameterValueListIndex].AsString(
            parametersItem.second[automationParameterValueListIndex]);
      }
      parametersJsonMap.WithArray(parametersItem.first, std::move(automationParameterValueListJsonList));
    }
    payload.WithObject("Parameters", std::move(parametersJsonMap));
  }

  if (m_targetParameterNameHasBeenSet) {
    payload.WithString("TargetParameterName", m_targetParameterName);
  }

  if (m_targetsHasBeenSet) {
    Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
    for (unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex) {
      targetsJsonList[targetsIndex].AsObject(m_targets[targetsIndex].Jsonize());
    }
    payload.WithArray("Targets", std::move(targetsJsonList));
  }

  if (m_targetMapsHasBeenSet) {
    Aws::Utils::Array<JsonValue> targetMapsJsonList(m_targetMaps.size());
    for (unsigned targetMapsIndex = 0; targetMapsIndex < targetMapsJsonList.GetLength(); ++targetMapsIndex) {
      JsonValue targetMapJsonMap;
      for (auto& targetMapItem : m_targetMaps[targetMapsIndex]) {
        Aws::Utils::Array<JsonValue> targetMapValueListJsonList(targetMapItem.second.size());
        for (unsigned targetMapValueListIndex = 0; targetMapValueListIndex < targetMapValueListJsonList.GetLength();
             ++targetMapValueListIndex) {
          targetMapValueListJsonList[targetMapValueListIndex].AsString(targetMapItem.second[targetMapValueListIndex]);
        }
        targetMapJsonMap.WithArray(targetMapItem.first, std::move(targetMapValueListJsonList));
      }
      targetMapsJsonList[targetMapsIndex].AsObject(std::move(targetMapJsonMap));
    }
    payload.WithArray("TargetMaps", std::move(targetMapsJsonList));
  }

  if (m_targetLocationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> targetLocationsJsonList(m_targetLocations.size());
    for (unsigned targetLocationsIndex = 0; targetLocationsIndex < targetLocationsJsonList.GetLength(); ++targetLocationsIndex) {
      targetLocationsJsonList[targetLocationsIndex].AsObject(m_targetLocations[targetLocationsIndex].Jsonize());
    }
    payload.WithArray("TargetLocations", std::move(targetLocationsJsonList));
  }

  if (m_targetLocationsURLHasBeenSet) {
    payload.WithString("TargetLocationsURL", m_targetLocationsURL);
  }

  return payload;
}

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
