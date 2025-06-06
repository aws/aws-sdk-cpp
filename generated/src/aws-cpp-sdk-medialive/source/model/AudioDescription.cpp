﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AudioDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

AudioDescription::AudioDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

AudioDescription& AudioDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioNormalizationSettings"))
  {
    m_audioNormalizationSettings = jsonValue.GetObject("audioNormalizationSettings");
    m_audioNormalizationSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("audioSelectorName"))
  {
    m_audioSelectorName = jsonValue.GetString("audioSelectorName");
    m_audioSelectorNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("audioType"))
  {
    m_audioType = AudioTypeMapper::GetAudioTypeForName(jsonValue.GetString("audioType"));
    m_audioTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("audioTypeControl"))
  {
    m_audioTypeControl = AudioDescriptionAudioTypeControlMapper::GetAudioDescriptionAudioTypeControlForName(jsonValue.GetString("audioTypeControl"));
    m_audioTypeControlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("audioWatermarkingSettings"))
  {
    m_audioWatermarkingSettings = jsonValue.GetObject("audioWatermarkingSettings");
    m_audioWatermarkingSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("codecSettings"))
  {
    m_codecSettings = jsonValue.GetObject("codecSettings");
    m_codecSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("languageCode"))
  {
    m_languageCode = jsonValue.GetString("languageCode");
    m_languageCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("languageCodeControl"))
  {
    m_languageCodeControl = AudioDescriptionLanguageCodeControlMapper::GetAudioDescriptionLanguageCodeControlForName(jsonValue.GetString("languageCodeControl"));
    m_languageCodeControlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("remixSettings"))
  {
    m_remixSettings = jsonValue.GetObject("remixSettings");
    m_remixSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("streamName"))
  {
    m_streamName = jsonValue.GetString("streamName");
    m_streamNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("audioDashRoles"))
  {
    Aws::Utils::Array<JsonView> audioDashRolesJsonList = jsonValue.GetArray("audioDashRoles");
    for(unsigned audioDashRolesIndex = 0; audioDashRolesIndex < audioDashRolesJsonList.GetLength(); ++audioDashRolesIndex)
    {
      m_audioDashRoles.push_back(DashRoleAudioMapper::GetDashRoleAudioForName(audioDashRolesJsonList[audioDashRolesIndex].AsString()));
    }
    m_audioDashRolesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dvbDashAccessibility"))
  {
    m_dvbDashAccessibility = DvbDashAccessibilityMapper::GetDvbDashAccessibilityForName(jsonValue.GetString("dvbDashAccessibility"));
    m_dvbDashAccessibilityHasBeenSet = true;
  }
  return *this;
}

JsonValue AudioDescription::Jsonize() const
{
  JsonValue payload;

  if(m_audioNormalizationSettingsHasBeenSet)
  {
   payload.WithObject("audioNormalizationSettings", m_audioNormalizationSettings.Jsonize());

  }

  if(m_audioSelectorNameHasBeenSet)
  {
   payload.WithString("audioSelectorName", m_audioSelectorName);

  }

  if(m_audioTypeHasBeenSet)
  {
   payload.WithString("audioType", AudioTypeMapper::GetNameForAudioType(m_audioType));
  }

  if(m_audioTypeControlHasBeenSet)
  {
   payload.WithString("audioTypeControl", AudioDescriptionAudioTypeControlMapper::GetNameForAudioDescriptionAudioTypeControl(m_audioTypeControl));
  }

  if(m_audioWatermarkingSettingsHasBeenSet)
  {
   payload.WithObject("audioWatermarkingSettings", m_audioWatermarkingSettings.Jsonize());

  }

  if(m_codecSettingsHasBeenSet)
  {
   payload.WithObject("codecSettings", m_codecSettings.Jsonize());

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("languageCode", m_languageCode);

  }

  if(m_languageCodeControlHasBeenSet)
  {
   payload.WithString("languageCodeControl", AudioDescriptionLanguageCodeControlMapper::GetNameForAudioDescriptionLanguageCodeControl(m_languageCodeControl));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_remixSettingsHasBeenSet)
  {
   payload.WithObject("remixSettings", m_remixSettings.Jsonize());

  }

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("streamName", m_streamName);

  }

  if(m_audioDashRolesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> audioDashRolesJsonList(m_audioDashRoles.size());
   for(unsigned audioDashRolesIndex = 0; audioDashRolesIndex < audioDashRolesJsonList.GetLength(); ++audioDashRolesIndex)
   {
     audioDashRolesJsonList[audioDashRolesIndex].AsString(DashRoleAudioMapper::GetNameForDashRoleAudio(m_audioDashRoles[audioDashRolesIndex]));
   }
   payload.WithArray("audioDashRoles", std::move(audioDashRolesJsonList));

  }

  if(m_dvbDashAccessibilityHasBeenSet)
  {
   payload.WithString("dvbDashAccessibility", DvbDashAccessibilityMapper::GetNameForDvbDashAccessibility(m_dvbDashAccessibility));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
