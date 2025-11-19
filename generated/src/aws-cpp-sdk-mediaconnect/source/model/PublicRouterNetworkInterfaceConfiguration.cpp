/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/PublicRouterNetworkInterfaceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

PublicRouterNetworkInterfaceConfiguration::PublicRouterNetworkInterfaceConfiguration(JsonView jsonValue) { *this = jsonValue; }

PublicRouterNetworkInterfaceConfiguration& PublicRouterNetworkInterfaceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("allowRules")) {
    Aws::Utils::Array<JsonView> allowRulesJsonList = jsonValue.GetArray("allowRules");
    for (unsigned allowRulesIndex = 0; allowRulesIndex < allowRulesJsonList.GetLength(); ++allowRulesIndex) {
      m_allowRules.push_back(allowRulesJsonList[allowRulesIndex].AsObject());
    }
    m_allowRulesHasBeenSet = true;
  }
  return *this;
}

JsonValue PublicRouterNetworkInterfaceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_allowRulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowRulesJsonList(m_allowRules.size());
    for (unsigned allowRulesIndex = 0; allowRulesIndex < allowRulesJsonList.GetLength(); ++allowRulesIndex) {
      allowRulesJsonList[allowRulesIndex].AsObject(m_allowRules[allowRulesIndex].Jsonize());
    }
    payload.WithArray("allowRules", std::move(allowRulesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
