/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/NatGatewayMapping.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

NatGatewayMapping::NatGatewayMapping(JsonView jsonValue) { *this = jsonValue; }

NatGatewayMapping& NatGatewayMapping::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("NatGatewayId")) {
    m_natGatewayId = jsonValue.GetString("NatGatewayId");
    m_natGatewayIdHasBeenSet = true;
  }
  return *this;
}

JsonValue NatGatewayMapping::Jsonize() const {
  JsonValue payload;

  if (m_natGatewayIdHasBeenSet) {
    payload.WithString("NatGatewayId", m_natGatewayId);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
