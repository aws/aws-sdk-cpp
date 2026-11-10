/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/IpsRuleGroupEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

IpsRuleGroupEntry::IpsRuleGroupEntry(JsonView jsonValue) { *this = jsonValue; }

IpsRuleGroupEntry& IpsRuleGroupEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceArn")) {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InlineRuleGroup")) {
    m_inlineRuleGroup = jsonValue.GetObject("InlineRuleGroup");
    m_inlineRuleGroupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Override")) {
    m_override = jsonValue.GetObject("Override");
    m_overrideHasBeenSet = true;
  }
  return *this;
}

JsonValue IpsRuleGroupEntry::Jsonize() const {
  JsonValue payload;

  if (m_resourceArnHasBeenSet) {
    payload.WithString("ResourceArn", m_resourceArn);
  }

  if (m_inlineRuleGroupHasBeenSet) {
    payload.WithObject("InlineRuleGroup", m_inlineRuleGroup.Jsonize());
  }

  if (m_overrideHasBeenSet) {
    payload.WithObject("Override", m_override.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
