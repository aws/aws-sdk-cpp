/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/polly/model/Voice.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Polly {
namespace Model {

Voice::Voice(JsonView jsonValue) { *this = jsonValue; }

Voice& Voice::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Gender")) {
    m_gender = GenderMapper::GetGenderForName(jsonValue.GetString("Gender"));
    m_genderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = VoiceIdMapper::GetVoiceIdForName(jsonValue.GetString("Id"));
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LanguageCode")) {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("LanguageCode"));
    m_languageCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LanguageName")) {
    m_languageName = jsonValue.GetString("LanguageName");
    m_languageNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Origin")) {
    m_origin = VoiceOriginMapper::GetVoiceOriginForName(jsonValue.GetString("Origin"));
    m_originHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = VoiceStatusMapper::GetVoiceStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusReason")) {
    m_statusReason = jsonValue.GetString("StatusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AdditionalLanguageCodes")) {
    Aws::Utils::Array<JsonView> additionalLanguageCodesJsonList = jsonValue.GetArray("AdditionalLanguageCodes");
    for (unsigned additionalLanguageCodesIndex = 0; additionalLanguageCodesIndex < additionalLanguageCodesJsonList.GetLength();
         ++additionalLanguageCodesIndex) {
      m_additionalLanguageCodes.push_back(
          LanguageCodeMapper::GetLanguageCodeForName(additionalLanguageCodesJsonList[additionalLanguageCodesIndex].AsString()));
    }
    m_additionalLanguageCodesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SupportedEngines")) {
    Aws::Utils::Array<JsonView> supportedEnginesJsonList = jsonValue.GetArray("SupportedEngines");
    for (unsigned supportedEnginesIndex = 0; supportedEnginesIndex < supportedEnginesJsonList.GetLength(); ++supportedEnginesIndex) {
      m_supportedEngines.push_back(EngineMapper::GetEngineForName(supportedEnginesJsonList[supportedEnginesIndex].AsString()));
    }
    m_supportedEnginesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VoiceCreationData")) {
    m_voiceCreationData = jsonValue.GetObject("VoiceCreationData");
    m_voiceCreationDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CustomerManagedEncryption")) {
    m_customerManagedEncryption = jsonValue.GetObject("CustomerManagedEncryption");
    m_customerManagedEncryptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue Voice::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_genderHasBeenSet) {
    payload.WithString("Gender", GenderMapper::GetNameForGender(m_gender));
  }

  if (m_idHasBeenSet) {
    payload.WithString("Id", VoiceIdMapper::GetNameForVoiceId(m_id));
  }

  if (m_languageCodeHasBeenSet) {
    payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if (m_languageNameHasBeenSet) {
    payload.WithString("LanguageName", m_languageName);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_originHasBeenSet) {
    payload.WithString("Origin", VoiceOriginMapper::GetNameForVoiceOrigin(m_origin));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", VoiceStatusMapper::GetNameForVoiceStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("StatusReason", m_statusReason);
  }

  if (m_additionalLanguageCodesHasBeenSet) {
    Aws::Utils::Array<JsonValue> additionalLanguageCodesJsonList(m_additionalLanguageCodes.size());
    for (unsigned additionalLanguageCodesIndex = 0; additionalLanguageCodesIndex < additionalLanguageCodesJsonList.GetLength();
         ++additionalLanguageCodesIndex) {
      additionalLanguageCodesJsonList[additionalLanguageCodesIndex].AsString(
          LanguageCodeMapper::GetNameForLanguageCode(m_additionalLanguageCodes[additionalLanguageCodesIndex]));
    }
    payload.WithArray("AdditionalLanguageCodes", std::move(additionalLanguageCodesJsonList));
  }

  if (m_supportedEnginesHasBeenSet) {
    Aws::Utils::Array<JsonValue> supportedEnginesJsonList(m_supportedEngines.size());
    for (unsigned supportedEnginesIndex = 0; supportedEnginesIndex < supportedEnginesJsonList.GetLength(); ++supportedEnginesIndex) {
      supportedEnginesJsonList[supportedEnginesIndex].AsString(EngineMapper::GetNameForEngine(m_supportedEngines[supportedEnginesIndex]));
    }
    payload.WithArray("SupportedEngines", std::move(supportedEnginesJsonList));
  }

  if (m_voiceCreationDataHasBeenSet) {
    payload.WithObject("VoiceCreationData", m_voiceCreationData.Jsonize());
  }

  if (m_customerManagedEncryptionHasBeenSet) {
    payload.WithObject("CustomerManagedEncryption", m_customerManagedEncryption.Jsonize());
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
