/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyConfigurationInformation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

NotifyConfigurationInformation::NotifyConfigurationInformation(JsonView jsonValue) { *this = jsonValue; }

NotifyConfigurationInformation& NotifyConfigurationInformation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("NotifyConfigurationArn")) {
    m_notifyConfigurationArn = jsonValue.GetString("NotifyConfigurationArn");
    m_notifyConfigurationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NotifyConfigurationId")) {
    m_notifyConfigurationId = jsonValue.GetString("NotifyConfigurationId");
    m_notifyConfigurationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DisplayName")) {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseCase")) {
    m_useCase = NotifyConfigurationUseCaseMapper::GetNotifyConfigurationUseCaseForName(jsonValue.GetString("UseCase"));
    m_useCaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DefaultTemplateId")) {
    m_defaultTemplateId = jsonValue.GetString("DefaultTemplateId");
    m_defaultTemplateIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PoolId")) {
    m_poolId = jsonValue.GetString("PoolId");
    m_poolIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EnabledCountries")) {
    Aws::Utils::Array<JsonView> enabledCountriesJsonList = jsonValue.GetArray("EnabledCountries");
    for (unsigned enabledCountriesIndex = 0; enabledCountriesIndex < enabledCountriesJsonList.GetLength(); ++enabledCountriesIndex) {
      m_enabledCountries.push_back(enabledCountriesJsonList[enabledCountriesIndex].AsString());
    }
    m_enabledCountriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EnabledChannels")) {
    Aws::Utils::Array<JsonView> enabledChannelsJsonList = jsonValue.GetArray("EnabledChannels");
    for (unsigned enabledChannelsIndex = 0; enabledChannelsIndex < enabledChannelsJsonList.GetLength(); ++enabledChannelsIndex) {
      m_enabledChannels.push_back(
          NumberCapabilityMapper::GetNumberCapabilityForName(enabledChannelsJsonList[enabledChannelsIndex].AsString()));
    }
    m_enabledChannelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tier")) {
    m_tier = NotifyConfigurationTierMapper::GetNotifyConfigurationTierForName(jsonValue.GetString("Tier"));
    m_tierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TierUpgradeStatus")) {
    m_tierUpgradeStatus = TierUpgradeStatusMapper::GetTierUpgradeStatusForName(jsonValue.GetString("TierUpgradeStatus"));
    m_tierUpgradeStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = NotifyConfigurationStatusMapper::GetNotifyConfigurationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RejectionReason")) {
    m_rejectionReason = jsonValue.GetString("RejectionReason");
    m_rejectionReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeletionProtectionEnabled")) {
    m_deletionProtectionEnabled = jsonValue.GetBool("DeletionProtectionEnabled");
    m_deletionProtectionEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTimestamp")) {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue NotifyConfigurationInformation::Jsonize() const {
  JsonValue payload;

  if (m_notifyConfigurationArnHasBeenSet) {
    payload.WithString("NotifyConfigurationArn", m_notifyConfigurationArn);
  }

  if (m_notifyConfigurationIdHasBeenSet) {
    payload.WithString("NotifyConfigurationId", m_notifyConfigurationId);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("DisplayName", m_displayName);
  }

  if (m_useCaseHasBeenSet) {
    payload.WithString("UseCase", NotifyConfigurationUseCaseMapper::GetNameForNotifyConfigurationUseCase(m_useCase));
  }

  if (m_defaultTemplateIdHasBeenSet) {
    payload.WithString("DefaultTemplateId", m_defaultTemplateId);
  }

  if (m_poolIdHasBeenSet) {
    payload.WithString("PoolId", m_poolId);
  }

  if (m_enabledCountriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> enabledCountriesJsonList(m_enabledCountries.size());
    for (unsigned enabledCountriesIndex = 0; enabledCountriesIndex < enabledCountriesJsonList.GetLength(); ++enabledCountriesIndex) {
      enabledCountriesJsonList[enabledCountriesIndex].AsString(m_enabledCountries[enabledCountriesIndex]);
    }
    payload.WithArray("EnabledCountries", std::move(enabledCountriesJsonList));
  }

  if (m_enabledChannelsHasBeenSet) {
    Aws::Utils::Array<JsonValue> enabledChannelsJsonList(m_enabledChannels.size());
    for (unsigned enabledChannelsIndex = 0; enabledChannelsIndex < enabledChannelsJsonList.GetLength(); ++enabledChannelsIndex) {
      enabledChannelsJsonList[enabledChannelsIndex].AsString(
          NumberCapabilityMapper::GetNameForNumberCapability(m_enabledChannels[enabledChannelsIndex]));
    }
    payload.WithArray("EnabledChannels", std::move(enabledChannelsJsonList));
  }

  if (m_tierHasBeenSet) {
    payload.WithString("Tier", NotifyConfigurationTierMapper::GetNameForNotifyConfigurationTier(m_tier));
  }

  if (m_tierUpgradeStatusHasBeenSet) {
    payload.WithString("TierUpgradeStatus", TierUpgradeStatusMapper::GetNameForTierUpgradeStatus(m_tierUpgradeStatus));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", NotifyConfigurationStatusMapper::GetNameForNotifyConfigurationStatus(m_status));
  }

  if (m_rejectionReasonHasBeenSet) {
    payload.WithString("RejectionReason", m_rejectionReason);
  }

  if (m_deletionProtectionEnabledHasBeenSet) {
    payload.WithBool("DeletionProtectionEnabled", m_deletionProtectionEnabled);
  }

  if (m_createdTimestampHasBeenSet) {
    payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
