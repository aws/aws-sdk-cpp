/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/MembershipConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

MembershipConfig::MembershipConfig(JsonView jsonValue) { *this = jsonValue; }

MembershipConfig& MembershipConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("user")) {
    m_user = jsonValue.GetObject("user");
    m_userHasBeenSet = true;
  }
  return *this;
}

JsonValue MembershipConfig::Jsonize() const {
  JsonValue payload;

  if (m_userHasBeenSet) {
    payload.WithObject("user", m_user.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
