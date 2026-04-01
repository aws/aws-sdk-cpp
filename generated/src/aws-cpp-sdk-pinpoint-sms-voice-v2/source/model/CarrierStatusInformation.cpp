/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/CarrierStatusInformation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

CarrierStatusInformation::CarrierStatusInformation(JsonView jsonValue) { *this = jsonValue; }

CarrierStatusInformation& CarrierStatusInformation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CarrierName")) {
    m_carrierName = jsonValue.GetString("CarrierName");
    m_carrierNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = CarrierStatusMapper::GetCarrierStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue CarrierStatusInformation::Jsonize() const {
  JsonValue payload;

  if (m_carrierNameHasBeenSet) {
    payload.WithString("CarrierName", m_carrierName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", CarrierStatusMapper::GetNameForCarrierStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
