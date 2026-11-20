/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/AWSManagedRulesAISecurityRuleSet.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

AWSManagedRulesAISecurityRuleSet::AWSManagedRulesAISecurityRuleSet(JsonView jsonValue) { *this = jsonValue; }

AWSManagedRulesAISecurityRuleSet& AWSManagedRulesAISecurityRuleSet::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BedrockGuardrails")) {
    m_bedrockGuardrails = jsonValue.GetObject("BedrockGuardrails");
    m_bedrockGuardrailsHasBeenSet = true;
  }
  return *this;
}

JsonValue AWSManagedRulesAISecurityRuleSet::Jsonize() const {
  JsonValue payload;

  if (m_bedrockGuardrailsHasBeenSet) {
    payload.WithObject("BedrockGuardrails", m_bedrockGuardrails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
