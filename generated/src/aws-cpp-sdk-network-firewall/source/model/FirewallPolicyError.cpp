/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/FirewallPolicyError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

FirewallPolicyError::FirewallPolicyError(JsonView jsonValue) { *this = jsonValue; }

FirewallPolicyError& FirewallPolicyError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Code")) {
    m_code = FirewallPolicyErrorCodeMapper::GetFirewallPolicyErrorCodeForName(jsonValue.GetString("Code"));
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceId")) {
    m_resourceId = jsonValue.GetString("ResourceId");
    m_resourceIdHasBeenSet = true;
  }
  return *this;
}

JsonValue FirewallPolicyError::Jsonize() const {
  JsonValue payload;

  if (m_codeHasBeenSet) {
    payload.WithString("Code", FirewallPolicyErrorCodeMapper::GetNameForFirewallPolicyErrorCode(m_code));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  if (m_resourceIdHasBeenSet) {
    payload.WithString("ResourceId", m_resourceId);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
