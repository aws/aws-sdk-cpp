/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/ProxyRuleGroupAttachment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

ProxyRuleGroupAttachment::ProxyRuleGroupAttachment(JsonView jsonValue) { *this = jsonValue; }

ProxyRuleGroupAttachment& ProxyRuleGroupAttachment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProxyRuleGroupName")) {
    m_proxyRuleGroupName = jsonValue.GetString("ProxyRuleGroupName");
    m_proxyRuleGroupNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InsertPosition")) {
    m_insertPosition = jsonValue.GetInteger("InsertPosition");
    m_insertPositionHasBeenSet = true;
  }
  return *this;
}

JsonValue ProxyRuleGroupAttachment::Jsonize() const {
  JsonValue payload;

  if (m_proxyRuleGroupNameHasBeenSet) {
    payload.WithString("ProxyRuleGroupName", m_proxyRuleGroupName);
  }

  if (m_insertPositionHasBeenSet) {
    payload.WithInteger("InsertPosition", m_insertPosition);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
