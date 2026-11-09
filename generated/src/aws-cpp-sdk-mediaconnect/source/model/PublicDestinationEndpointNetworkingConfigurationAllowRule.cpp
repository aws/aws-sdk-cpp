/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/PublicDestinationEndpointNetworkingConfigurationAllowRule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

PublicDestinationEndpointNetworkingConfigurationAllowRule::PublicDestinationEndpointNetworkingConfigurationAllowRule(JsonView jsonValue) {
  *this = jsonValue;
}

PublicDestinationEndpointNetworkingConfigurationAllowRule& PublicDestinationEndpointNetworkingConfigurationAllowRule::operator=(
    JsonView jsonValue) {
  if (jsonValue.ValueExists("cidr")) {
    m_cidr = jsonValue.GetString("cidr");
    m_cidrHasBeenSet = true;
  }
  return *this;
}

JsonValue PublicDestinationEndpointNetworkingConfigurationAllowRule::Jsonize() const {
  JsonValue payload;

  if (m_cidrHasBeenSet) {
    payload.WithString("cidr", m_cidr);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
