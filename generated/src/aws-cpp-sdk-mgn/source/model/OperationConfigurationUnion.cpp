/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/OperationConfigurationUnion.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

OperationConfigurationUnion::OperationConfigurationUnion(JsonView jsonValue) { *this = jsonValue; }

OperationConfigurationUnion& OperationConfigurationUnion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("securityGroup")) {
    m_securityGroup = jsonValue.GetObject("securityGroup");
    m_securityGroupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("securityGroupRule")) {
    m_securityGroupRule = jsonValue.GetObject("securityGroupRule");
    m_securityGroupRuleHasBeenSet = true;
  }
  return *this;
}

JsonValue OperationConfigurationUnion::Jsonize() const {
  JsonValue payload;

  if (m_securityGroupHasBeenSet) {
    payload.WithObject("securityGroup", m_securityGroup.Jsonize());
  }

  if (m_securityGroupRuleHasBeenSet) {
    payload.WithObject("securityGroupRule", m_securityGroupRule.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
