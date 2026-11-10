/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/RuleMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

RuleMetadata::RuleMetadata(JsonView jsonValue) { *this = jsonValue; }

RuleMetadata& RuleMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RuleEnabled")) {
    m_ruleEnabled = jsonValue.GetBool("RuleEnabled");
    m_ruleEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RuleDescription")) {
    m_ruleDescription = jsonValue.GetString("RuleDescription");
    m_ruleDescriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleMetadata::Jsonize() const {
  JsonValue payload;

  if (m_ruleEnabledHasBeenSet) {
    payload.WithBool("RuleEnabled", m_ruleEnabled);
  }

  if (m_ruleDescriptionHasBeenSet) {
    payload.WithString("RuleDescription", m_ruleDescription);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
