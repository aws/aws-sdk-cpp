/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/model/OrderingRequirement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {

OrderingRequirement::OrderingRequirement(JsonView jsonValue) { *this = jsonValue; }

OrderingRequirement& OrderingRequirement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StatusMessage")) {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OrderingRequirementType")) {
    m_orderingRequirementType =
        OrderingRequirementTypeMapper::GetOrderingRequirementTypeForName(jsonValue.GetString("OrderingRequirementType"));
    m_orderingRequirementTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = OrderingRequirementStatusMapper::GetOrderingRequirementStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue OrderingRequirement::Jsonize() const {
  JsonValue payload;

  if (m_statusMessageHasBeenSet) {
    payload.WithString("StatusMessage", m_statusMessage);
  }

  if (m_orderingRequirementTypeHasBeenSet) {
    payload.WithString("OrderingRequirementType",
                       OrderingRequirementTypeMapper::GetNameForOrderingRequirementType(m_orderingRequirementType));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", OrderingRequirementStatusMapper::GetNameForOrderingRequirementStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
