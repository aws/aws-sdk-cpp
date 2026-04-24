/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RistRouterInputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RistRouterInputConfiguration::RistRouterInputConfiguration(JsonView jsonValue) { *this = jsonValue; }

RistRouterInputConfiguration& RistRouterInputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("port")) {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recoveryLatencyMilliseconds")) {
    m_recoveryLatencyMilliseconds = jsonValue.GetInt64("recoveryLatencyMilliseconds");
    m_recoveryLatencyMillisecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue RistRouterInputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_portHasBeenSet) {
    payload.WithInteger("port", m_port);
  }

  if (m_recoveryLatencyMillisecondsHasBeenSet) {
    payload.WithInt64("recoveryLatencyMilliseconds", m_recoveryLatencyMilliseconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
