/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/RoutingRuleParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

RoutingRuleParameters::RoutingRuleParameters(JsonView jsonValue) { *this = jsonValue; }

RoutingRuleParameters& RoutingRuleParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("priority")) {
    m_priority = jsonValue.GetInteger("priority");
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("conditions")) {
    m_conditions = jsonValue.GetObject("conditions");
    m_conditionsHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutingRuleParameters::Jsonize() const {
  JsonValue payload;

  if (m_priorityHasBeenSet) {
    payload.WithInteger("priority", m_priority);
  }

  if (m_conditionsHasBeenSet) {
    payload.WithObject("conditions", m_conditions.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
