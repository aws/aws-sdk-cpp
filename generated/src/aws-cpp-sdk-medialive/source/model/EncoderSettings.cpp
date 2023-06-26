/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/EncoderSettings.h>
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

EncoderSettings::EncoderSettings() : 
    m_audioDescriptionsHasBeenSet(false),
    m_availBlankingHasBeenSet(false),
    m_availConfigurationHasBeenSet(false),
    m_blackoutSlateHasBeenSet(false),
    m_captionDescriptionsHasBeenSet(false),
    m_featureActivationsHasBeenSet(false),
    m_globalConfigurationHasBeenSet(false),
    m_motionGraphicsConfigurationHasBeenSet(false),
    m_nielsenConfigurationHasBeenSet(false),
    m_outputGroupsHasBeenSet(false),
    m_timecodeConfigHasBeenSet(false),
    m_videoDescriptionsHasBeenSet(false)
{
}

EncoderSettings::EncoderSettings(JsonView jsonValue) : 
    m_audioDescriptionsHasBeenSet(false),
    m_availBlankingHasBeenSet(false),
    m_availConfigurationHasBeenSet(false),
    m_blackoutSlateHasBeenSet(false),
    m_captionDescriptionsHasBeenSet(false),
    m_featureActivationsHasBeenSet(false),
    m_globalConfigurationHasBeenSet(false),
    m_motionGraphicsConfigurationHasBeenSet(false),
    m_nielsenConfigurationHasBeenSet(false),
    m_outputGroupsHasBeenSet(false),
    m_timecodeConfigHasBeenSet(false),
    m_videoDescriptionsHasBeenSet(false)
{
  *this = jsonValue;
}

EncoderSettings& EncoderSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioDescriptions"))
  {
    Aws::Utils::Array<JsonView> audioDescriptionsJsonList = jsonValue.GetArray("audioDescriptions");
    for(unsigned audioDescriptionsIndex = 0; audioDescriptionsIndex < audioDescriptionsJsonList.GetLength(); ++audioDescriptionsIndex)
    {
      m_audioDescriptions.push_back(audioDescriptionsJsonList[audioDescriptionsIndex].AsObject());
    }
    m_audioDescriptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availBlanking"))
  {
    m_availBlanking = jsonValue.GetObject("availBlanking");

    m_availBlankingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availConfiguration"))
  {
    m_availConfiguration = jsonValue.GetObject("availConfiguration");

    m_availConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blackoutSlate"))
  {
    m_blackoutSlate = jsonValue.GetObject("blackoutSlate");

    m_blackoutSlateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("captionDescriptions"))
  {
    Aws::Utils::Array<JsonView> captionDescriptionsJsonList = jsonValue.GetArray("captionDescriptions");
    for(unsigned captionDescriptionsIndex = 0; captionDescriptionsIndex < captionDescriptionsJsonList.GetLength(); ++captionDescriptionsIndex)
    {
      m_captionDescriptions.push_back(captionDescriptionsJsonList[captionDescriptionsIndex].AsObject());
    }
    m_captionDescriptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("featureActivations"))
  {
    m_featureActivations = jsonValue.GetObject("featureActivations");

    m_featureActivationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("globalConfiguration"))
  {
    m_globalConfiguration = jsonValue.GetObject("globalConfiguration");

    m_globalConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("motionGraphicsConfiguration"))
  {
    m_motionGraphicsConfiguration = jsonValue.GetObject("motionGraphicsConfiguration");

    m_motionGraphicsConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nielsenConfiguration"))
  {
    m_nielsenConfiguration = jsonValue.GetObject("nielsenConfiguration");

    m_nielsenConfigurationHasBeenSet = true;
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

  if(jsonValue.ValueExists("videoDescriptions"))
  {
    Aws::Utils::Array<JsonView> videoDescriptionsJsonList = jsonValue.GetArray("videoDescriptions");
    for(unsigned videoDescriptionsIndex = 0; videoDescriptionsIndex < videoDescriptionsJsonList.GetLength(); ++videoDescriptionsIndex)
    {
      m_videoDescriptions.push_back(videoDescriptionsJsonList[videoDescriptionsIndex].AsObject());
    }
    m_videoDescriptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue EncoderSettings::Jsonize() const
{
  JsonValue payload;

  if(m_audioDescriptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> audioDescriptionsJsonList(m_audioDescriptions.size());
   for(unsigned audioDescriptionsIndex = 0; audioDescriptionsIndex < audioDescriptionsJsonList.GetLength(); ++audioDescriptionsIndex)
   {
     audioDescriptionsJsonList[audioDescriptionsIndex].AsObject(m_audioDescriptions[audioDescriptionsIndex].Jsonize());
   }
   payload.WithArray("audioDescriptions", std::move(audioDescriptionsJsonList));

  }

  if(m_availBlankingHasBeenSet)
  {
   payload.WithObject("availBlanking", m_availBlanking.Jsonize());

  }

  if(m_availConfigurationHasBeenSet)
  {
   payload.WithObject("availConfiguration", m_availConfiguration.Jsonize());

  }

  if(m_blackoutSlateHasBeenSet)
  {
   payload.WithObject("blackoutSlate", m_blackoutSlate.Jsonize());

  }

  if(m_captionDescriptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> captionDescriptionsJsonList(m_captionDescriptions.size());
   for(unsigned captionDescriptionsIndex = 0; captionDescriptionsIndex < captionDescriptionsJsonList.GetLength(); ++captionDescriptionsIndex)
   {
     captionDescriptionsJsonList[captionDescriptionsIndex].AsObject(m_captionDescriptions[captionDescriptionsIndex].Jsonize());
   }
   payload.WithArray("captionDescriptions", std::move(captionDescriptionsJsonList));

  }

  if(m_featureActivationsHasBeenSet)
  {
   payload.WithObject("featureActivations", m_featureActivations.Jsonize());

  }

  if(m_globalConfigurationHasBeenSet)
  {
   payload.WithObject("globalConfiguration", m_globalConfiguration.Jsonize());

  }

  if(m_motionGraphicsConfigurationHasBeenSet)
  {
   payload.WithObject("motionGraphicsConfiguration", m_motionGraphicsConfiguration.Jsonize());

  }

  if(m_nielsenConfigurationHasBeenSet)
  {
   payload.WithObject("nielsenConfiguration", m_nielsenConfiguration.Jsonize());

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

  if(m_videoDescriptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> videoDescriptionsJsonList(m_videoDescriptions.size());
   for(unsigned videoDescriptionsIndex = 0; videoDescriptionsIndex < videoDescriptionsJsonList.GetLength(); ++videoDescriptionsIndex)
   {
     videoDescriptionsJsonList[videoDescriptionsIndex].AsObject(m_videoDescriptions[videoDescriptionsIndex].Jsonize());
   }
   payload.WithArray("videoDescriptions", std::move(videoDescriptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
