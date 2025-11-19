/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/StandardRouterOutputStreamDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

StandardRouterOutputStreamDetails::StandardRouterOutputStreamDetails(JsonView jsonValue) { *this = jsonValue; }

StandardRouterOutputStreamDetails& StandardRouterOutputStreamDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("destinationIpAddress")) {
    m_destinationIpAddress = jsonValue.GetString("destinationIpAddress");
    m_destinationIpAddressHasBeenSet = true;
  }
  return *this;
}

JsonValue StandardRouterOutputStreamDetails::Jsonize() const {
  JsonValue payload;

  if (m_destinationIpAddressHasBeenSet) {
    payload.WithString("destinationIpAddress", m_destinationIpAddress);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
