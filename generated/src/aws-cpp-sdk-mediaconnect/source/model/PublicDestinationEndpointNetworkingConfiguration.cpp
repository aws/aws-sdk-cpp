/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/PublicDestinationEndpointNetworkingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

PublicDestinationEndpointNetworkingConfiguration::PublicDestinationEndpointNetworkingConfiguration(JsonView jsonValue) {
  *this = jsonValue;
}

PublicDestinationEndpointNetworkingConfiguration& PublicDestinationEndpointNetworkingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("destinationAllowRules")) {
    Aws::Utils::Array<JsonView> destinationAllowRulesJsonList = jsonValue.GetArray("destinationAllowRules");
    for (unsigned destinationAllowRulesIndex = 0; destinationAllowRulesIndex < destinationAllowRulesJsonList.GetLength();
         ++destinationAllowRulesIndex) {
      m_destinationAllowRules.push_back(destinationAllowRulesJsonList[destinationAllowRulesIndex].AsObject());
    }
    m_destinationAllowRulesHasBeenSet = true;
  }
  return *this;
}

JsonValue PublicDestinationEndpointNetworkingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_destinationAllowRulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> destinationAllowRulesJsonList(m_destinationAllowRules.size());
    for (unsigned destinationAllowRulesIndex = 0; destinationAllowRulesIndex < destinationAllowRulesJsonList.GetLength();
         ++destinationAllowRulesIndex) {
      destinationAllowRulesJsonList[destinationAllowRulesIndex].AsObject(m_destinationAllowRules[destinationAllowRulesIndex].Jsonize());
    }
    payload.WithArray("destinationAllowRules", std::move(destinationAllowRulesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
