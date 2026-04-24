/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyTemplateInformation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

NotifyTemplateInformation::NotifyTemplateInformation(JsonView jsonValue) { *this = jsonValue; }

NotifyTemplateInformation& NotifyTemplateInformation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TemplateId")) {
    m_templateId = jsonValue.GetString("TemplateId");
    m_templateIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Version")) {
    m_version = jsonValue.GetInteger("Version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TemplateType")) {
    m_templateType = NotifyTemplateTypeMapper::GetNotifyTemplateTypeForName(jsonValue.GetString("TemplateType"));
    m_templateTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Channels")) {
    Aws::Utils::Array<JsonView> channelsJsonList = jsonValue.GetArray("Channels");
    for (unsigned channelsIndex = 0; channelsIndex < channelsJsonList.GetLength(); ++channelsIndex) {
      m_channels.push_back(NumberCapabilityMapper::GetNumberCapabilityForName(channelsJsonList[channelsIndex].AsString()));
    }
    m_channelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TierAccess")) {
    Aws::Utils::Array<JsonView> tierAccessJsonList = jsonValue.GetArray("TierAccess");
    for (unsigned tierAccessIndex = 0; tierAccessIndex < tierAccessJsonList.GetLength(); ++tierAccessIndex) {
      m_tierAccess.push_back(
          NotifyConfigurationTierMapper::GetNotifyConfigurationTierForName(tierAccessJsonList[tierAccessIndex].AsString()));
    }
    m_tierAccessHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = NotifyTemplateStatusMapper::GetNotifyTemplateStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SupportedCountries")) {
    Aws::Utils::Array<JsonView> supportedCountriesJsonList = jsonValue.GetArray("SupportedCountries");
    for (unsigned supportedCountriesIndex = 0; supportedCountriesIndex < supportedCountriesJsonList.GetLength();
         ++supportedCountriesIndex) {
      m_supportedCountries.push_back(supportedCountriesJsonList[supportedCountriesIndex].AsString());
    }
    m_supportedCountriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LanguageCode")) {
    m_languageCode = jsonValue.GetString("LanguageCode");
    m_languageCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Content")) {
    m_content = jsonValue.GetString("Content");
    m_contentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Variables")) {
    Aws::Map<Aws::String, JsonView> variablesJsonMap = jsonValue.GetObject("Variables").GetAllObjects();
    for (auto& variablesItem : variablesJsonMap) {
      m_variables[variablesItem.first] = variablesItem.second.AsObject();
    }
    m_variablesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SupportedVoiceIds")) {
    Aws::Utils::Array<JsonView> supportedVoiceIdsJsonList = jsonValue.GetArray("SupportedVoiceIds");
    for (unsigned supportedVoiceIdsIndex = 0; supportedVoiceIdsIndex < supportedVoiceIdsJsonList.GetLength(); ++supportedVoiceIdsIndex) {
      m_supportedVoiceIds.push_back(VoiceIdMapper::GetVoiceIdForName(supportedVoiceIdsJsonList[supportedVoiceIdsIndex].AsString()));
    }
    m_supportedVoiceIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTimestamp")) {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue NotifyTemplateInformation::Jsonize() const {
  JsonValue payload;

  if (m_templateIdHasBeenSet) {
    payload.WithString("TemplateId", m_templateId);
  }

  if (m_versionHasBeenSet) {
    payload.WithInteger("Version", m_version);
  }

  if (m_templateTypeHasBeenSet) {
    payload.WithString("TemplateType", NotifyTemplateTypeMapper::GetNameForNotifyTemplateType(m_templateType));
  }

  if (m_channelsHasBeenSet) {
    Aws::Utils::Array<JsonValue> channelsJsonList(m_channels.size());
    for (unsigned channelsIndex = 0; channelsIndex < channelsJsonList.GetLength(); ++channelsIndex) {
      channelsJsonList[channelsIndex].AsString(NumberCapabilityMapper::GetNameForNumberCapability(m_channels[channelsIndex]));
    }
    payload.WithArray("Channels", std::move(channelsJsonList));
  }

  if (m_tierAccessHasBeenSet) {
    Aws::Utils::Array<JsonValue> tierAccessJsonList(m_tierAccess.size());
    for (unsigned tierAccessIndex = 0; tierAccessIndex < tierAccessJsonList.GetLength(); ++tierAccessIndex) {
      tierAccessJsonList[tierAccessIndex].AsString(
          NotifyConfigurationTierMapper::GetNameForNotifyConfigurationTier(m_tierAccess[tierAccessIndex]));
    }
    payload.WithArray("TierAccess", std::move(tierAccessJsonList));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", NotifyTemplateStatusMapper::GetNameForNotifyTemplateStatus(m_status));
  }

  if (m_supportedCountriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> supportedCountriesJsonList(m_supportedCountries.size());
    for (unsigned supportedCountriesIndex = 0; supportedCountriesIndex < supportedCountriesJsonList.GetLength();
         ++supportedCountriesIndex) {
      supportedCountriesJsonList[supportedCountriesIndex].AsString(m_supportedCountries[supportedCountriesIndex]);
    }
    payload.WithArray("SupportedCountries", std::move(supportedCountriesJsonList));
  }

  if (m_languageCodeHasBeenSet) {
    payload.WithString("LanguageCode", m_languageCode);
  }

  if (m_contentHasBeenSet) {
    payload.WithString("Content", m_content);
  }

  if (m_variablesHasBeenSet) {
    JsonValue variablesJsonMap;
    for (auto& variablesItem : m_variables) {
      variablesJsonMap.WithObject(variablesItem.first, variablesItem.second.Jsonize());
    }
    payload.WithObject("Variables", std::move(variablesJsonMap));
  }

  if (m_supportedVoiceIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> supportedVoiceIdsJsonList(m_supportedVoiceIds.size());
    for (unsigned supportedVoiceIdsIndex = 0; supportedVoiceIdsIndex < supportedVoiceIdsJsonList.GetLength(); ++supportedVoiceIdsIndex) {
      supportedVoiceIdsJsonList[supportedVoiceIdsIndex].AsString(
          VoiceIdMapper::GetNameForVoiceId(m_supportedVoiceIds[supportedVoiceIdsIndex]));
    }
    payload.WithArray("SupportedVoiceIds", std::move(supportedVoiceIdsJsonList));
  }

  if (m_createdTimestampHasBeenSet) {
    payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
