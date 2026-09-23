/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/FirewallSyncReason.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

FirewallSyncReason::FirewallSyncReason(JsonView jsonValue) { *this = jsonValue; }

FirewallSyncReason& FirewallSyncReason::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("missingFirewall")) {
    m_missingFirewall = jsonValue.GetString("missingFirewall");
    m_missingFirewallHasBeenSet = true;
  }
  if (jsonValue.ValueExists("invalidFirewall")) {
    m_invalidFirewall = jsonValue.GetObject("invalidFirewall");
    m_invalidFirewallHasBeenSet = true;
  }
  return *this;
}

JsonValue FirewallSyncReason::Jsonize() const {
  JsonValue payload;

  if (m_missingFirewallHasBeenSet) {
    payload.WithString("missingFirewall", m_missingFirewall);
  }

  if (m_invalidFirewallHasBeenSet) {
    payload.WithObject("invalidFirewall", m_invalidFirewall.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
