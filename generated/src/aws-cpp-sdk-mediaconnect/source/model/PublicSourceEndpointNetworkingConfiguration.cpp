/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/PublicSourceEndpointNetworkingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

PublicSourceEndpointNetworkingConfiguration::PublicSourceEndpointNetworkingConfiguration(JsonView jsonValue) { *this = jsonValue; }

PublicSourceEndpointNetworkingConfiguration& PublicSourceEndpointNetworkingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceAllowRules")) {
    Aws::Utils::Array<JsonView> sourceAllowRulesJsonList = jsonValue.GetArray("sourceAllowRules");
    for (unsigned sourceAllowRulesIndex = 0; sourceAllowRulesIndex < sourceAllowRulesJsonList.GetLength(); ++sourceAllowRulesIndex) {
      m_sourceAllowRules.push_back(sourceAllowRulesJsonList[sourceAllowRulesIndex].AsObject());
    }
    m_sourceAllowRulesHasBeenSet = true;
  }
  return *this;
}

JsonValue PublicSourceEndpointNetworkingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sourceAllowRulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourceAllowRulesJsonList(m_sourceAllowRules.size());
    for (unsigned sourceAllowRulesIndex = 0; sourceAllowRulesIndex < sourceAllowRulesJsonList.GetLength(); ++sourceAllowRulesIndex) {
      sourceAllowRulesJsonList[sourceAllowRulesIndex].AsObject(m_sourceAllowRules[sourceAllowRulesIndex].Jsonize());
    }
    payload.WithArray("sourceAllowRules", std::move(sourceAllowRulesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
