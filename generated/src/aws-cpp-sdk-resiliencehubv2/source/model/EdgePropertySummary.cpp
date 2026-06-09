/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/EdgePropertySummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

EdgePropertySummary::EdgePropertySummary(JsonView jsonValue) { *this = jsonValue; }

EdgePropertySummary& EdgePropertySummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("topologyType")) {
    m_topologyType = TopologyTypeMapper::GetTopologyTypeForName(jsonValue.GetString("topologyType"));
    m_topologyTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("label")) {
    m_label = jsonValue.GetString("label");
    m_labelHasBeenSet = true;
  }
  return *this;
}

JsonValue EdgePropertySummary::Jsonize() const {
  JsonValue payload;

  if (m_topologyTypeHasBeenSet) {
    payload.WithString("topologyType", TopologyTypeMapper::GetNameForTopologyType(m_topologyType));
  }

  if (m_labelHasBeenSet) {
    payload.WithString("label", m_label);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
