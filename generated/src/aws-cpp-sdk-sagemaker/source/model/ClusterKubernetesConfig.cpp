/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterKubernetesConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterKubernetesConfig::ClusterKubernetesConfig(JsonView jsonValue) { *this = jsonValue; }

ClusterKubernetesConfig& ClusterKubernetesConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Labels")) {
    Aws::Map<Aws::String, JsonView> labelsJsonMap = jsonValue.GetObject("Labels").GetAllObjects();
    for (auto& labelsItem : labelsJsonMap) {
      m_labels[labelsItem.first] = labelsItem.second.AsString();
    }
    m_labelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Taints")) {
    Aws::Utils::Array<JsonView> taintsJsonList = jsonValue.GetArray("Taints");
    for (unsigned taintsIndex = 0; taintsIndex < taintsJsonList.GetLength(); ++taintsIndex) {
      m_taints.push_back(taintsJsonList[taintsIndex].AsObject());
    }
    m_taintsHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterKubernetesConfig::Jsonize() const {
  JsonValue payload;

  if (m_labelsHasBeenSet) {
    JsonValue labelsJsonMap;
    for (auto& labelsItem : m_labels) {
      labelsJsonMap.WithString(labelsItem.first, labelsItem.second);
    }
    payload.WithObject("Labels", std::move(labelsJsonMap));
  }

  if (m_taintsHasBeenSet) {
    Aws::Utils::Array<JsonValue> taintsJsonList(m_taints.size());
    for (unsigned taintsIndex = 0; taintsIndex < taintsJsonList.GetLength(); ++taintsIndex) {
      taintsJsonList[taintsIndex].AsObject(m_taints[taintsIndex].Jsonize());
    }
    payload.WithArray("Taints", std::move(taintsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
