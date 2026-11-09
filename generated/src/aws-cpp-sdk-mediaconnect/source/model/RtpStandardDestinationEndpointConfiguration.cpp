/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RtpStandardDestinationEndpointConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RtpStandardDestinationEndpointConfiguration::RtpStandardDestinationEndpointConfiguration(JsonView jsonValue) { *this = jsonValue; }

RtpStandardDestinationEndpointConfiguration& RtpStandardDestinationEndpointConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("destinationAddress")) {
    m_destinationAddress = jsonValue.GetString("destinationAddress");
    m_destinationAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationIngestPort")) {
    m_destinationIngestPort = jsonValue.GetInteger("destinationIngestPort");
    m_destinationIngestPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("forwardErrorCorrectionState")) {
    m_forwardErrorCorrectionState =
        ForwardErrorCorrectionStateMapper::GetForwardErrorCorrectionStateForName(jsonValue.GetString("forwardErrorCorrectionState"));
    m_forwardErrorCorrectionStateHasBeenSet = true;
  }
  return *this;
}

JsonValue RtpStandardDestinationEndpointConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_destinationAddressHasBeenSet) {
    payload.WithString("destinationAddress", m_destinationAddress);
  }

  if (m_destinationIngestPortHasBeenSet) {
    payload.WithInteger("destinationIngestPort", m_destinationIngestPort);
  }

  if (m_forwardErrorCorrectionStateHasBeenSet) {
    payload.WithString("forwardErrorCorrectionState",
                       ForwardErrorCorrectionStateMapper::GetNameForForwardErrorCorrectionState(m_forwardErrorCorrectionState));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
