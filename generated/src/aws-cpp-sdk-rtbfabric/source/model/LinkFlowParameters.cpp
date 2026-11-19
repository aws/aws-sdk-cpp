/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/LinkFlowParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

LinkFlowParameters::LinkFlowParameters(JsonView jsonValue) { *this = jsonValue; }

LinkFlowParameters& LinkFlowParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("modules")) {
    Aws::Utils::Array<JsonView> modulesJsonList = jsonValue.GetArray("modules");
    for (unsigned modulesIndex = 0; modulesIndex < modulesJsonList.GetLength(); ++modulesIndex) {
      m_modules.push_back(modulesJsonList[modulesIndex].AsObject());
    }
    m_modulesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("flows")) {
    Aws::Utils::Array<JsonView> flowsJsonList = jsonValue.GetArray("flows");
    for (unsigned flowsIndex = 0; flowsIndex < flowsJsonList.GetLength(); ++flowsIndex) {
      m_flows.push_back(flowsJsonList[flowsIndex].AsObject());
    }
    m_flowsHasBeenSet = true;
  }
  return *this;
}

JsonValue LinkFlowParameters::Jsonize() const {
  JsonValue payload;

  if (m_modulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> modulesJsonList(m_modules.size());
    for (unsigned modulesIndex = 0; modulesIndex < modulesJsonList.GetLength(); ++modulesIndex) {
      modulesJsonList[modulesIndex].AsObject(m_modules[modulesIndex].Jsonize());
    }
    payload.WithArray("modules", std::move(modulesJsonList));
  }

  if (m_flowsHasBeenSet) {
    Aws::Utils::Array<JsonValue> flowsJsonList(m_flows.size());
    for (unsigned flowsIndex = 0; flowsIndex < flowsJsonList.GetLength(); ++flowsIndex) {
      flowsJsonList[flowsIndex].AsObject(m_flows[flowsIndex].Jsonize());
    }
    payload.WithArray("flows", std::move(flowsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
