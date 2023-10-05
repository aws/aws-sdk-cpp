/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/JobTemplateSettings.h>
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

JobTemplateSettings::JobTemplateSettings() : 
    m_adAvailOffset(0),
    m_adAvailOffsetHasBeenSet(false),
    m_availBlankingHasBeenSet(false),
    m_esamHasBeenSet(false),
    m_extendedDataServicesHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_kantarWatermarkHasBeenSet(false),
    m_motionImageInserterHasBeenSet(false),
    m_nielsenConfigurationHasBeenSet(false),
    m_nielsenNonLinearWatermarkHasBeenSet(false),
    m_outputGroupsHasBeenSet(false),
    m_timecodeConfigHasBeenSet(false),
    m_timedMetadataInsertionHasBeenSet(false)
{
}

JobTemplateSettings::JobTemplateSettings(JsonView jsonValue) : 
    m_adAvailOffset(0),
    m_adAvailOffsetHasBeenSet(false),
    m_availBlankingHasBeenSet(false),
    m_esamHasBeenSet(false),
    m_extendedDataServicesHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_kantarWatermarkHasBeenSet(false),
    m_motionImageInserterHasBeenSet(false),
    m_nielsenConfigurationHasBeenSet(false),
    m_nielsenNonLinearWatermarkHasBeenSet(false),
    m_outputGroupsHasBeenSet(false),
    m_timecodeConfigHasBeenSet(false),
    m_timedMetadataInsertionHasBeenSet(false)
{
  *this = jsonValue;
}

JobTemplateSettings& JobTemplateSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adAvailOffset"))
  {
    m_adAvailOffset = jsonValue.GetInteger("adAvailOffset");

    m_adAvailOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availBlanking"))
  {
    m_availBlanking = jsonValue.GetObject("availBlanking");

    m_availBlankingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("esam"))
  {
    m_esam = jsonValue.GetObject("esam");

    m_esamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("extendedDataServices"))
  {
    m_extendedDataServices = jsonValue.GetObject("extendedDataServices");

    m_extendedDataServicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputs"))
  {
    Aws::Utils::Array<JsonView> inputsJsonList = jsonValue.GetArray("inputs");
    for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
    {
      m_inputs.push_back(inputsJsonList[inputsIndex].AsObject());
    }
    m_inputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kantarWatermark"))
  {
    m_kantarWatermark = jsonValue.GetObject("kantarWatermark");

    m_kantarWatermarkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("motionImageInserter"))
  {
    m_motionImageInserter = jsonValue.GetObject("motionImageInserter");

    m_motionImageInserterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nielsenConfiguration"))
  {
    m_nielsenConfiguration = jsonValue.GetObject("nielsenConfiguration");

    m_nielsenConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nielsenNonLinearWatermark"))
  {
    m_nielsenNonLinearWatermark = jsonValue.GetObject("nielsenNonLinearWatermark");

    m_nielsenNonLinearWatermarkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputGroups"))
  {
    Aws::Utils::Array<JsonView> outputGroupsJsonList = jsonValue.GetArray("outputGroups");
    for(unsigned outputGroupsIndex = 0; outputGroupsIndex < outputGroupsJsonList.GetLength(); ++outputGroupsIndex)
    {
      m_outputGroups.push_back(outputGroupsJsonList[outputGroupsIndex].AsObject());
    }
    m_outputGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timecodeConfig"))
  {
    m_timecodeConfig = jsonValue.GetObject("timecodeConfig");

    m_timecodeConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadataInsertion"))
  {
    m_timedMetadataInsertion = jsonValue.GetObject("timedMetadataInsertion");

    m_timedMetadataInsertionHasBeenSet = true;
  }

  return *this;
}

JsonValue JobTemplateSettings::Jsonize() const
{
  JsonValue payload;

  if(m_adAvailOffsetHasBeenSet)
  {
   payload.WithInteger("adAvailOffset", m_adAvailOffset);

  }

  if(m_availBlankingHasBeenSet)
  {
   payload.WithObject("availBlanking", m_availBlanking.Jsonize());

  }

  if(m_esamHasBeenSet)
  {
   payload.WithObject("esam", m_esam.Jsonize());

  }

  if(m_extendedDataServicesHasBeenSet)
  {
   payload.WithObject("extendedDataServices", m_extendedDataServices.Jsonize());

  }

  if(m_inputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputsJsonList(m_inputs.size());
   for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
   {
     inputsJsonList[inputsIndex].AsObject(m_inputs[inputsIndex].Jsonize());
   }
   payload.WithArray("inputs", std::move(inputsJsonList));

  }

  if(m_kantarWatermarkHasBeenSet)
  {
   payload.WithObject("kantarWatermark", m_kantarWatermark.Jsonize());

  }

  if(m_motionImageInserterHasBeenSet)
  {
   payload.WithObject("motionImageInserter", m_motionImageInserter.Jsonize());

  }

  if(m_nielsenConfigurationHasBeenSet)
  {
   payload.WithObject("nielsenConfiguration", m_nielsenConfiguration.Jsonize());

  }

  if(m_nielsenNonLinearWatermarkHasBeenSet)
  {
   payload.WithObject("nielsenNonLinearWatermark", m_nielsenNonLinearWatermark.Jsonize());

  }

  if(m_outputGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputGroupsJsonList(m_outputGroups.size());
   for(unsigned outputGroupsIndex = 0; outputGroupsIndex < outputGroupsJsonList.GetLength(); ++outputGroupsIndex)
   {
     outputGroupsJsonList[outputGroupsIndex].AsObject(m_outputGroups[outputGroupsIndex].Jsonize());
   }
   payload.WithArray("outputGroups", std::move(outputGroupsJsonList));

  }

  if(m_timecodeConfigHasBeenSet)
  {
   payload.WithObject("timecodeConfig", m_timecodeConfig.Jsonize());

  }

  if(m_timedMetadataInsertionHasBeenSet)
  {
   payload.WithObject("timedMetadataInsertion", m_timedMetadataInsertion.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
