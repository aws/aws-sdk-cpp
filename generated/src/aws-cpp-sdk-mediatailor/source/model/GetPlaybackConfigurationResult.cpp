/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/GetPlaybackConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPlaybackConfigurationResult::GetPlaybackConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPlaybackConfigurationResult& GetPlaybackConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AdDecisionServerUrl"))
  {
    m_adDecisionServerUrl = jsonValue.GetString("AdDecisionServerUrl");
    m_adDecisionServerUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailSuppression"))
  {
    m_availSuppression = jsonValue.GetObject("AvailSuppression");
    m_availSuppressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Bumper"))
  {
    m_bumper = jsonValue.GetObject("Bumper");
    m_bumperHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CdnConfiguration"))
  {
    m_cdnConfiguration = jsonValue.GetObject("CdnConfiguration");
    m_cdnConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConfigurationAliases"))
  {
    Aws::Map<Aws::String, JsonView> configurationAliasesJsonMap = jsonValue.GetObject("ConfigurationAliases").GetAllObjects();
    for(auto& configurationAliasesItem : configurationAliasesJsonMap)
    {
      Aws::Map<Aws::String, JsonView> __mapOf__stringJsonMap = configurationAliasesItem.second.GetAllObjects();
      Aws::Map<Aws::String, Aws::String> __mapOf__stringMap;
      for(auto& __mapOf__stringItem : __mapOf__stringJsonMap)
      {
        __mapOf__stringMap[__mapOf__stringItem.first] = __mapOf__stringItem.second.AsString();
      }
      m_configurationAliases[configurationAliasesItem.first] = std::move(__mapOf__stringMap);
    }
    m_configurationAliasesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DashConfiguration"))
  {
    m_dashConfiguration = jsonValue.GetObject("DashConfiguration");
    m_dashConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HlsConfiguration"))
  {
    m_hlsConfiguration = jsonValue.GetObject("HlsConfiguration");
    m_hlsConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InsertionMode"))
  {
    m_insertionMode = InsertionModeMapper::GetInsertionModeForName(jsonValue.GetString("InsertionMode"));
    m_insertionModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LivePreRollConfiguration"))
  {
    m_livePreRollConfiguration = jsonValue.GetObject("LivePreRollConfiguration");
    m_livePreRollConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogConfiguration"))
  {
    m_logConfiguration = jsonValue.GetObject("LogConfiguration");
    m_logConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManifestProcessingRules"))
  {
    m_manifestProcessingRules = jsonValue.GetObject("ManifestProcessingRules");
    m_manifestProcessingRulesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PersonalizationThresholdSeconds"))
  {
    m_personalizationThresholdSeconds = jsonValue.GetInteger("PersonalizationThresholdSeconds");
    m_personalizationThresholdSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PlaybackConfigurationArn"))
  {
    m_playbackConfigurationArn = jsonValue.GetString("PlaybackConfigurationArn");
    m_playbackConfigurationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PlaybackEndpointPrefix"))
  {
    m_playbackEndpointPrefix = jsonValue.GetString("PlaybackEndpointPrefix");
    m_playbackEndpointPrefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SessionInitializationEndpointPrefix"))
  {
    m_sessionInitializationEndpointPrefix = jsonValue.GetString("SessionInitializationEndpointPrefix");
    m_sessionInitializationEndpointPrefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SlateAdUrl"))
  {
    m_slateAdUrl = jsonValue.GetString("SlateAdUrl");
    m_slateAdUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TranscodeProfileName"))
  {
    m_transcodeProfileName = jsonValue.GetString("TranscodeProfileName");
    m_transcodeProfileNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VideoContentSourceUrl"))
  {
    m_videoContentSourceUrl = jsonValue.GetString("VideoContentSourceUrl");
    m_videoContentSourceUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdConditioningConfiguration"))
  {
    m_adConditioningConfiguration = jsonValue.GetObject("AdConditioningConfiguration");
    m_adConditioningConfigurationHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
