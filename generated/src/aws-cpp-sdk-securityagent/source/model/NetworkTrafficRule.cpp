/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/NetworkTrafficRule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

NetworkTrafficRule::NetworkTrafficRule(JsonView jsonValue) { *this = jsonValue; }

NetworkTrafficRule& NetworkTrafficRule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("effect")) {
    m_effect = NetworkTrafficRuleEffectMapper::GetNetworkTrafficRuleEffectForName(jsonValue.GetString("effect"));
    m_effectHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pattern")) {
    m_pattern = jsonValue.GetString("pattern");
    m_patternHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkTrafficRuleType")) {
    m_networkTrafficRuleType =
        NetworkTrafficRuleTypeMapper::GetNetworkTrafficRuleTypeForName(jsonValue.GetString("networkTrafficRuleType"));
    m_networkTrafficRuleTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkTrafficRule::Jsonize() const {
  JsonValue payload;

  if (m_effectHasBeenSet) {
    payload.WithString("effect", NetworkTrafficRuleEffectMapper::GetNameForNetworkTrafficRuleEffect(m_effect));
  }

  if (m_patternHasBeenSet) {
    payload.WithString("pattern", m_pattern);
  }

  if (m_networkTrafficRuleTypeHasBeenSet) {
    payload.WithString("networkTrafficRuleType", NetworkTrafficRuleTypeMapper::GetNameForNetworkTrafficRuleType(m_networkTrafficRuleType));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
