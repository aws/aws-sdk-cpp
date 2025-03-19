/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/PutPlaybackConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutPlaybackConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_adDecisionServerUrlHasBeenSet)
  {
   payload.WithString("AdDecisionServerUrl", m_adDecisionServerUrl);

  }

  if(m_availSuppressionHasBeenSet)
  {
   payload.WithObject("AvailSuppression", m_availSuppression.Jsonize());

  }

  if(m_bumperHasBeenSet)
  {
   payload.WithObject("Bumper", m_bumper.Jsonize());

  }

  if(m_cdnConfigurationHasBeenSet)
  {
   payload.WithObject("CdnConfiguration", m_cdnConfiguration.Jsonize());

  }

  if(m_configurationAliasesHasBeenSet)
  {
   JsonValue configurationAliasesJsonMap;
   for(auto& configurationAliasesItem : m_configurationAliases)
   {
     JsonValue __mapOf__stringJsonMap;
     for(auto& __mapOf__stringItem : configurationAliasesItem.second)
     {
       __mapOf__stringJsonMap.WithString(__mapOf__stringItem.first, __mapOf__stringItem.second);
     }
     configurationAliasesJsonMap.WithObject(configurationAliasesItem.first, std::move(__mapOf__stringJsonMap));
   }
   payload.WithObject("ConfigurationAliases", std::move(configurationAliasesJsonMap));

  }

  if(m_dashConfigurationHasBeenSet)
  {
   payload.WithObject("DashConfiguration", m_dashConfiguration.Jsonize());

  }

  if(m_insertionModeHasBeenSet)
  {
   payload.WithString("InsertionMode", InsertionModeMapper::GetNameForInsertionMode(m_insertionMode));
  }

  if(m_livePreRollConfigurationHasBeenSet)
  {
   payload.WithObject("LivePreRollConfiguration", m_livePreRollConfiguration.Jsonize());

  }

  if(m_manifestProcessingRulesHasBeenSet)
  {
   payload.WithObject("ManifestProcessingRules", m_manifestProcessingRules.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_personalizationThresholdSecondsHasBeenSet)
  {
   payload.WithInteger("PersonalizationThresholdSeconds", m_personalizationThresholdSeconds);

  }

  if(m_slateAdUrlHasBeenSet)
  {
   payload.WithString("SlateAdUrl", m_slateAdUrl);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_transcodeProfileNameHasBeenSet)
  {
   payload.WithString("TranscodeProfileName", m_transcodeProfileName);

  }

  if(m_videoContentSourceUrlHasBeenSet)
  {
   payload.WithString("VideoContentSourceUrl", m_videoContentSourceUrl);

  }

  if(m_adConditioningConfigurationHasBeenSet)
  {
   payload.WithObject("AdConditioningConfiguration", m_adConditioningConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




