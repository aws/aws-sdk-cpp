/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/UserConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

UserConfig::UserConfig(JsonView jsonValue) { *this = jsonValue; }

UserConfig& UserConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("role")) {
    m_role = UserRoleMapper::GetUserRoleForName(jsonValue.GetString("role"));
    m_roleHasBeenSet = true;
  }
  return *this;
}

JsonValue UserConfig::Jsonize() const {
  JsonValue payload;

  if (m_roleHasBeenSet) {
    payload.WithString("role", UserRoleMapper::GetNameForUserRole(m_role));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
