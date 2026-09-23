/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/AssociatedTemplateOrRule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

AssociatedTemplateOrRule::AssociatedTemplateOrRule(JsonView jsonValue) { *this = jsonValue; }

AssociatedTemplateOrRule& AssociatedTemplateOrRule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("templateArn")) {
    m_templateArn = jsonValue.GetString("templateArn");
    m_templateArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ruleArn")) {
    m_ruleArn = jsonValue.GetString("ruleArn");
    m_ruleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AssociatedTemplateOrRule::Jsonize() const {
  JsonValue payload;

  if (m_templateArnHasBeenSet) {
    payload.WithString("templateArn", m_templateArn);
  }

  if (m_ruleArnHasBeenSet) {
    payload.WithString("ruleArn", m_ruleArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
