/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/RoutingRuleTarget.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

RoutingRuleTarget::RoutingRuleTarget(JsonView jsonValue) { *this = jsonValue; }

RoutingRuleTarget& RoutingRuleTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("linkId")) {
    m_linkId = jsonValue.GetString("linkId");
    m_linkIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ruleId")) {
    m_ruleId = jsonValue.GetString("ruleId");
    m_ruleIdHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutingRuleTarget::Jsonize() const {
  JsonValue payload;

  if (m_linkIdHasBeenSet) {
    payload.WithString("linkId", m_linkId);
  }

  if (m_ruleIdHasBeenSet) {
    payload.WithString("ruleId", m_ruleId);
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
