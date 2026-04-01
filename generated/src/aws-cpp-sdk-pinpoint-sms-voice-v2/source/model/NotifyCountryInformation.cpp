/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyCountryInformation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

NotifyCountryInformation::NotifyCountryInformation(JsonView jsonValue) { *this = jsonValue; }

NotifyCountryInformation& NotifyCountryInformation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IsoCountryCode")) {
    m_isoCountryCode = jsonValue.GetString("IsoCountryCode");
    m_isoCountryCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CountryName")) {
    m_countryName = jsonValue.GetString("CountryName");
    m_countryNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SupportedChannels")) {
    Aws::Utils::Array<JsonView> supportedChannelsJsonList = jsonValue.GetArray("SupportedChannels");
    for (unsigned supportedChannelsIndex = 0; supportedChannelsIndex < supportedChannelsJsonList.GetLength(); ++supportedChannelsIndex) {
      m_supportedChannels.push_back(
          NumberCapabilityMapper::GetNumberCapabilityForName(supportedChannelsJsonList[supportedChannelsIndex].AsString()));
    }
    m_supportedChannelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SupportedUseCases")) {
    Aws::Utils::Array<JsonView> supportedUseCasesJsonList = jsonValue.GetArray("SupportedUseCases");
    for (unsigned supportedUseCasesIndex = 0; supportedUseCasesIndex < supportedUseCasesJsonList.GetLength(); ++supportedUseCasesIndex) {
      m_supportedUseCases.push_back(NotifyConfigurationUseCaseMapper::GetNotifyConfigurationUseCaseForName(
          supportedUseCasesJsonList[supportedUseCasesIndex].AsString()));
    }
    m_supportedUseCasesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SupportedTiers")) {
    Aws::Utils::Array<JsonView> supportedTiersJsonList = jsonValue.GetArray("SupportedTiers");
    for (unsigned supportedTiersIndex = 0; supportedTiersIndex < supportedTiersJsonList.GetLength(); ++supportedTiersIndex) {
      m_supportedTiers.push_back(
          NotifyConfigurationTierMapper::GetNotifyConfigurationTierForName(supportedTiersJsonList[supportedTiersIndex].AsString()));
    }
    m_supportedTiersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CustomerOwnedIdentityRequired")) {
    m_customerOwnedIdentityRequired = jsonValue.GetBool("CustomerOwnedIdentityRequired");
    m_customerOwnedIdentityRequiredHasBeenSet = true;
  }
  return *this;
}

JsonValue NotifyCountryInformation::Jsonize() const {
  JsonValue payload;

  if (m_isoCountryCodeHasBeenSet) {
    payload.WithString("IsoCountryCode", m_isoCountryCode);
  }

  if (m_countryNameHasBeenSet) {
    payload.WithString("CountryName", m_countryName);
  }

  if (m_supportedChannelsHasBeenSet) {
    Aws::Utils::Array<JsonValue> supportedChannelsJsonList(m_supportedChannels.size());
    for (unsigned supportedChannelsIndex = 0; supportedChannelsIndex < supportedChannelsJsonList.GetLength(); ++supportedChannelsIndex) {
      supportedChannelsJsonList[supportedChannelsIndex].AsString(
          NumberCapabilityMapper::GetNameForNumberCapability(m_supportedChannels[supportedChannelsIndex]));
    }
    payload.WithArray("SupportedChannels", std::move(supportedChannelsJsonList));
  }

  if (m_supportedUseCasesHasBeenSet) {
    Aws::Utils::Array<JsonValue> supportedUseCasesJsonList(m_supportedUseCases.size());
    for (unsigned supportedUseCasesIndex = 0; supportedUseCasesIndex < supportedUseCasesJsonList.GetLength(); ++supportedUseCasesIndex) {
      supportedUseCasesJsonList[supportedUseCasesIndex].AsString(
          NotifyConfigurationUseCaseMapper::GetNameForNotifyConfigurationUseCase(m_supportedUseCases[supportedUseCasesIndex]));
    }
    payload.WithArray("SupportedUseCases", std::move(supportedUseCasesJsonList));
  }

  if (m_supportedTiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> supportedTiersJsonList(m_supportedTiers.size());
    for (unsigned supportedTiersIndex = 0; supportedTiersIndex < supportedTiersJsonList.GetLength(); ++supportedTiersIndex) {
      supportedTiersJsonList[supportedTiersIndex].AsString(
          NotifyConfigurationTierMapper::GetNameForNotifyConfigurationTier(m_supportedTiers[supportedTiersIndex]));
    }
    payload.WithArray("SupportedTiers", std::move(supportedTiersJsonList));
  }

  if (m_customerOwnedIdentityRequiredHasBeenSet) {
    payload.WithBool("CustomerOwnedIdentityRequired", m_customerOwnedIdentityRequired);
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
