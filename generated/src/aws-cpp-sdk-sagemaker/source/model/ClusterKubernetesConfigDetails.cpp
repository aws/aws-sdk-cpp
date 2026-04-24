/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterKubernetesConfigDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterKubernetesConfigDetails::ClusterKubernetesConfigDetails(JsonView jsonValue) { *this = jsonValue; }

ClusterKubernetesConfigDetails& ClusterKubernetesConfigDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CurrentLabels")) {
    Aws::Map<Aws::String, JsonView> currentLabelsJsonMap = jsonValue.GetObject("CurrentLabels").GetAllObjects();
    for (auto& currentLabelsItem : currentLabelsJsonMap) {
      m_currentLabels[currentLabelsItem.first] = currentLabelsItem.second.AsString();
    }
    m_currentLabelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DesiredLabels")) {
    Aws::Map<Aws::String, JsonView> desiredLabelsJsonMap = jsonValue.GetObject("DesiredLabels").GetAllObjects();
    for (auto& desiredLabelsItem : desiredLabelsJsonMap) {
      m_desiredLabels[desiredLabelsItem.first] = desiredLabelsItem.second.AsString();
    }
    m_desiredLabelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CurrentTaints")) {
    Aws::Utils::Array<JsonView> currentTaintsJsonList = jsonValue.GetArray("CurrentTaints");
    for (unsigned currentTaintsIndex = 0; currentTaintsIndex < currentTaintsJsonList.GetLength(); ++currentTaintsIndex) {
      m_currentTaints.push_back(currentTaintsJsonList[currentTaintsIndex].AsObject());
    }
    m_currentTaintsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DesiredTaints")) {
    Aws::Utils::Array<JsonView> desiredTaintsJsonList = jsonValue.GetArray("DesiredTaints");
    for (unsigned desiredTaintsIndex = 0; desiredTaintsIndex < desiredTaintsJsonList.GetLength(); ++desiredTaintsIndex) {
      m_desiredTaints.push_back(desiredTaintsJsonList[desiredTaintsIndex].AsObject());
    }
    m_desiredTaintsHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterKubernetesConfigDetails::Jsonize() const {
  JsonValue payload;

  if (m_currentLabelsHasBeenSet) {
    JsonValue currentLabelsJsonMap;
    for (auto& currentLabelsItem : m_currentLabels) {
      currentLabelsJsonMap.WithString(currentLabelsItem.first, currentLabelsItem.second);
    }
    payload.WithObject("CurrentLabels", std::move(currentLabelsJsonMap));
  }

  if (m_desiredLabelsHasBeenSet) {
    JsonValue desiredLabelsJsonMap;
    for (auto& desiredLabelsItem : m_desiredLabels) {
      desiredLabelsJsonMap.WithString(desiredLabelsItem.first, desiredLabelsItem.second);
    }
    payload.WithObject("DesiredLabels", std::move(desiredLabelsJsonMap));
  }

  if (m_currentTaintsHasBeenSet) {
    Aws::Utils::Array<JsonValue> currentTaintsJsonList(m_currentTaints.size());
    for (unsigned currentTaintsIndex = 0; currentTaintsIndex < currentTaintsJsonList.GetLength(); ++currentTaintsIndex) {
      currentTaintsJsonList[currentTaintsIndex].AsObject(m_currentTaints[currentTaintsIndex].Jsonize());
    }
    payload.WithArray("CurrentTaints", std::move(currentTaintsJsonList));
  }

  if (m_desiredTaintsHasBeenSet) {
    Aws::Utils::Array<JsonValue> desiredTaintsJsonList(m_desiredTaints.size());
    for (unsigned desiredTaintsIndex = 0; desiredTaintsIndex < desiredTaintsJsonList.GetLength(); ++desiredTaintsIndex) {
      desiredTaintsJsonList[desiredTaintsIndex].AsObject(m_desiredTaints[desiredTaintsIndex].Jsonize());
    }
    payload.WithArray("DesiredTaints", std::move(desiredTaintsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
