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

ConfigureLogsForPlaybackConfigurationResult::ConfigureLogsForPlaybackConfigurationResult() : 
    m_percentEnabled(0)
{
}

ConfigureLogsForPlaybackConfigurationResult::ConfigureLogsForPlaybackConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_percentEnabled(0)
{
  *this = result;
}

ConfigureLogsForPlaybackConfigurationResult& ConfigureLogsForPlaybackConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PercentEnabled"))
  {
    m_percentEnabled = jsonValue.GetInteger("PercentEnabled");

  }

  if(jsonValue.ValueExists("PlaybackConfigurationName"))
  {
    m_playbackConfigurationName = jsonValue.GetString("PlaybackConfigurationName");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
