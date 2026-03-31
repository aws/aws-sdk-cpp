/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/TargetNetwork.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

TargetNetwork::TargetNetwork(JsonView jsonValue) { *this = jsonValue; }

TargetNetwork& TargetNetwork::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("topology")) {
    m_topology = TargetNetworkTopologyMapper::GetTargetNetworkTopologyForName(jsonValue.GetString("topology"));
    m_topologyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inboundCidr")) {
    m_inboundCidr = jsonValue.GetString("inboundCidr");
    m_inboundCidrHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outboundCidr")) {
    m_outboundCidr = jsonValue.GetString("outboundCidr");
    m_outboundCidrHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inspectionCidr")) {
    m_inspectionCidr = jsonValue.GetString("inspectionCidr");
    m_inspectionCidrHasBeenSet = true;
  }
  return *this;
}

JsonValue TargetNetwork::Jsonize() const {
  JsonValue payload;

  if (m_topologyHasBeenSet) {
    payload.WithString("topology", TargetNetworkTopologyMapper::GetNameForTargetNetworkTopology(m_topology));
  }

  if (m_inboundCidrHasBeenSet) {
    payload.WithString("inboundCidr", m_inboundCidr);
  }

  if (m_outboundCidrHasBeenSet) {
    payload.WithString("outboundCidr", m_outboundCidr);
  }

  if (m_inspectionCidrHasBeenSet) {
    payload.WithString("inspectionCidr", m_inspectionCidr);
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
