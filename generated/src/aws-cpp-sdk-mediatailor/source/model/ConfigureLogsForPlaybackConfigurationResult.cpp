/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/ConfigureLogsForPlaybackConfigurationResult.h>
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

ConfigureLogsForPlaybackConfigurationResult::ConfigureLogsForPlaybackConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ConfigureLogsForPlaybackConfigurationResult& ConfigureLogsForPlaybackConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PercentEnabled"))
  {
    m_percentEnabled = jsonValue.GetInteger("PercentEnabled");
    m_percentEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PlaybackConfigurationName"))
  {
    m_playbackConfigurationName = jsonValue.GetString("PlaybackConfigurationName");
    m_playbackConfigurationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnabledLoggingStrategies"))
  {
    Aws::Utils::Array<JsonView> enabledLoggingStrategiesJsonList = jsonValue.GetArray("EnabledLoggingStrategies");
    for(unsigned enabledLoggingStrategiesIndex = 0; enabledLoggingStrategiesIndex < enabledLoggingStrategiesJsonList.GetLength(); ++enabledLoggingStrategiesIndex)
    {
      m_enabledLoggingStrategies.push_back(LoggingStrategyMapper::GetLoggingStrategyForName(enabledLoggingStrategiesJsonList[enabledLoggingStrategiesIndex].AsString()));
    }
    m_enabledLoggingStrategiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdsInteractionLog"))
  {
    m_adsInteractionLog = jsonValue.GetObject("AdsInteractionLog");
    m_adsInteractionLogHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManifestServiceInteractionLog"))
  {
    m_manifestServiceInteractionLog = jsonValue.GetObject("ManifestServiceInteractionLog");
    m_manifestServiceInteractionLogHasBeenSet = true;
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
