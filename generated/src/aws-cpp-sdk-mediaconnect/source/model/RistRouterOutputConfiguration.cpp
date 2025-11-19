/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RistRouterOutputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RistRouterOutputConfiguration::RistRouterOutputConfiguration(JsonView jsonValue) { *this = jsonValue; }

RistRouterOutputConfiguration& RistRouterOutputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("destinationAddress")) {
    m_destinationAddress = jsonValue.GetString("destinationAddress");
    m_destinationAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationPort")) {
    m_destinationPort = jsonValue.GetInteger("destinationPort");
    m_destinationPortHasBeenSet = true;
  }
  return *this;
}

JsonValue RistRouterOutputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_destinationAddressHasBeenSet) {
    payload.WithString("destinationAddress", m_destinationAddress);
  }

  if (m_destinationPortHasBeenSet) {
    payload.WithInteger("destinationPort", m_destinationPort);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
