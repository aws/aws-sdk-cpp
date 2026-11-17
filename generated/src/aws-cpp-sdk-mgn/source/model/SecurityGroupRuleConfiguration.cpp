/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/SecurityGroupRuleConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

SecurityGroupRuleConfiguration::SecurityGroupRuleConfiguration(JsonView jsonValue) { *this = jsonValue; }

SecurityGroupRuleConfiguration& SecurityGroupRuleConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enableReferencing")) {
    m_enableReferencing = jsonValue.GetBool("enableReferencing");
    m_enableReferencingHasBeenSet = true;
  }
  return *this;
}

JsonValue SecurityGroupRuleConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_enableReferencingHasBeenSet) {
    payload.WithBool("enableReferencing", m_enableReferencing);
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
