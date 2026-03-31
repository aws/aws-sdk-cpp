/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/NetworkTrafficConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

NetworkTrafficConfig::NetworkTrafficConfig(JsonView jsonValue) { *this = jsonValue; }

NetworkTrafficConfig& NetworkTrafficConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("rules")) {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("rules");
    for (unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex) {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("customHeaders")) {
    Aws::Utils::Array<JsonView> customHeadersJsonList = jsonValue.GetArray("customHeaders");
    for (unsigned customHeadersIndex = 0; customHeadersIndex < customHeadersJsonList.GetLength(); ++customHeadersIndex) {
      m_customHeaders.push_back(customHeadersJsonList[customHeadersIndex].AsObject());
    }
    m_customHeadersHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkTrafficConfig::Jsonize() const {
  JsonValue payload;

  if (m_rulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
    for (unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex) {
      rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
    }
    payload.WithArray("rules", std::move(rulesJsonList));
  }

  if (m_customHeadersHasBeenSet) {
    Aws::Utils::Array<JsonValue> customHeadersJsonList(m_customHeaders.size());
    for (unsigned customHeadersIndex = 0; customHeadersIndex < customHeadersJsonList.GetLength(); ++customHeadersIndex) {
      customHeadersJsonList[customHeadersIndex].AsObject(m_customHeaders[customHeadersIndex].Jsonize());
    }
    payload.WithArray("customHeaders", std::move(customHeadersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
