/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/SrtListenerRouterInputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

SrtListenerRouterInputConfiguration::SrtListenerRouterInputConfiguration(JsonView jsonValue) { *this = jsonValue; }

SrtListenerRouterInputConfiguration& SrtListenerRouterInputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("port")) {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minimumLatencyMilliseconds")) {
    m_minimumLatencyMilliseconds = jsonValue.GetInt64("minimumLatencyMilliseconds");
    m_minimumLatencyMillisecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("decryptionConfiguration")) {
    m_decryptionConfiguration = jsonValue.GetObject("decryptionConfiguration");
    m_decryptionConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue SrtListenerRouterInputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_portHasBeenSet) {
    payload.WithInteger("port", m_port);
  }

  if (m_minimumLatencyMillisecondsHasBeenSet) {
    payload.WithInt64("minimumLatencyMilliseconds", m_minimumLatencyMilliseconds);
  }

  if (m_decryptionConfigurationHasBeenSet) {
    payload.WithObject("decryptionConfiguration", m_decryptionConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
