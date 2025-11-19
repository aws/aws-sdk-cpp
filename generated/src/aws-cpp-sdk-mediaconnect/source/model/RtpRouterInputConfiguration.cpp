/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RtpRouterInputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RtpRouterInputConfiguration::RtpRouterInputConfiguration(JsonView jsonValue) { *this = jsonValue; }

RtpRouterInputConfiguration& RtpRouterInputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("port")) {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if (jsonValue.ValueExists("forwardErrorCorrection")) {
    m_forwardErrorCorrection =
        ForwardErrorCorrectionStateMapper::GetForwardErrorCorrectionStateForName(jsonValue.GetString("forwardErrorCorrection"));
    m_forwardErrorCorrectionHasBeenSet = true;
  }
  return *this;
}

JsonValue RtpRouterInputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_portHasBeenSet) {
    payload.WithInteger("port", m_port);
  }

  if (m_forwardErrorCorrectionHasBeenSet) {
    payload.WithString("forwardErrorCorrection",
                       ForwardErrorCorrectionStateMapper::GetNameForForwardErrorCorrectionState(m_forwardErrorCorrection));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
