/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/CaptionDescription.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {

CaptionDescription::CaptionDescription(JsonView jsonValue) { *this = jsonValue; }

CaptionDescription& CaptionDescription::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("audioSourceNames")) {
    Aws::Utils::Array<JsonView> audioSourceNamesJsonList = jsonValue.GetArray("audioSourceNames");
    for (unsigned audioSourceNamesIndex = 0; audioSourceNamesIndex < audioSourceNamesJsonList.GetLength(); ++audioSourceNamesIndex) {
      m_audioSourceNames.push_back(audioSourceNamesJsonList[audioSourceNamesIndex].AsString());
    }
    m_audioSourceNamesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("captionSelectorName")) {
    m_captionSelectorName = jsonValue.GetString("captionSelectorName");
    m_captionSelectorNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("customLanguageCode")) {
    m_customLanguageCode = jsonValue.GetString("customLanguageCode");
    m_customLanguageCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationSettings")) {
    m_destinationSettings = jsonValue.GetObject("destinationSettings");
    m_destinationSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("languageCode")) {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("languageCode"));
    m_languageCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("languageDescription")) {
    m_languageDescription = jsonValue.GetString("languageDescription");
    m_languageDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = CaptionSourceMapper::GetCaptionSourceForName(jsonValue.GetString("source"));
    m_sourceHasBeenSet = true;
  }
  return *this;
}

JsonValue CaptionDescription::Jsonize() const {
  JsonValue payload;

  if (m_audioSourceNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> audioSourceNamesJsonList(m_audioSourceNames.size());
    for (unsigned audioSourceNamesIndex = 0; audioSourceNamesIndex < audioSourceNamesJsonList.GetLength(); ++audioSourceNamesIndex) {
      audioSourceNamesJsonList[audioSourceNamesIndex].AsString(m_audioSourceNames[audioSourceNamesIndex]);
    }
    payload.WithArray("audioSourceNames", std::move(audioSourceNamesJsonList));
  }

  if (m_captionSelectorNameHasBeenSet) {
    payload.WithString("captionSelectorName", m_captionSelectorName);
  }

  if (m_customLanguageCodeHasBeenSet) {
    payload.WithString("customLanguageCode", m_customLanguageCode);
  }

  if (m_destinationSettingsHasBeenSet) {
    payload.WithObject("destinationSettings", m_destinationSettings.Jsonize());
  }

  if (m_languageCodeHasBeenSet) {
    payload.WithString("languageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if (m_languageDescriptionHasBeenSet) {
    payload.WithString("languageDescription", m_languageDescription);
  }

  if (m_sourceHasBeenSet) {
    payload.WithString("source", CaptionSourceMapper::GetNameForCaptionSource(m_source));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
