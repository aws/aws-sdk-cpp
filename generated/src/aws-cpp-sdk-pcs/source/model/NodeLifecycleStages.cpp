/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pcs/model/NodeLifecycleStages.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {

NodeLifecycleStages::NodeLifecycleStages(JsonView jsonValue) { *this = jsonValue; }

NodeLifecycleStages& NodeLifecycleStages::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("nodeBootstrapped")) {
    Aws::Utils::Array<JsonView> nodeBootstrappedJsonList = jsonValue.GetArray("nodeBootstrapped");
    for (unsigned nodeBootstrappedIndex = 0; nodeBootstrappedIndex < nodeBootstrappedJsonList.GetLength(); ++nodeBootstrappedIndex) {
      m_nodeBootstrapped.push_back(nodeBootstrappedJsonList[nodeBootstrappedIndex].AsObject());
    }
    m_nodeBootstrappedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nodeReady")) {
    Aws::Utils::Array<JsonView> nodeReadyJsonList = jsonValue.GetArray("nodeReady");
    for (unsigned nodeReadyIndex = 0; nodeReadyIndex < nodeReadyJsonList.GetLength(); ++nodeReadyIndex) {
      m_nodeReady.push_back(nodeReadyJsonList[nodeReadyIndex].AsObject());
    }
    m_nodeReadyHasBeenSet = true;
  }
  return *this;
}

JsonValue NodeLifecycleStages::Jsonize() const {
  JsonValue payload;

  if (m_nodeBootstrappedHasBeenSet) {
    Aws::Utils::Array<JsonValue> nodeBootstrappedJsonList(m_nodeBootstrapped.size());
    for (unsigned nodeBootstrappedIndex = 0; nodeBootstrappedIndex < nodeBootstrappedJsonList.GetLength(); ++nodeBootstrappedIndex) {
      nodeBootstrappedJsonList[nodeBootstrappedIndex].AsObject(m_nodeBootstrapped[nodeBootstrappedIndex].Jsonize());
    }
    payload.WithArray("nodeBootstrapped", std::move(nodeBootstrappedJsonList));
  }

  if (m_nodeReadyHasBeenSet) {
    Aws::Utils::Array<JsonValue> nodeReadyJsonList(m_nodeReady.size());
    for (unsigned nodeReadyIndex = 0; nodeReadyIndex < nodeReadyJsonList.GetLength(); ++nodeReadyIndex) {
      nodeReadyJsonList[nodeReadyIndex].AsObject(m_nodeReady[nodeReadyIndex].Jsonize());
    }
    payload.WithArray("nodeReady", std::move(nodeReadyJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
