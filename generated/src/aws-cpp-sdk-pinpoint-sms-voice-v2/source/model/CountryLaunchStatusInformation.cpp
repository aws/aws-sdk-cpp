/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/CountryLaunchStatusInformation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

CountryLaunchStatusInformation::CountryLaunchStatusInformation(JsonView jsonValue) { *this = jsonValue; }

CountryLaunchStatusInformation& CountryLaunchStatusInformation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IsoCountryCode")) {
    m_isoCountryCode = jsonValue.GetString("IsoCountryCode");
    m_isoCountryCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = CountryLaunchStatusMapper::GetCountryLaunchStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RcsPlatformId")) {
    m_rcsPlatformId = jsonValue.GetString("RcsPlatformId");
    m_rcsPlatformIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RegistrationId")) {
    m_registrationId = jsonValue.GetString("RegistrationId");
    m_registrationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CarrierStatus")) {
    Aws::Utils::Array<JsonView> carrierStatusJsonList = jsonValue.GetArray("CarrierStatus");
    for (unsigned carrierStatusIndex = 0; carrierStatusIndex < carrierStatusJsonList.GetLength(); ++carrierStatusIndex) {
      m_carrierStatus.push_back(carrierStatusJsonList[carrierStatusIndex].AsObject());
    }
    m_carrierStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue CountryLaunchStatusInformation::Jsonize() const {
  JsonValue payload;

  if (m_isoCountryCodeHasBeenSet) {
    payload.WithString("IsoCountryCode", m_isoCountryCode);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", CountryLaunchStatusMapper::GetNameForCountryLaunchStatus(m_status));
  }

  if (m_rcsPlatformIdHasBeenSet) {
    payload.WithString("RcsPlatformId", m_rcsPlatformId);
  }

  if (m_registrationIdHasBeenSet) {
    payload.WithString("RegistrationId", m_registrationId);
  }

  if (m_carrierStatusHasBeenSet) {
    Aws::Utils::Array<JsonValue> carrierStatusJsonList(m_carrierStatus.size());
    for (unsigned carrierStatusIndex = 0; carrierStatusIndex < carrierStatusJsonList.GetLength(); ++carrierStatusIndex) {
      carrierStatusJsonList[carrierStatusIndex].AsObject(m_carrierStatus[carrierStatusIndex].Jsonize());
    }
    payload.WithArray("CarrierStatus", std::move(carrierStatusJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
