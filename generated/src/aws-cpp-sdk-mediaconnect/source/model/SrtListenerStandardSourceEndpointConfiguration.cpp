/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/SrtListenerStandardSourceEndpointConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

SrtListenerStandardSourceEndpointConfiguration::SrtListenerStandardSourceEndpointConfiguration(JsonView jsonValue) { *this = jsonValue; }

SrtListenerStandardSourceEndpointConfiguration& SrtListenerStandardSourceEndpointConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceListenerPort")) {
    m_sourceListenerPort = jsonValue.GetInteger("sourceListenerPort");
    m_sourceListenerPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceAddress")) {
    m_sourceAddress = jsonValue.GetString("sourceAddress");
    m_sourceAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minimumLatencyMilliseconds")) {
    m_minimumLatencyMilliseconds = jsonValue.GetInt64("minimumLatencyMilliseconds");
    m_minimumLatencyMillisecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("streamId")) {
    m_streamId = jsonValue.GetString("streamId");
    m_streamIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionPassphrase")) {
    m_encryptionPassphrase = jsonValue.GetObject("encryptionPassphrase");
    m_encryptionPassphraseHasBeenSet = true;
  }
  return *this;
}

JsonValue SrtListenerStandardSourceEndpointConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sourceListenerPortHasBeenSet) {
    payload.WithInteger("sourceListenerPort", m_sourceListenerPort);
  }

  if (m_sourceAddressHasBeenSet) {
    payload.WithString("sourceAddress", m_sourceAddress);
  }

  if (m_minimumLatencyMillisecondsHasBeenSet) {
    payload.WithInt64("minimumLatencyMilliseconds", m_minimumLatencyMilliseconds);
  }

  if (m_streamIdHasBeenSet) {
    payload.WithString("streamId", m_streamId);
  }

  if (m_encryptionPassphraseHasBeenSet) {
    payload.WithObject("encryptionPassphrase", m_encryptionPassphrase.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
