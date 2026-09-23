/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/AdminScopeInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

AdminScopeInput::AdminScopeInput(JsonView jsonValue) { *this = jsonValue; }

AdminScopeInput& AdminScopeInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scopeFilter")) {
    m_scopeFilter = jsonValue.GetObject("scopeFilter");
    m_scopeFilterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("firewallTypeScope")) {
    m_firewallTypeScope = jsonValue.GetObject("firewallTypeScope");
    m_firewallTypeScopeHasBeenSet = true;
  }
  return *this;
}

JsonValue AdminScopeInput::Jsonize() const {
  JsonValue payload;

  if (m_scopeFilterHasBeenSet) {
    payload.WithObject("scopeFilter", m_scopeFilter.Jsonize());
  }

  if (m_firewallTypeScopeHasBeenSet) {
    payload.WithObject("firewallTypeScope", m_firewallTypeScope.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
