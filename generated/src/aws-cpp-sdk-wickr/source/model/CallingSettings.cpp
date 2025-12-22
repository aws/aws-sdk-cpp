/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/CallingSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

CallingSettings::CallingSettings(JsonView jsonValue) { *this = jsonValue; }

CallingSettings& CallingSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("canStart11Call")) {
    m_canStart11Call = jsonValue.GetBool("canStart11Call");
    m_canStart11CallHasBeenSet = true;
  }
  if (jsonValue.ValueExists("canVideoCall")) {
    m_canVideoCall = jsonValue.GetBool("canVideoCall");
    m_canVideoCallHasBeenSet = true;
  }
  if (jsonValue.ValueExists("forceTcpCall")) {
    m_forceTcpCall = jsonValue.GetBool("forceTcpCall");
    m_forceTcpCallHasBeenSet = true;
  }
  return *this;
}

JsonValue CallingSettings::Jsonize() const {
  JsonValue payload;

  if (m_canStart11CallHasBeenSet) {
    payload.WithBool("canStart11Call", m_canStart11Call);
  }

  if (m_canVideoCallHasBeenSet) {
    payload.WithBool("canVideoCall", m_canVideoCall);
  }

  if (m_forceTcpCallHasBeenSet) {
    payload.WithBool("forceTcpCall", m_forceTcpCall);
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
