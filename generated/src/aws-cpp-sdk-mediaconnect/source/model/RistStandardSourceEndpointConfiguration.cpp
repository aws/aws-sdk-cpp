/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RistStandardSourceEndpointConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RistStandardSourceEndpointConfiguration::RistStandardSourceEndpointConfiguration(JsonView jsonValue) { *this = jsonValue; }

RistStandardSourceEndpointConfiguration& RistStandardSourceEndpointConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("destinationIngestPort")) {
    m_destinationIngestPort = jsonValue.GetInteger("destinationIngestPort");
    m_destinationIngestPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recoveryLatencyMilliseconds")) {
    m_recoveryLatencyMilliseconds = jsonValue.GetInt64("recoveryLatencyMilliseconds");
    m_recoveryLatencyMillisecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue RistStandardSourceEndpointConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_destinationIngestPortHasBeenSet) {
    payload.WithInteger("destinationIngestPort", m_destinationIngestPort);
  }

  if (m_recoveryLatencyMillisecondsHasBeenSet) {
    payload.WithInt64("recoveryLatencyMilliseconds", m_recoveryLatencyMilliseconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
