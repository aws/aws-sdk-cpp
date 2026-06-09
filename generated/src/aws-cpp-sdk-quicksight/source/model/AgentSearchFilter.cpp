/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/AgentSearchFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

AgentSearchFilter::AgentSearchFilter(JsonView jsonValue) { *this = jsonValue; }

AgentSearchFilter& AgentSearchFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = AgentOwnershipFilterAttributeMapper::GetAgentOwnershipFilterAttributeForName(jsonValue.GetString("Name"));
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Operator")) {
    m_operator = ComparisonOperatorMapper::GetComparisonOperatorForName(jsonValue.GetString("Operator"));
    m_operatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentSearchFilter::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", AgentOwnershipFilterAttributeMapper::GetNameForAgentOwnershipFilterAttribute(m_name));
  }

  if (m_operatorHasBeenSet) {
    payload.WithString("Operator", ComparisonOperatorMapper::GetNameForComparisonOperator(m_operator));
  }

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
