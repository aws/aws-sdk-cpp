﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/InputTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

InputTemplate::InputTemplate() : 
    m_advancedInputFilter(AdvancedInputFilter::NOT_SET),
    m_advancedInputFilterHasBeenSet(false),
    m_advancedInputFilterSettingsHasBeenSet(false),
    m_audioSelectorGroupsHasBeenSet(false),
    m_audioSelectorsHasBeenSet(false),
    m_captionSelectorsHasBeenSet(false),
    m_cropHasBeenSet(false),
    m_deblockFilter(InputDeblockFilter::NOT_SET),
    m_deblockFilterHasBeenSet(false),
    m_denoiseFilter(InputDenoiseFilter::NOT_SET),
    m_denoiseFilterHasBeenSet(false),
    m_dolbyVisionMetadataXmlHasBeenSet(false),
    m_filterEnable(InputFilterEnable::NOT_SET),
    m_filterEnableHasBeenSet(false),
    m_filterStrength(0),
    m_filterStrengthHasBeenSet(false),
    m_imageInserterHasBeenSet(false),
    m_inputClippingsHasBeenSet(false),
    m_inputScanType(InputScanType::NOT_SET),
    m_inputScanTypeHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_programNumber(0),
    m_programNumberHasBeenSet(false),
    m_psiControl(InputPsiControl::NOT_SET),
    m_psiControlHasBeenSet(false),
    m_timecodeSource(InputTimecodeSource::NOT_SET),
    m_timecodeSourceHasBeenSet(false),
    m_timecodeStartHasBeenSet(false),
    m_videoOverlaysHasBeenSet(false),
    m_videoSelectorHasBeenSet(false)
{
}

InputTemplate::InputTemplate(JsonView jsonValue) : 
    m_advancedInputFilter(AdvancedInputFilter::NOT_SET),
    m_advancedInputFilterHasBeenSet(false),
    m_advancedInputFilterSettingsHasBeenSet(false),
    m_audioSelectorGroupsHasBeenSet(false),
    m_audioSelectorsHasBeenSet(false),
    m_captionSelectorsHasBeenSet(false),
    m_cropHasBeenSet(false),
    m_deblockFilter(InputDeblockFilter::NOT_SET),
    m_deblockFilterHasBeenSet(false),
    m_denoiseFilter(InputDenoiseFilter::NOT_SET),
    m_denoiseFilterHasBeenSet(false),
    m_dolbyVisionMetadataXmlHasBeenSet(false),
    m_filterEnable(InputFilterEnable::NOT_SET),
    m_filterEnableHasBeenSet(false),
    m_filterStrength(0),
    m_filterStrengthHasBeenSet(false),
    m_imageInserterHasBeenSet(false),
    m_inputClippingsHasBeenSet(false),
    m_inputScanType(InputScanType::NOT_SET),
    m_inputScanTypeHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_programNumber(0),
    m_programNumberHasBeenSet(false),
    m_psiControl(InputPsiControl::NOT_SET),
    m_psiControlHasBeenSet(false),
    m_timecodeSource(InputTimecodeSource::NOT_SET),
    m_timecodeSourceHasBeenSet(false),
    m_timecodeStartHasBeenSet(false),
    m_videoOverlaysHasBeenSet(false),
    m_videoSelectorHasBeenSet(false)
{
  *this = jsonValue;
}

InputTemplate& InputTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("advancedInputFilter"))
  {
    m_advancedInputFilter = AdvancedInputFilterMapper::GetAdvancedInputFilterForName(jsonValue.GetString("advancedInputFilter"));

    m_advancedInputFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("advancedInputFilterSettings"))
  {
    m_advancedInputFilterSettings = jsonValue.GetObject("advancedInputFilterSettings");

    m_advancedInputFilterSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioSelectorGroups"))
  {
    Aws::Map<Aws::String, JsonView> audioSelectorGroupsJsonMap = jsonValue.GetObject("audioSelectorGroups").GetAllObjects();
    for(auto& audioSelectorGroupsItem : audioSelectorGroupsJsonMap)
    {
      m_audioSelectorGroups[audioSelectorGroupsItem.first] = audioSelectorGroupsItem.second.AsObject();
    }
    m_audioSelectorGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioSelectors"))
  {
    Aws::Map<Aws::String, JsonView> audioSelectorsJsonMap = jsonValue.GetObject("audioSelectors").GetAllObjects();
    for(auto& audioSelectorsItem : audioSelectorsJsonMap)
    {
      m_audioSelectors[audioSelectorsItem.first] = audioSelectorsItem.second.AsObject();
    }
    m_audioSelectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("captionSelectors"))
  {
    Aws::Map<Aws::String, JsonView> captionSelectorsJsonMap = jsonValue.GetObject("captionSelectors").GetAllObjects();
    for(auto& captionSelectorsItem : captionSelectorsJsonMap)
    {
      m_captionSelectors[captionSelectorsItem.first] = captionSelectorsItem.second.AsObject();
    }
    m_captionSelectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("crop"))
  {
    m_crop = jsonValue.GetObject("crop");

    m_cropHasBeenSet = true;
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

  if(jsonValue.ValueExists("dolbyVisionMetadataXml"))
  {
    m_dolbyVisionMetadataXml = jsonValue.GetString("dolbyVisionMetadataXml");

    m_dolbyVisionMetadataXmlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterEnable"))
  {
    m_filterEnable = InputFilterEnableMapper::GetInputFilterEnableForName(jsonValue.GetString("filterEnable"));

    m_filterEnableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterStrength"))
  {
    m_filterStrength = jsonValue.GetInteger("filterStrength");

    m_filterStrengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageInserter"))
  {
    m_imageInserter = jsonValue.GetObject("imageInserter");

    m_imageInserterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputClippings"))
  {
    Aws::Utils::Array<JsonView> inputClippingsJsonList = jsonValue.GetArray("inputClippings");
    for(unsigned inputClippingsIndex = 0; inputClippingsIndex < inputClippingsJsonList.GetLength(); ++inputClippingsIndex)
    {
      m_inputClippings.push_back(inputClippingsJsonList[inputClippingsIndex].AsObject());
    }
    m_inputClippingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputScanType"))
  {
    m_inputScanType = InputScanTypeMapper::GetInputScanTypeForName(jsonValue.GetString("inputScanType"));

    m_inputScanTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("position"))
  {
    m_position = jsonValue.GetObject("position");

    m_positionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programNumber"))
  {
    m_programNumber = jsonValue.GetInteger("programNumber");

    m_programNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("psiControl"))
  {
    m_psiControl = InputPsiControlMapper::GetInputPsiControlForName(jsonValue.GetString("psiControl"));

    m_psiControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timecodeSource"))
  {
    m_timecodeSource = InputTimecodeSourceMapper::GetInputTimecodeSourceForName(jsonValue.GetString("timecodeSource"));

    m_timecodeSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timecodeStart"))
  {
    m_timecodeStart = jsonValue.GetString("timecodeStart");

    m_timecodeStartHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoOverlays"))
  {
    Aws::Utils::Array<JsonView> videoOverlaysJsonList = jsonValue.GetArray("videoOverlays");
    for(unsigned videoOverlaysIndex = 0; videoOverlaysIndex < videoOverlaysJsonList.GetLength(); ++videoOverlaysIndex)
    {
      m_videoOverlays.push_back(videoOverlaysJsonList[videoOverlaysIndex].AsObject());
    }
    m_videoOverlaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoSelector"))
  {
    m_videoSelector = jsonValue.GetObject("videoSelector");

    m_videoSelectorHasBeenSet = true;
  }

  return *this;
}

JsonValue InputTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_advancedInputFilterHasBeenSet)
  {
   payload.WithString("advancedInputFilter", AdvancedInputFilterMapper::GetNameForAdvancedInputFilter(m_advancedInputFilter));
  }

  if(m_advancedInputFilterSettingsHasBeenSet)
  {
   payload.WithObject("advancedInputFilterSettings", m_advancedInputFilterSettings.Jsonize());

  }

  if(m_audioSelectorGroupsHasBeenSet)
  {
   JsonValue audioSelectorGroupsJsonMap;
   for(auto& audioSelectorGroupsItem : m_audioSelectorGroups)
   {
     audioSelectorGroupsJsonMap.WithObject(audioSelectorGroupsItem.first, audioSelectorGroupsItem.second.Jsonize());
   }
   payload.WithObject("audioSelectorGroups", std::move(audioSelectorGroupsJsonMap));

  }

  if(m_audioSelectorsHasBeenSet)
  {
   JsonValue audioSelectorsJsonMap;
   for(auto& audioSelectorsItem : m_audioSelectors)
   {
     audioSelectorsJsonMap.WithObject(audioSelectorsItem.first, audioSelectorsItem.second.Jsonize());
   }
   payload.WithObject("audioSelectors", std::move(audioSelectorsJsonMap));

  }

  if(m_captionSelectorsHasBeenSet)
  {
   JsonValue captionSelectorsJsonMap;
   for(auto& captionSelectorsItem : m_captionSelectors)
   {
     captionSelectorsJsonMap.WithObject(captionSelectorsItem.first, captionSelectorsItem.second.Jsonize());
   }
   payload.WithObject("captionSelectors", std::move(captionSelectorsJsonMap));

  }

  if(m_cropHasBeenSet)
  {
   payload.WithObject("crop", m_crop.Jsonize());

  }

  if(m_deblockFilterHasBeenSet)
  {
   payload.WithString("deblockFilter", InputDeblockFilterMapper::GetNameForInputDeblockFilter(m_deblockFilter));
  }

  if(m_denoiseFilterHasBeenSet)
  {
   payload.WithString("denoiseFilter", InputDenoiseFilterMapper::GetNameForInputDenoiseFilter(m_denoiseFilter));
  }

  if(m_dolbyVisionMetadataXmlHasBeenSet)
  {
   payload.WithString("dolbyVisionMetadataXml", m_dolbyVisionMetadataXml);

  }

  if(m_filterEnableHasBeenSet)
  {
   payload.WithString("filterEnable", InputFilterEnableMapper::GetNameForInputFilterEnable(m_filterEnable));
  }

  if(m_filterStrengthHasBeenSet)
  {
   payload.WithInteger("filterStrength", m_filterStrength);

  }

  if(m_imageInserterHasBeenSet)
  {
   payload.WithObject("imageInserter", m_imageInserter.Jsonize());

  }

  if(m_inputClippingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputClippingsJsonList(m_inputClippings.size());
   for(unsigned inputClippingsIndex = 0; inputClippingsIndex < inputClippingsJsonList.GetLength(); ++inputClippingsIndex)
   {
     inputClippingsJsonList[inputClippingsIndex].AsObject(m_inputClippings[inputClippingsIndex].Jsonize());
   }
   payload.WithArray("inputClippings", std::move(inputClippingsJsonList));

  }

  if(m_inputScanTypeHasBeenSet)
  {
   payload.WithString("inputScanType", InputScanTypeMapper::GetNameForInputScanType(m_inputScanType));
  }

  if(m_positionHasBeenSet)
  {
   payload.WithObject("position", m_position.Jsonize());

  }

  if(m_programNumberHasBeenSet)
  {
   payload.WithInteger("programNumber", m_programNumber);

  }

  if(m_psiControlHasBeenSet)
  {
   payload.WithString("psiControl", InputPsiControlMapper::GetNameForInputPsiControl(m_psiControl));
  }

  if(m_timecodeSourceHasBeenSet)
  {
   payload.WithString("timecodeSource", InputTimecodeSourceMapper::GetNameForInputTimecodeSource(m_timecodeSource));
  }

  if(m_timecodeStartHasBeenSet)
  {
   payload.WithString("timecodeStart", m_timecodeStart);

  }

  if(m_videoOverlaysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> videoOverlaysJsonList(m_videoOverlays.size());
   for(unsigned videoOverlaysIndex = 0; videoOverlaysIndex < videoOverlaysJsonList.GetLength(); ++videoOverlaysIndex)
   {
     videoOverlaysJsonList[videoOverlaysIndex].AsObject(m_videoOverlays[videoOverlaysIndex].Jsonize());
   }
   payload.WithArray("videoOverlays", std::move(videoOverlaysJsonList));

  }

  if(m_videoSelectorHasBeenSet)
  {
   payload.WithObject("videoSelector", m_videoSelector.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
