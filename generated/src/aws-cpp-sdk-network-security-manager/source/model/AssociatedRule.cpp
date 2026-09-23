/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/AssociatedRule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

AssociatedRule::AssociatedRule(JsonView jsonValue) { *this = jsonValue; }

AssociatedRule& AssociatedRule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ruleArn")) {
    m_ruleArn = jsonValue.GetString("ruleArn");
    m_ruleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AssociatedRule::Jsonize() const {
  JsonValue payload;

  if (m_ruleArnHasBeenSet) {
    payload.WithString("ruleArn", m_ruleArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
