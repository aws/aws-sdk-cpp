/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RtmpPushRouterOutputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RtmpPushRouterOutputConfiguration::RtmpPushRouterOutputConfiguration(JsonView jsonValue) { *this = jsonValue; }

RtmpPushRouterOutputConfiguration& RtmpPushRouterOutputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("destinationAddress")) {
    m_destinationAddress = jsonValue.GetString("destinationAddress");
    m_destinationAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationPort")) {
    m_destinationPort = jsonValue.GetInteger("destinationPort");
    m_destinationPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicationName")) {
    m_applicationName = jsonValue.GetString("applicationName");
    m_applicationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("streamName")) {
    m_streamName = jsonValue.GetString("streamName");
    m_streamNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tlsEncryption")) {
    m_tlsEncryption = jsonValue.GetObject("tlsEncryption");
    m_tlsEncryptionHasBeenSet = true;
  }
  return *this;
}

JsonValue RtmpPushRouterOutputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_destinationAddressHasBeenSet) {
    payload.WithString("destinationAddress", m_destinationAddress);
  }

  if (m_destinationPortHasBeenSet) {
    payload.WithInteger("destinationPort", m_destinationPort);
  }

  if (m_applicationNameHasBeenSet) {
    payload.WithString("applicationName", m_applicationName);
  }

  if (m_streamNameHasBeenSet) {
    payload.WithString("streamName", m_streamName);
  }

  if (m_tlsEncryptionHasBeenSet) {
    payload.WithObject("tlsEncryption", m_tlsEncryption.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
