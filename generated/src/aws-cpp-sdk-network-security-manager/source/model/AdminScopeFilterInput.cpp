/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/AdminScopeFilterInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

AdminScopeFilterInput::AdminScopeFilterInput(JsonView jsonValue) { *this = jsonValue; }

AdminScopeFilterInput& AdminScopeFilterInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("includeAll")) {
    m_includeAll = jsonValue.GetObject("includeAll");
    m_includeAllHasBeenSet = true;
  }
  if (jsonValue.ValueExists("includeOnly")) {
    m_includeOnly = jsonValue.GetObject("includeOnly");
    m_includeOnlyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("excludeOnly")) {
    m_excludeOnly = jsonValue.GetObject("excludeOnly");
    m_excludeOnlyHasBeenSet = true;
  }
  return *this;
}

JsonValue AdminScopeFilterInput::Jsonize() const {
  JsonValue payload;

  if (m_includeAllHasBeenSet) {
    payload.WithObject("includeAll", m_includeAll.Jsonize());
  }

  if (m_includeOnlyHasBeenSet) {
    payload.WithObject("includeOnly", m_includeOnly.Jsonize());
  }

  if (m_excludeOnlyHasBeenSet) {
    payload.WithObject("excludeOnly", m_excludeOnly.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
