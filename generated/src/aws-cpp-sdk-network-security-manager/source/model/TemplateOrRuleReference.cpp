/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/TemplateOrRuleReference.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

TemplateOrRuleReference::TemplateOrRuleReference(JsonView jsonValue) { *this = jsonValue; }

TemplateOrRuleReference& TemplateOrRuleReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("templateIdentifier")) {
    m_templateIdentifier = jsonValue.GetString("templateIdentifier");
    m_templateIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ruleIdentifier")) {
    m_ruleIdentifier = jsonValue.GetString("ruleIdentifier");
    m_ruleIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue TemplateOrRuleReference::Jsonize() const {
  JsonValue payload;

  if (m_templateIdentifierHasBeenSet) {
    payload.WithString("templateIdentifier", m_templateIdentifier);
  }

  if (m_ruleIdentifierHasBeenSet) {
    payload.WithString("ruleIdentifier", m_ruleIdentifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
