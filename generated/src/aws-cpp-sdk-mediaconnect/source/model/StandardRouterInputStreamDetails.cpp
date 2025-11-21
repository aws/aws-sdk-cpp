/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/StandardRouterInputStreamDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

StandardRouterInputStreamDetails::StandardRouterInputStreamDetails(JsonView jsonValue) { *this = jsonValue; }

StandardRouterInputStreamDetails& StandardRouterInputStreamDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceIpAddress")) {
    m_sourceIpAddress = jsonValue.GetString("sourceIpAddress");
    m_sourceIpAddressHasBeenSet = true;
  }
  return *this;
}

JsonValue StandardRouterInputStreamDetails::Jsonize() const {
  JsonValue payload;

  if (m_sourceIpAddressHasBeenSet) {
    payload.WithString("sourceIpAddress", m_sourceIpAddress);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
