/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/FailoverRouterInputIndexedStreamDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

FailoverRouterInputIndexedStreamDetails::FailoverRouterInputIndexedStreamDetails(JsonView jsonValue) { *this = jsonValue; }

FailoverRouterInputIndexedStreamDetails& FailoverRouterInputIndexedStreamDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceIndex")) {
    m_sourceIndex = jsonValue.GetInteger("sourceIndex");
    m_sourceIndexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceIpAddress")) {
    m_sourceIpAddress = jsonValue.GetString("sourceIpAddress");
    m_sourceIpAddressHasBeenSet = true;
  }
  return *this;
}

JsonValue FailoverRouterInputIndexedStreamDetails::Jsonize() const {
  JsonValue payload;

  if (m_sourceIndexHasBeenSet) {
    payload.WithInteger("sourceIndex", m_sourceIndex);
  }

  if (m_sourceIpAddressHasBeenSet) {
    payload.WithString("sourceIpAddress", m_sourceIpAddress);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
