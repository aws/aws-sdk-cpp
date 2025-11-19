/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/SrtCallerRouterOutputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

SrtCallerRouterOutputConfiguration::SrtCallerRouterOutputConfiguration(JsonView jsonValue) { *this = jsonValue; }

SrtCallerRouterOutputConfiguration& SrtCallerRouterOutputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("destinationAddress")) {
    m_destinationAddress = jsonValue.GetString("destinationAddress");
    m_destinationAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationPort")) {
    m_destinationPort = jsonValue.GetInteger("destinationPort");
    m_destinationPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minimumLatencyMilliseconds")) {
    m_minimumLatencyMilliseconds = jsonValue.GetInt64("minimumLatencyMilliseconds");
    m_minimumLatencyMillisecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("streamId")) {
    m_streamId = jsonValue.GetString("streamId");
    m_streamIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionConfiguration")) {
    m_encryptionConfiguration = jsonValue.GetObject("encryptionConfiguration");
    m_encryptionConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue SrtCallerRouterOutputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_destinationAddressHasBeenSet) {
    payload.WithString("destinationAddress", m_destinationAddress);
  }

  if (m_destinationPortHasBeenSet) {
    payload.WithInteger("destinationPort", m_destinationPort);
  }

  if (m_minimumLatencyMillisecondsHasBeenSet) {
    payload.WithInt64("minimumLatencyMilliseconds", m_minimumLatencyMilliseconds);
  }

  if (m_streamIdHasBeenSet) {
    payload.WithString("streamId", m_streamId);
  }

  if (m_encryptionConfigurationHasBeenSet) {
    payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
