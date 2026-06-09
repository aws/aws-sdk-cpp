/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchserverless/model/CapacityDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {

CapacityDetails::CapacityDetails(JsonView jsonValue) { *this = jsonValue; }

CapacityDetails& CapacityDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("capacityInOcu")) {
    m_capacityInOcu = jsonValue.GetDouble("capacityInOcu");
    m_capacityInOcuHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autoscalingStatus")) {
    m_autoscalingStatus = AutoscalingStatusMapper::GetAutoscalingStatusForName(jsonValue.GetString("autoscalingStatus"));
    m_autoscalingStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityDetails::Jsonize() const {
  JsonValue payload;

  if (m_capacityInOcuHasBeenSet) {
    payload.WithDouble("capacityInOcu", m_capacityInOcu);
  }

  if (m_autoscalingStatusHasBeenSet) {
    payload.WithString("autoscalingStatus", AutoscalingStatusMapper::GetNameForAutoscalingStatus(m_autoscalingStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
