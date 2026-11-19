/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/FlowPhase.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

FlowPhase::FlowPhase(JsonView jsonValue) { *this = jsonValue; }

FlowPhase& FlowPhase::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("modules")) {
    Aws::Utils::Array<JsonView> modulesJsonList = jsonValue.GetArray("modules");
    for (unsigned modulesIndex = 0; modulesIndex < modulesJsonList.GetLength(); ++modulesIndex) {
      m_modules.push_back(modulesJsonList[modulesIndex].AsObject());
    }
    m_modulesHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowPhase::Jsonize() const {
  JsonValue payload;

  if (m_modulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> modulesJsonList(m_modules.size());
    for (unsigned modulesIndex = 0; modulesIndex < modulesJsonList.GetLength(); ++modulesIndex) {
      modulesJsonList[modulesIndex].AsObject(m_modules[modulesIndex].Jsonize());
    }
    payload.WithArray("modules", std::move(modulesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
