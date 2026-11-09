/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/SrtCallerStandardSourceEndpointConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

SrtCallerStandardSourceEndpointConfiguration::SrtCallerStandardSourceEndpointConfiguration(JsonView jsonValue) { *this = jsonValue; }

SrtCallerStandardSourceEndpointConfiguration& SrtCallerStandardSourceEndpointConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("destinationIngestPort")) {
    m_destinationIngestPort = jsonValue.GetInteger("destinationIngestPort");
    m_destinationIngestPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minimumLatencyMilliseconds")) {
    m_minimumLatencyMilliseconds = jsonValue.GetInt64("minimumLatencyMilliseconds");
    m_minimumLatencyMillisecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionPassphrase")) {
    m_encryptionPassphrase = jsonValue.GetObject("encryptionPassphrase");
    m_encryptionPassphraseHasBeenSet = true;
  }
  return *this;
}

JsonValue SrtCallerStandardSourceEndpointConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_destinationIngestPortHasBeenSet) {
    payload.WithInteger("destinationIngestPort", m_destinationIngestPort);
  }

  if (m_minimumLatencyMillisecondsHasBeenSet) {
    payload.WithInt64("minimumLatencyMilliseconds", m_minimumLatencyMilliseconds);
  }

  if (m_encryptionPassphraseHasBeenSet) {
    payload.WithObject("encryptionPassphrase", m_encryptionPassphrase.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
