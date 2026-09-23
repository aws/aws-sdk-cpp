/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/RuleReference.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

RuleReference::RuleReference(JsonView jsonValue) { *this = jsonValue; }

RuleReference& RuleReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ruleIdentifier")) {
    m_ruleIdentifier = jsonValue.GetString("ruleIdentifier");
    m_ruleIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleReference::Jsonize() const {
  JsonValue payload;

  if (m_ruleIdentifierHasBeenSet) {
    payload.WithString("ruleIdentifier", m_ruleIdentifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
