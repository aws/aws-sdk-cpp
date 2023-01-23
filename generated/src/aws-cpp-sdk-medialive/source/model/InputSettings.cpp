/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputSettings.h>
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

InputSettings::InputSettings() : 
    m_audioSelectorsHasBeenSet(false),
    m_captionSelectorsHasBeenSet(false),
    m_deblockFilter(InputDeblockFilter::NOT_SET),
    m_deblockFilterHasBeenSet(false),
    m_denoiseFilter(InputDenoiseFilter::NOT_SET),
    m_denoiseFilterHasBeenSet(false),
    m_filterStrength(0),
    m_filterStrengthHasBeenSet(false),
    m_inputFilter(InputFilter::NOT_SET),
    m_inputFilterHasBeenSet(false),
    m_networkInputSettingsHasBeenSet(false),
    m_scte35Pid(0),
    m_scte35PidHasBeenSet(false),
    m_smpte2038DataPreference(Smpte2038DataPreference::NOT_SET),
    m_smpte2038DataPreferenceHasBeenSet(false),
    m_sourceEndBehavior(InputSourceEndBehavior::NOT_SET),
    m_sourceEndBehaviorHasBeenSet(false),
    m_videoSelectorHasBeenSet(false)
{
}

InputSettings::InputSettings(JsonView jsonValue) : 
    m_audioSelectorsHasBeenSet(false),
    m_captionSelectorsHasBeenSet(false),
    m_deblockFilter(InputDeblockFilter::NOT_SET),
    m_deblockFilterHasBeenSet(false),
    m_denoiseFilter(InputDenoiseFilter::NOT_SET),
    m_denoiseFilterHasBeenSet(false),
    m_filterStrength(0),
    m_filterStrengthHasBeenSet(false),
    m_inputFilter(InputFilter::NOT_SET),
    m_inputFilterHasBeenSet(false),
    m_networkInputSettingsHasBeenSet(false),
    m_scte35Pid(0),
    m_scte35PidHasBeenSet(false),
    m_smpte2038DataPreference(Smpte2038DataPreference::NOT_SET),
    m_smpte2038DataPreferenceHasBeenSet(false),
    m_sourceEndBehavior(InputSourceEndBehavior::NOT_SET),
    m_sourceEndBehaviorHasBeenSet(false),
    m_videoSelectorHasBeenSet(false)
{
  *this = jsonValue;
}

InputSettings& InputSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioSelectors"))
  {
    Aws::Utils::Array<JsonView> audioSelectorsJsonList = jsonValue.GetArray("audioSelectors");
    for(unsigned audioSelectorsIndex = 0; audioSelectorsIndex < audioSelectorsJsonList.GetLength(); ++audioSelectorsIndex)
    {
      m_audioSelectors.push_back(audioSelectorsJsonList[audioSelectorsIndex].AsObject());
    }
    m_audioSelectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("captionSelectors"))
  {
    Aws::Utils::Array<JsonView> captionSelectorsJsonList = jsonValue.GetArray("captionSelectors");
    for(unsigned captionSelectorsIndex = 0; captionSelectorsIndex < captionSelectorsJsonList.GetLength(); ++captionSelectorsIndex)
    {
      m_captionSelectors.push_back(captionSelectorsJsonList[captionSelectorsIndex].AsObject());
    }
    m_captionSelectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deblockFilter"))
  {
    m_deblockFilter = InputDeblockFilterMapper::GetInputDeblockFilterForName(jsonValue.GetString("deblockFilter"));

    m_deblockFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("denoiseFilter"))
  {
    m_denoiseFilter = InputDenoiseFilterMapper::GetInputDenoiseFilterForName(jsonValue.GetString("denoiseFilter"));

    m_denoiseFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterStrength"))
  {
    m_filterStrength = jsonValue.GetInteger("filterStrength");

    m_filterStrengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputFilter"))
  {
    m_inputFilter = InputFilterMapper::GetInputFilterForName(jsonValue.GetString("inputFilter"));

    m_inputFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkInputSettings"))
  {
    m_networkInputSettings = jsonValue.GetObject("networkInputSettings");

    m_networkInputSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35Pid"))
  {
    m_scte35Pid = jsonValue.GetInteger("scte35Pid");

    m_scte35PidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("smpte2038DataPreference"))
  {
    m_smpte2038DataPreference = Smpte2038DataPreferenceMapper::GetSmpte2038DataPreferenceForName(jsonValue.GetString("smpte2038DataPreference"));

    m_smpte2038DataPreferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceEndBehavior"))
  {
    m_sourceEndBehavior = InputSourceEndBehaviorMapper::GetInputSourceEndBehaviorForName(jsonValue.GetString("sourceEndBehavior"));

    m_sourceEndBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoSelector"))
  {
    m_videoSelector = jsonValue.GetObject("videoSelector");

    m_videoSelectorHasBeenSet = true;
  }

  return *this;
}

JsonValue InputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_audioSelectorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> audioSelectorsJsonList(m_audioSelectors.size());
   for(unsigned audioSelectorsIndex = 0; audioSelectorsIndex < audioSelectorsJsonList.GetLength(); ++audioSelectorsIndex)
   {
     audioSelectorsJsonList[audioSelectorsIndex].AsObject(m_audioSelectors[audioSelectorsIndex].Jsonize());
   }
   payload.WithArray("audioSelectors", std::move(audioSelectorsJsonList));

  }

  if(m_captionSelectorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> captionSelectorsJsonList(m_captionSelectors.size());
   for(unsigned captionSelectorsIndex = 0; captionSelectorsIndex < captionSelectorsJsonList.GetLength(); ++captionSelectorsIndex)
   {
     captionSelectorsJsonList[captionSelectorsIndex].AsObject(m_captionSelectors[captionSelectorsIndex].Jsonize());
   }
   payload.WithArray("captionSelectors", std::move(captionSelectorsJsonList));

  }

  if(m_deblockFilterHasBeenSet)
  {
   payload.WithString("deblockFilter", InputDeblockFilterMapper::GetNameForInputDeblockFilter(m_deblockFilter));
  }

  if(m_denoiseFilterHasBeenSet)
  {
   payload.WithString("denoiseFilter", InputDenoiseFilterMapper::GetNameForInputDenoiseFilter(m_denoiseFilter));
  }

  if(m_filterStrengthHasBeenSet)
  {
   payload.WithInteger("filterStrength", m_filterStrength);

  }

  if(m_inputFilterHasBeenSet)
  {
   payload.WithString("inputFilter", InputFilterMapper::GetNameForInputFilter(m_inputFilter));
  }

  if(m_networkInputSettingsHasBeenSet)
  {
   payload.WithObject("networkInputSettings", m_networkInputSettings.Jsonize());

  }

  if(m_scte35PidHasBeenSet)
  {
   payload.WithInteger("scte35Pid", m_scte35Pid);

  }

  if(m_smpte2038DataPreferenceHasBeenSet)
  {
   payload.WithString("smpte2038DataPreference", Smpte2038DataPreferenceMapper::GetNameForSmpte2038DataPreference(m_smpte2038DataPreference));
  }

  if(m_sourceEndBehaviorHasBeenSet)
  {
   payload.WithString("sourceEndBehavior", InputSourceEndBehaviorMapper::GetNameForInputSourceEndBehavior(m_sourceEndBehavior));
  }

  if(m_videoSelectorHasBeenSet)
  {
   payload.WithObject("videoSelector", m_videoSelector.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
