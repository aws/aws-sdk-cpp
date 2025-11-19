/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/SrtCallerRouterInputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

SrtCallerRouterInputConfiguration::SrtCallerRouterInputConfiguration(JsonView jsonValue) { *this = jsonValue; }

SrtCallerRouterInputConfiguration& SrtCallerRouterInputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceAddress")) {
    m_sourceAddress = jsonValue.GetString("sourceAddress");
    m_sourceAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourcePort")) {
    m_sourcePort = jsonValue.GetInteger("sourcePort");
    m_sourcePortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minimumLatencyMilliseconds")) {
    m_minimumLatencyMilliseconds = jsonValue.GetInt64("minimumLatencyMilliseconds");
    m_minimumLatencyMillisecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("streamId")) {
    m_streamId = jsonValue.GetString("streamId");
    m_streamIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("decryptionConfiguration")) {
    m_decryptionConfiguration = jsonValue.GetObject("decryptionConfiguration");
    m_decryptionConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue SrtCallerRouterInputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sourceAddressHasBeenSet) {
    payload.WithString("sourceAddress", m_sourceAddress);
  }

  if (m_sourcePortHasBeenSet) {
    payload.WithInteger("sourcePort", m_sourcePort);
  }

  if (m_minimumLatencyMillisecondsHasBeenSet) {
    payload.WithInt64("minimumLatencyMilliseconds", m_minimumLatencyMilliseconds);
  }

  if (m_streamIdHasBeenSet) {
    payload.WithString("streamId", m_streamId);
  }

  if (m_decryptionConfigurationHasBeenSet) {
    payload.WithObject("decryptionConfiguration", m_decryptionConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
